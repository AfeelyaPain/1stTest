#include <iostream>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Z{
    private:
        int m_data;
    public:
        Z(){}
        Z(int input)
        {
            m_data=input;
        }
        int GetData()
        {
            return m_data;
        }
        int zSquare(int) __attribute__((pure));
};
int Z::zSquare (int x)
{
    return x*x;
}
/*{
    return 1;
}*/
int main()
{
    Z* z = new Z(5);
    Z* z1 = z;
    printf("%d", z->zSquare(10));
    cout << "m_data = " << z1->GetData() << endl;
}