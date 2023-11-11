#include <gtest/gtest.h>

#include "pricecalculater.hpp"

TEST(PriceCalculator, should_return_100_when_gvien_cash_normal_and_price_100)
{
    // given
    pricecalc::Pricecalculater priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(pricecalc::DiscountType::CASE_NORMAL, 100.0);

    // then
    EXPECT_DOUBLE_EQ(100.0, cash);
}

TEST(PriceCalculator, should_return_90_when_given_cash_percentoff_nine_and_price_100)
{
    // given
    pricecalc::Pricecalculater priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(pricecalc::DiscountType::CASE_PERCENTOFF_NINE, 100.0);

    // then
    EXPECT_DOUBLE_EQ(90.0, cash);
}
TEST(PriceCalculator, should_return_80_when_given_cash_percentoff_eight_and_price_100)
{
    // given
    pricecalc::Pricecalculater priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(pricecalc::DiscountType::CASE_PERCENTOFF_EIGHT, 100.0);

    // then
    EXPECT_DOUBLE_EQ(80.0, cash);
}
TEST(PriceCalculator, should_return_80_when_given_cash_percentoff_seven_and_price_100)
{
    // given
    pricecalc::Pricecalculater priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(pricecalc::DiscountType::CASE_PERCENTOFF_SEVEN, 100.0);

    // then
    EXPECT_DOUBLE_EQ(70.0, cash);
}
TEST(PriceCalculator, should_return_80_when_given_cash_back_and_price_100)
{
    // given
    pricecalc::Pricecalculater priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(pricecalc::DiscountType::CASE_BACK, 100.0);

    // then
    EXPECT_DOUBLE_EQ(80.0, cash);
}

TEST(PriceCalculator, should_return_90_when_given_cash_percentoff_and_price_90)
{
    // given
    pricecalc::Pricecalculater priceCalculator;

    // when
    double cash = priceCalculator.AcceptCash(pricecalc::DiscountType::CASE_BACK, 90.0);

    // then
    EXPECT_DOUBLE_EQ(90.0, cash);
}
