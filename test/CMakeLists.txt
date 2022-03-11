include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# find_package(GTest REQUIRED)

add_executable(test_demo test_demo.cpp)
target_link_libraries(test_demo utils gtest_main)

include(GoogleTest)
gtest_discover_tests(test_demo)