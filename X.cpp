// direct change on remote test

#include <iostream>
#include <string>

using namespace std;

template <class TYPE>
void ptwice(TYPE value)
{
    cout << "value x2 = " << value*2 << endl;
}

//template <class T>
/*void xtwice(T val)
{
    //cout << "a x 2 " << val.a*2 << endl;
    //cout << "b = " << val.b  <<endl;
}*/

class X
{
    public:
        int a;
        char* b;
    public:
        X(){
            a =0;
            b=NULL;
        }
        X(int _a, char* _b)
        {
            a = _a;
            b = _b;
        }
};

int main()
{
    int t = 5;
    ptwice(t);
    X x = X(6,(char*)"twice");
    cout << x.a <<endl;
    //x.a = 6;
    //x.b = "twice";
    //xtwice(x);
    return 0;
}

//end
