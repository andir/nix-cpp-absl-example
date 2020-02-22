cmake_minimum_required(VERSION 3.16)
project (hello)

add_executable(hello main.cpp)

find_package(absl REQUIRED CONFIG)
#add_subdirectory($ENV{ABSL_DIRECTORY}/lib)

target_link_libraries(hello absl::strings)

install(TARGETS hello DESTINATION bin)
