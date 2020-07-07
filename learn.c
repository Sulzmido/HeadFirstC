#include <stdio.h>

int main(){

    int x, y ;
    // assignments return values
    printf("%i\n",(y = 3) * (x = 4)) ;

    printf("%i %i\n", x, y) ;

    puts("I am a constant string literal stored in read-only memory") ;

    // 3[doses] == doses[3] because *(doses + 3) == *(3 + doses)
    int doses[] = {1, 3, 2, 1000} ;
    printf("Issue dose %i\n", 3[doses]) ;

    // array variable and pointer variable are not quite the same
    char s[] = "How big is it?" ;
    char *t = s ;

    printf("%i %i\n", sizeof s, sizeof t) ;
    printf("%p %p : %p %p\n", s, &s, t, &t) ;

    // sizeof is an operator and not a function
    printf("%i %i %i\n", sizeof(char), sizeof(int), sizeof(double)) ;

    return 0 ;
}
