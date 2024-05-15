cmake_minimum_required(VERSION 3.18)
project(Binary-Reader)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(MSVC)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /O2 /W4")
elseif(UNIX)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -Wall")
endif()

set(
	BINARY_READER_SOURCES 
	"${CMAKE_CURRENT_SOURCE_DIR}/src/BinaryReaderBase.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/BinaryReaderFile.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/BinaryReaderBuffered.cpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/src/BinaryReaderExceptions.cpp"
)
set(CMAKE_STATIC_LIBRARY_PREFIX "")
add_library(Binary-Reader STATIC ${BINARY_READER_SOURCES})
target_include_directories(Binary-Reader PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

option(BINARY_READER_BUILD_TEST OFF)
if(BINARY_READER_BUILD_TEST)
	add_subdirectory(test/)
	target_link_libraries(Binary-Reader-Test PRIVATE Binary-Reader)
endif()
