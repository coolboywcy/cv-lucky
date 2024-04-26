cmake_minimum_required(VERSION 3.21)

project(MyApp VERSION 0.0.0 LANGUAGES CXX)

	add_library(convertlibrary 
			convert.cpp)

	add_executable(linkUnix 
			main.cpp)

	target_link_libraries(linkUnix
			PRIVATE 
			convertlibrary)
