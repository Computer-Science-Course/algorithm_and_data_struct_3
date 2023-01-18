#include <stdio.h>

int is_letter(char c){
    if ( (c>='a') && (c<='z') || (c>='A') && (c<='Z') )
        return 1;
    else
        return 0;
}

int main(){
    printf("Result: %d\n.", is_letter('f'));
}