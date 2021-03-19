project(SimpleHydraulicLib)

add_library(SimpleHydraulicLib
    src/process.cpp
)
target_include_directories(SimpleHydraulicLib PUBLIC include)   # PUBLIC to allow main.cpp to access it

target_link_libraries(SimpleHydraulicLib PUBLIC    # PUBLIC so my 'users' also link to Eigen
    Eigen3::Eigen
)


add_executable(basic_tests 
    src/main.cpp
    src/read_write_test.cpp
)
target_include_directories(basic_tests PRIVATE include)

add_test(NAME basic_tests COMMAND basic_tests WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}/src)
