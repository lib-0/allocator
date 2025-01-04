cmake_minimum_required(VERSION 3.10)

project(G_0_allocator VERSION 1.0 LANGUAGES C)

set(SOURCES
  src/allocator.c
)

add_library(G_0_allocator STATIC ${SOURCES})
set_target_properties(G_0_allocator PROPERTIES
  OUTPUT_NAME "-0_allocator"
)

target_include_directories(G_0_allocator
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external_include
)

install(TARGETS G_0_allocator
  ARCHIVE DESTINATION lib
  LIBRARY DESTINATION lib
  RUNTIME DESTINATION bin
)

install(
  FILES
    include/-0_allocator.h
  DESTINATION
    include
)

install(
  FILES
    include/-0/allocator_functions.h
    include/-0/allocator_shortcut.h
    include/-0/allocator_types.h
  DESTINATION
    include/-0
)
