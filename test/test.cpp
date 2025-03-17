#include <stdio.h>  
 
extern "C"  //要加extern "C",  C为大写，小写会无法识别。
{
    int add(int a, int b)
    {
        return a + b;
    }
 
    void print_sum(unsigned long ulNum)
    {
        while (ulNum != 0)
        {
            printf("The ulNum is : %u\n", ulNum--);
        }
    }
}