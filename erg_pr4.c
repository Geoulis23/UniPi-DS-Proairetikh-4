#include <stdio.h>

int main(int argc, char const *argv[]){
    char ep;
    int a,b,g,result;


    do{
        do{
            printf("Menu:\n\t+ to perform an addition operation");
            printf("\n\t- to perform a subtraction operation");
            printf("\n\t* to perform a multiplication operation");
            printf("\n\t/ to perform a division operation");
            printf("\n\t0 to exit the programm");
            printf("\n Give your choice:\t");
            scanf(" %c", &ep);
            if (ep != '+' && ep != '-' && ep != '*' && ep != '/' && ep != '0'){
                printf("This choice is incorrect\n");
            }
        }while(ep != '+' && ep != '-' && ep != '*' && ep != '/' && ep != '0');

        if (ep == '0'){
            break;
        }
        
        printf("Give the first number: ");
        scanf(" %d", &a);

        printf("\nGive the second number: ");
        scanf(" %d", &b);

        switch (ep){
        case '+':
            result = a+b;
            break;
        
        case '-':
            result = a-b;
            break;

        case '*':
            result = a*b;
            break;

        case '/':
            if (b == 0){
                printf("Undefined\n");
            }
            else{
                result = a/b;
            }
            break;
        
        default:
            break;
        }

        if (b == 0 && ep == '/'){
            continue;
        }
        
        printf("What is the result of the following operation?\n\t%d %c %d = ?\nPlace your answer: ", a, ep, b);
        scanf(" %d", &g);

        int lives = 3;
        while(lives > 0){
            if (result == g){
                printf("Correct!!\n");
                break;
            }
            else{
                lives--;
                printf("Wrong! Try again...\nYou have %d more attempts", lives);
            }
        }

    } while (ep != '0');
    
    return 0;
}
