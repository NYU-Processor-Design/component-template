set(rtl ${CMAKE_SOURCE_DIR}/rtl)

nyu_setup_test(
  TEST_NAME ModuleTest
  TOP_MODULE Module
  CPP_SOURCES Module.cpp
  CPP_LIBS Catch2::Catch2WithMain
  SV_SOURCES ${rtl}/Module.sv
)
