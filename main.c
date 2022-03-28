#include <stdlib.h>
#include <stdio.h>

int funcion(int i){

    return i != 5? i:i-1;
}

int main(){
    
    int ret=0;

    for (int i=0;i<10;i++){
        if (funcion(i)==i){
            printf ("SUCCESS: main funcion %d\n",i);
        }
        else{
            printf ("FAILED: main funcion %d\n",i);
            ret =-1; 
        }
    }
    return ret;
}