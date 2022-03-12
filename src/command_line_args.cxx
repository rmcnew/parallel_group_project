
#include <cstdio>
#include <cstdlib>
#include <mpi.h>
#include <string>
#include <vector>

#include "command_line_args.h"

extern int rank;
extern int process_count;


// ***** Command Line Arguments *****
// Print usage help
void print_usage() {
	if (rank == LEADER) {
		printf("\n\nUsage: mpirun -n <PROCESS_COUNT> -f <hostfile> ./matrix_profile --input-file <INPUT_FILE.CSV> --output-file <OUTPUT_FILE.CSV> [--window-size WINDOW_SIZE] [--input-column INPUT_COLUMN]\n");
	}
}


CommandLineArgs parse_command_line_args(std::vector<std::string> args) {    
    CommandLineArgs command_line_args;

	for (auto arg = args.begin(); arg != args.end(); arg++) {
        if (*arg == "-h" || *arg == "--help") {
            print_usage();
			MPI_Finalize();
			exit(EXIT_SUCCESS);
        } else if (*arg == "--input-file") { 
			arg++;
            command_line_args.input_file = *arg;
        } else if (*arg == "--output-file") { 
			arg++;
            command_line_args.output_file = *arg;
        } else if (*arg == "--window-size") {
            arg++;
            std::string window_size_str = *arg;
            command_line_args.window_size = std::stoi(window_size_str);
        } else if (*arg == "--input-column") {
            arg++;
            std::string input_column_str = *arg;
            command_line_args.input_column = std::stoi(input_column_str);
        }
    }

    return command_line_args;
}


void validate_command_line_args(const CommandLineArgs& command_line_args) {
    bool valid = true;
	// check that input_file exists and can be read
    
    // check that output_file can be opened for writing

    // if present, window_size must be positive

    // if present, input_column must be positive

	// if invalid, print usage and exit 	
    if (!valid) {
		print_usage();
        MPI_Finalize();
        exit(EXIT_FAILURE);
    }
    if (rank == LEADER) {
        printf("Running with %d processes\nUsing input_file: %s and output_file: %s\nUsing window_size: %d and input_column: %d\n", process_count, command_line_args.input_file.c_str(), command_line_args.output_file.c_str(), command_line_args.window_size, command_line_args.input_column);
    }
}
