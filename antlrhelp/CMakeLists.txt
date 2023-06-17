cmake_minimum_required(VERSION 3.25)
project(antlrhelp)

set(CMAKE_CXX_STANDARD 17)
find_package(antlr4-runtime REQUIRED)
include_directories(${ANTLR4_INCLUDE_DIR})
add_library(antlrhelp SHARED example.cpp JSONLexer.cpp JSONLexer.h JSONParser.cpp JSONParser.h JSONListener.cpp JSONListener.h JSONBaseListener.cpp JSONBaseListener.h JSONVisitor.cpp JSONVisitor.h)
target_link_libraries(antlrhelp antlr4_shared)

install(TARGETS antlrhelp DESTINATION .)