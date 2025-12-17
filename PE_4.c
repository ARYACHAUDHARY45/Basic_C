#include<stdio.h>
int main (){
    char ch;
    printf("Enter any character : ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'a':
            printf("\n %c is Vowel.",ch);
            break;

        case 'E':
        case 'e':
             printf("\n %c is Vowel.",ch);
             break;
            
        case 'I':
        case 'i':
             printf("\n %c is Vowel.",ch);
             break;
        
        case 'O':
        case 'o':
             printf("\n %c is Vowel.",ch);
             break;

        case 'U':
        case 'u':
             printf("\n %c is Vowel.",ch);
             break;
            
        default:
            printf("\n %c is Not a Vowel.",ch);
        
    }
   return 0;
}