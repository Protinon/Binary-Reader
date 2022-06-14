add_subdirectory(Catch2)
include_directories(Catch2/src)

include_directories(../include)

file(TO_NATIVE_PATH "/" PLATFORM_PATH_SEP)
configure_file("TestConstants.h.in" "${CMAKE_CURRENT_SOURCE_DIR}/TestConstants.h" @ONLY)
set(BINARY_READER_TEST_SOURCES "010-ReadScalars.cpp" "020-ReadArrays.cpp" "030-Bounds.cpp" "040-LimitException.cpp" "050-FloatExceptions.cpp")
add_executable(Binary-Reader-Test ${BINARY_READER_TEST_SOURCES})
target_link_libraries(Binary-Reader-Test PRIVATE Catch2::Catch2WithMain)
