# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/oriss/Documents/GitHub/CMake/build/dep-spdlog-prefix/src/dep-spdlog"
  "C:/Users/oriss/Documents/GitHub/CMake/build/dep-spdlog-prefix/src/dep-spdlog-build"
  "C:/Users/oriss/Documents/GitHub/CMake/build/dep-spdlog-prefix"
  "C:/Users/oriss/Documents/GitHub/CMake/build/dep-spdlog-prefix/tmp"
  "C:/Users/oriss/Documents/GitHub/CMake/build/dep-spdlog-prefix/src/dep-spdlog-stamp"
  "C:/Users/oriss/Documents/GitHub/CMake/build/dep-spdlog-prefix/src"
  "C:/Users/oriss/Documents/GitHub/CMake/build/dep-spdlog-prefix/src/dep-spdlog-stamp"
)

set(configSubDirs Debug;Release;MinSizeRel;RelWithDebInfo)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/oriss/Documents/GitHub/CMake/build/dep-spdlog-prefix/src/dep-spdlog-stamp/${subDir}")
endforeach()
