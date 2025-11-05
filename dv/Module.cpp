#include <catch2/catch_test_macros.hpp>
#include <NyuCatch2TestUtil.hpp>

#include <VModule.h>

TEST_CASE("Test") {
  auto& mod {nyu::get_dut_catch2<VModule>()};
  REQUIRE(1);
}
