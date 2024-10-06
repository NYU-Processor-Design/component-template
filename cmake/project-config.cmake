include(CMakeFindDependencyMacro)

find_dependency(nyu-cmake)
include(${CMAKE_CURRENT_LIST_DIR}/projectTargets.cmake)

nyu_include_fixup(nyu::project)
