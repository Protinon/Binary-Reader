project(Binary-Reader)

cmake_minimum_required(VERSION 3.18)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /O2 /W4")
elseif(UNIX)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -Wall")
endif()

add_subdirectory(src/)
add_subdirectory(test/)

# Test
enable_testing()
target_link_libraries(Binary-Reader-Test PRIVATE Binary-Reader)
add_test(NAME Binary-Reader-Test COMMAND Binary-Reader-test Binary-Reader)
