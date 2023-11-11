#pragma once
#include <iostream>
namespace pricecalc{

    enum class DiscountType
    {
        CASE_NORMAL,           //原价
        CASE_PERCENTOFF_NINE,  //九折
        CASE_PERCENTOFF_EIGHT, //八折
        CASE_PERCENTOFF_SEVEN, //七折
        CASE_BACK              //满减
    };

    class Pricecalculater final
    {
    public:
        double AcceptCash (const DiscountType type, const double money)const noexcept;
};

};