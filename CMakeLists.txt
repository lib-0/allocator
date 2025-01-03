cmake_minimum_required(VERSION 3.10)

project(G_0_allocator VERSION 1.0 LANGUAGES C)

set(SOURCES
  src/allocator.c
)

add_library(G_0_allocator_static STATIC ${SOURCES})
set_target_properties(G_0_allocator_static PROPERTIES
  OUTPUT_NAME "-0_allocator_static"
)

target_include_directories(G_0_allocator_static
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/external_include
)

target_compile_definitions(G_0_allocator_static
  PRIVATE G_SHARED=0
)

install(TARGETS G_0_allocator_static
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
