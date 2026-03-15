# include<stdio.h>
double square(double num);
int main(){
   printf("result=%f",  square(2.2));
return 0;
}

double square(double num){
    double result= num*num;
    return result;
}