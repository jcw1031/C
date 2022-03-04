#include <stdio.h>
#include <string.h>

int even=0;
int odd=0;

void sumEven(int a){
    even+=a;
}

void sumOdd(int a){
    odd+=a;
}

void sumPrint(int a, int b){
    printf("Even number = %d, Odd number = %d", a, b);
}

int main(int argc, char* argv[]) {
    int i;
    for(i=1;i<101;i++){
        if(i%2==0)
            sumEven(i);
        else
            sumOdd(i);
    }
    
    sumPrint(even, odd);
    
    printf("\n\n\n");
    
    char s[5][30];
    
    for (i=0;i<5;i++){
        printf("name : ");
        gets(s[i]);
    }
    for (i=0;i<5;i++){
        puts(s[i]);
    }
    
    return 0;
}
