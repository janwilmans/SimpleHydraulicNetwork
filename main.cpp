#include <string>
#include <fstream>
#include <vector>
#include <utility> // std::pair
#include <stdexcept> // std::runtime_error
#include <sstream> // std::stringstream
#include "include/read_write.h"



int main() {
//    // Read three_cols.csv and ones.csv
    std::vector<std::pair<std::string, std::vector<double>>> mul_cols = read_csv("Heating_Cooling_data.csv");
//
//    // Write to another file to check that this was successful
    write_csv("Heating_Cooling_data_copy.csv", mul_cols);
    // Read three_cols.csv and ones.csv
    // Make three vectors, each of length 100 filled with 1s, 2s, and 3s
    // Read three_cols.csv and ones.csv
    // std::vector<std::pair<std::string, std::vector<double>>> three_cols = read_csv("three_cols.csv");

    // Write to another file to check that this was successful
    // write_csv("three_cols_copy.csv", three_cols);

    return 0;
}