find_package(Catch2 3 REQUIRED CONFIG)
find_package(nyu-util REQUIRED CONFIG)

option(NYU_GEN_TRACES "Generate FST traces from tests" OFF)

if(NYU_GEN_TRACES)
  set(_traces_option TRACE_FST)
else()
  set(_traces_option)
endif()

add_executable(tests)
target_sources(tests PRIVATE
  Module.cpp
)
nyu_link_sv(tests PRIVATE module)
nyu_target_verilate(tests
  TOP_MODULES Module
  ARGS COVERAGE ${_traces_option}
)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain nyu::covrecorder)
target_compile_features(tests PRIVATE cxx_std_23)

include(Catch)
catch_discover_tests(tests)
