#include <stdio.h>

int strlen(char string[]){
    int counter = 0;
    while (1){
        if (string[counter] == '\0'){
            return counter;
        }
        counter++;
    }
}

int strcmp(char string1[], char string2[]){
    int right_lenght = strlen(string2);
    int left_lenght = strlen(string1);


    if(left_lenght < right_lenght){
        return -1;
    }else if(left_lenght == right_lenght){
        return 0;
    }else{
        return 1;
    }
}

void strcat(char destination[], char source[]){
    int destination_lenght = strlen(destination);
    int source_lenght = strlen(source);

    int index;
    for(index = destination_lenght; index < source_lenght + destination_lenght; index++){
        destination[index] = source[index - destination_lenght];
    }
    destination[index] = '\0';

}


void strcpy(char destination[], char source[]){
    int destination_lenght = strlen(destination);
    int source_lenght = strlen(source);

        int index;
        for(index = 0; index<source_lenght; index++){
            destination[index] = source[index];
        }
        destination[index] = '\0';
}

void main(){
    char name[] = "mateus";
    char last_name[] = "santos";

    printf("name: %s\n", name);
    printf("last_name: %s\n", last_name);

    printf("strcmp(<string>) -> %d\n", strcmp(name, last_name));

    printf("%s %s\n", name, last_name);
    strcpy(last_name, name);
    printf("%s %s\n", name, last_name);

    printf("name lenght: %d\n", strlen(name));

    strcat(name, last_name);
    printf("%s\n", name);


}