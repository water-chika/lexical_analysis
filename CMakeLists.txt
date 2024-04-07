cmake_minimum_required(VERSION 3.20)

project(lexical_analysis)

add_executable(test
    main.cpp
    lexical_analysis.hpp)

set_target_properties(test PROPERTIES CXX_STANDARD 23)
