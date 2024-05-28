
cmake_minimum_required(VERSION 3.5)

project(password-generator)

set(SOURCES
  src/main.c
)

add_executable(${PROJECT_NAME} ${SOURCES})
