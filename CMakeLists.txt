cmake_minimum_required(VERSION 3.16)

project(
  blockfifo
  VERSION 1.0.0
  LANGUAGES CXX)

include(CMakePackageConfigHelpers)
include(GNUInstallDirs)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
include(utils)
disable_intree_builds()

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_library(blockfifo INTERFACE)

target_include_directories(
  blockfifo INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
                      $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_compile_features(blockfifo INTERFACE cxx_std_20)

add_library(blockfifo::blockfifo ALIAS blockfifo)
