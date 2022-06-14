include_directories(../include)
set(BINARY_READER_SOURCES "BinaryReaderBase.cpp" "BinaryReaderFile.cpp" "BinaryReaderBuffered.cpp" "Exceptions.cpp")
add_library(Binary-Reader STATIC ${BINARY_READER_SOURCES})
set(CMAKE_STATIC_LIBRARY_PREFIX "")
