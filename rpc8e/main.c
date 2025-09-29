#include <conio.h>

int main()
{
    int old = 0;
    int fib = 1;

    while(1)
    {
        int temp = old;
        old = fib;
        fib = fib + temp;
    }

}