#include "Money.h"

Money::Money(Value value) : m_value(value) 
{
}

int Money::getValue() const
{
    return static_cast<int>(m_value);
}
