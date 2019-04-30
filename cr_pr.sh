#!/bin/bash

# checking usage
if [ $# -ne 1 ];
then
    echo "Please, specifi project name"
    exit 1;
fi

cd ~/projects/cpp_primer/

# checking existanse of project
if [ -d "$1" ];
then
    echo "Project with this name exists. Please, enter unique project name."
    exit 1;
fi

# creating project structure
mkdir $1
cd $1
touch CMakeLists.txt

# creating cmake
CMAKE_TEXT=$"cmake_minimum_required(VERSION 3.0.0)\nproject(\"$1\")\n\nset(CMAKE_CXX_STANDARD 11)\ninclude_directories(\${CMAKE_CURRENT_SOURCE_DIR}/include)\nfile(GLOB MY_SOURCES \"src/*.*\")\nset(CMAKE_EXPORT_COMPILE_COMMANDS 1)\nadd_executable($1 \${MY_SOURCES})"
echo  -e $CMAKE_TEXT > CMakeLists.txt

mkdir src
mkdir include
mkdir build
cd src
touch main.cpp
