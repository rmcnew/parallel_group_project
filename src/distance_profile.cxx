#include "distance_profile.h"
#include "mean_and_standard_deviation.h"
#include "sliding_dot_product.h"

DoubleArray calculate_distance_profile(const DoubleArray& query_segment, const DoubleArray& time_series) {

    double query_segment_mean;
    double query_segment_standard_deviation;
    double time_series_window_mean;
    double time_series_window_standard_deviation;

    compute_mean_and_standard_deviation(
        query_segment, time_series, 
        query_segment_mean, query_segment_standard_deviation, 
        time_series_window_mean, time_series_window_standard_deviation); 

    DoubleArray dot_product = sliding_dot_product(query_segment, time_series);

    DoubleArray distance_profile;

    // double* distance_profile = (double*) calloc(matrix_profile_length, sizeof(double));
    // for(uing64_t i = 0; i < matrix_profile_length; i++) {
    //     distance_profile[i] = std::sqrt(2*m * (1 - ((dot_product[i] - m * query_segment_mean * time_series_window_mean) / (m * query_segment_standard_deviation * time_series_window_standard_deviation)))); 
    // }
    // return distance_profile;
    
    return distance_profile;
}
