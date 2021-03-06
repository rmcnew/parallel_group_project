#include <gtest/gtest.h>
#include "command_line_args.h"
#include <vector>;
using namespace std;

// rank and process_count must be defined external to the
// command_ling_args functions to simulate the MPI variables
int rank = 0;
int process_count = 4;

TEST(CommandLineArgsTest, test_command_line_args) {
    vector<string> args;
    args.push_back("--input-file");
    args.push_back("input_file.csv");
    args.push_back("--output-file");
    args.push_back("output_file.csv");
    args.push_back("--window-size");
    args.push_back("10");
    args.push_back("--input-column");
    args.push_back("5");

    CommandLineArgs parse_args;
    parse_args = parse_command_line_args(args);
    bool test = validate_command_line_args(parse_args);
    EXPECT_TRUE(test);

    //test if input column is bigger than 0
    EXPECT_GE(parse_args.input_column, 0);

    //test if window size input is bigger than 0 
    EXPECT_GE(parse_args.window_size, 0);

    



    /* Test for command_line_args:
    void print_usage();
    CommandLineArgs parse_command_line_args(std::vector<std::string> args);
    void validate_command_line_args(const CommandLineArgs& command_line_args);
    */

    // create string vector of simulated command line args
    // call parse_command_line_args
    // verify returned CommandLineArgs struct for simulated command line arg values
    // call validate_command_line_args

    // Some of the values can cause the process to exit:
    //    -h or --help for parse_command_line_args
    //
    //    invalid values passed in for validate_command_line_args
    //
    // Google Test can check for process exit using special assertions called "Death Assertions"
    // See "Death Assertions" in https://google.github.io/googletest/reference/assertions.html

    // create a string vector with --help
    // should print the usage message and exit

    // create CommandLineArgs structs with invalid values
    // should print which value(s) are invalid, print usage message, and exit


    //EXPECT_TRUE(false);
}