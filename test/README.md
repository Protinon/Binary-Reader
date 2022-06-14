# Testing

This project makes use of the Catch2 testing framework. It doesn't need a highly flexible testing framework, and Catch2 has CMake integration.

## To add testing functionality to a new reader
Testing for all subclasses of `BinaryReaderBase` have been templated in TestConstants.hpp.

1. Open "TestConstants.hpp"
1. Add the class type to `bReaderTestTypes`
1. Create a template specialization of `prepareReader` that constructs the reader with position set to 0