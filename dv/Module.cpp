#include <catch2/catch_test_macros.hpp>
#include <NyuTestUtil.hpp>

#include <VModule.h>

TEST_CASE("Test") {
  auto& mod {nyu::getDUT<VModule>()};
  REQUIRE(1);
}
