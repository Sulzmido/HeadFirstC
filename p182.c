#include <stdio.h>
#include <string.h>

void encrypt(char * message) ;

int main (){

    char message[80] ;
    printf("Enter word to encrypt: ") ;
    //scanf("%79s", message) ;
    fgets(message, sizeof message, stdin) ;
    encrypt(message) ;
    printf("encrypted message : '%s'\n", message) ;
    encrypt(message) ;
    printf("decrypted message : '%s'\n", message) ;
    return 0 ;
}

void encrypt (char * message)
{
    char c ;
    while (* message){
        * message = * message ^ 19 ;
        message++ ;
    }
}

