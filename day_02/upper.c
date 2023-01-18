#include <stdio.h>

char upper(char c){
    if((c >= 'a' & c <= 'z') || (c >= 'A' && c <= 'Z') ){
        return (c-32);
    }else{
        return c;
    }

}

void main(){
    printf("%c\n", upper('89'));
}