# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\TextFinder_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TextFinder_autogen.dir\\ParseCache.txt"
  "TextFinder_autogen"
  )
endif()
