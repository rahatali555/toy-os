# include<stdio.h>

double square(double num)
   {
    const double result= num * num;
    return result;
   }
int main ()
{
    printf("answer=%f", square(2.2));
    return 0;
}

