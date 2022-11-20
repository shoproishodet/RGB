# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "src/36_5_1_autogen"
  "src/CMakeFiles/36_5_1_autogen.dir/AutogenUsed.txt"
  "src/CMakeFiles/36_5_1_autogen.dir/ParseCache.txt"
  )
endif()
