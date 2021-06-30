
#include<stdio.h>

public static int xxx(int n){ 
    if (n == 0) 
        return 4; 
    return 1 + xxx(n - 1); 
}
