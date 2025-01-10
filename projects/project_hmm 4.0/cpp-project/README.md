# C++ Project

## Description
This project is a basic C++ application that demonstrates the use of multiple source files and headers. It includes a main entry point and separate implementation files for better organization.

## Structure
- `src/main.cpp`: Entry point of the application.
- `src/include/header1.h`: Header file for functions and classes used in `file1.cpp` and `main.cpp`.
- `src/include/header2.h`: Header file for functions and classes used in `file2.cpp` and `main.cpp`.
- `lib/file1.cpp`: Implementation of functions and classes declared in `header1.h`.
- `lib/file2.cpp`: Implementation of functions and classes declared in `header2.h`.
- `test/test.cpp`: Unit tests for the functions and classes implemented in the `lib` directory.
- `CMakeLists.txt`: Configuration file for building the project with CMake.

## Build Instructions
1. Ensure you have CMake installed on your system.
2. Navigate to the project directory.
3. Run the following commands:
   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```
4. Run the application:
   ```bash
   ./your_executable_name
   ```

## Testing
To run the tests, navigate to the `test` directory and compile the `test.cpp` file using the same build process.