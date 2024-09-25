#ifndef Money_h
#define Money_h


enum class Value
{
    vnd_1k = 1,
    vnd_2k = 2,
    vnd_5k = 5,
    vnd_10k = 10,
    vnd_20k = 20
};

class Money
{
private:
    Value m_value;
public:
    Money(Value value);
    int getValue() const;
};

#endif