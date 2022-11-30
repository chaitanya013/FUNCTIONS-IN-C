#include <stdio.h>
//print Namaste if user is "ind" & Bonjour if the usre is french?

void namaste();
void bonjour();

int main(){
    char ch;
    printf("enter i for india & f for french:");
    scanf("%c",&ch);

    if (ch=='i'){
        printf("namaste");
    }else{
        printf("bonjour");
    }
    return 0;
}

void namaste(){
    printf("namaste \n");
}

void bonjour(){
    printf("bonjour");
}


