#include "nth_prime.h"
#ifdef EXERCISM_TEST_SUITE
#include <catch2/catch.hpp>
#else
#include "test/catch.hpp"
#endif
#include <stdexcept>

TEST_CASE("first")
{
    REQUIRE(2 == nth_prime::nth(1));
}

TEST_CASE("second")
{
    REQUIRE(3 == nth_prime::nth(2));
}

TEST_CASE("third")
{
    REQUIRE(5 == nth_prime::nth(3));
}

TEST_CASE("fourth")
{
    REQUIRE(7 == nth_prime::nth(4));
}

TEST_CASE("fifth")
{
    REQUIRE(11 == nth_prime::nth(5));
}

TEST_CASE("sixth")
{
    REQUIRE(13 == nth_prime::nth(6));
}

TEST_CASE("big_prime")
{
    REQUIRE(104743 == nth_prime::nth(10001));
}

TEST_CASE("weird_case")
{
    REQUIRE_THROWS_AS(nth_prime::nth(0), std::domain_error);
}

TEST_CASE("2_is_prime")
{
    REQUIRE(nth_prime::is_prime(2));
}

TEST_CASE("3_is_prime")
{
    REQUIRE(nth_prime::is_prime(3));
}

TEST_CASE("4_is_not_prime")
{
    REQUIRE(!nth_prime::is_prime(4));
}

TEST_CASE("5_is_prime")
{
    REQUIRE(nth_prime::is_prime(5));
}

TEST_CASE("101_is_prime")
{
    REQUIRE(nth_prime::is_prime(101));
}
#if defined(EXERCISM_RUN_ALL_TESTS)
#endif
