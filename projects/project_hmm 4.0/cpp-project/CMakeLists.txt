cpp-project
├── src
│   ├── main.cpp
│   └── include
│       ├── header1.h
│       └── header2.h
├── lib
│   ├── file1.cpp
│   └── file2.cpp
├── test
│   └── test.cpp
├── CMakeLists.txt
└── README.md

// ...existing code...
add_executable(cpp-project src/main.cpp lib/file1.cpp lib/file2.cpp test/test.cpp)
// ...existing code...
target_include_directories(cpp-project PRIVATE src/include)
// ...existing code...