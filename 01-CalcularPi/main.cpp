#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float aproximacion = 3.141592;
    const int c = 2;
    float a = 1;
    float b = 3;
    float pi_4 = 1 - a/b;
    float pi = 0;
    int i = 0;
    while (pi != aproximacion){
        if (i%2 != 0)
        {
            b = b + c;
            pi_4 = pi_4 - a/b;
        }
        else{
            b = b + c;
            pi_4 = pi_4 + a/b;
        }
        pi = pi_4*4;
        i++;
    }
    cout << fixed << setprecision(6);
    cout << "pi es: " << pi << endl;

    return 0;
}
