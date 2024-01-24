# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "release")
  file(REMOVE_RECURSE
  "ecspi_polling_b2b_transfer_master.bin"
  "output.map"
  )
endif()
