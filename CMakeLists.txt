cmake_minimum_required(VERSION 3.5)
project(apicaller)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")
set(SOURCE_FILES cli.cpp request.cpp Api.cpp)
set(Boost_USE_STATIC_LIBS OFF)
set(Boost_USE_MULTITHREADED ON)
set(Boost_USE_STATIC_RUNTIME OFF)
find_package(Boost 1.60.0 COMPONENTS program_options REQUIRED)

if(Boost_FOUND)
    link_libraries(-lcurl -lboost_system)
    add_executable(apicaller ${SOURCE_FILES})
endif()




