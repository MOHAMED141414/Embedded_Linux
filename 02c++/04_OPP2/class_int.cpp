#include <bits/stdc++.h>
class Integer
{
private:
    int value;
public:
    Integer():value(0){}

    Integer(int value) : value(value){}

    Integer(const Integer& v):value(v.value){}

    Integer(Integer&& v) : value(v.value)
    {
        v.value=0;
    }

    ~Integer(){}
};
int main()
{
    return 0;
}