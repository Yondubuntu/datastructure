#include  <stdio.h> 

int i = 0 ; 
int Fibo (int n)

{ 


    printf("func call %d %d \n",n,i);
    i++ ; 
    if (n == 1 )
        return 0 ;
    else if (n ==2 )
        return 1 ; 
    else 
        return Fibo(n-1) + Fibo(n-2);

}

int main ()

{
        Fibo(7);
        return 0; 
}