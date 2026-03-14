# include<stdio.h>

double square(double num);
  
int main ()
{
    printf("answer=%f", square(2.2));
    return 0;
}

double square(double num)
   {
    const double result= num * num;
    return result;
   }