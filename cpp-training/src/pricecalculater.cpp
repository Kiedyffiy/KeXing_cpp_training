#include <iostream>
#include "pricecalculater.hpp"

//using namespace pricecalc;

double pricecalc::Pricecalculater::AcceptCash(const DiscountType type, const double money) const noexcept
{
    double cash = 0;
    switch (type)
    {
    case DiscountType::CASE_NORMAL:
        cash = money;
        break;
    case DiscountType::CASE_PERCENTOFF_NINE:
        cash = money * 0.9;
        break;
    case DiscountType::CASE_PERCENTOFF_EIGHT:
        cash = money * 0.8;
        break;
    case DiscountType::CASE_PERCENTOFF_SEVEN:
        cash = money * 0.7;
        break;
    case DiscountType::CASE_BACK:
        cash = money - int(money / 100)*20;
        break;
    default:
        break;
    }
    return cash;
}