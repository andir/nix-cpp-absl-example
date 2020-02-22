cmake_minimum_required(VERSION 3.16)
project (hello)

add_executable(hello main.cpp)

find_package(absl REQUIRED CONFIG)

target_link_libraries(hello absl::strings)

install(TARGETS hello DESTINATION bin)
