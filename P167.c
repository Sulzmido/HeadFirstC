#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    printf("The value of INT_MAX is %i\n", INT_MAX) ;
    printf("The value of INT_MIN is %i\n", INT_MIN) ;
    printf("An int takes %i byte\n\n", sizeof(int)) ;

    printf("The value of CHAR_MAX is %i\n", CHAR_MAX) ;
    printf("The value of CHAR_MIN is %i\n", CHAR_MIN) ;
    printf("A char takes %i byte\n\n", sizeof(char)) ;

    printf("The value of SHRT_MAX is %i\n", SHRT_MAX) ;
    printf("The value of SHRT_MIN is %i\n", SHRT_MIN) ;
    printf("A short takes %i byte\n\n", sizeof(short)) ;

    printf("The value of LNG_MAX is %i\n", LONG_MAX) ;
    printf("The value of LNG_MIN is %i\n", LONG_MIN) ;
    printf("A long takes %i byte\n\n", sizeof(long)) ;

    printf("The value of FLT_MAX is %f\n", FLT_MAX) ;
    printf("The value of FLT_MIN is %.50f\n", FLT_MIN) ;
    printf("A float takes %i bytes\n\n", sizeof(float)) ;

    printf("The value of DBL_MAX is %f\n", DBL_MAX) ;
    printf("The value of DBL_MIN is %.50f\n", DBL_MIN) ;
    printf("A double takes %i bytes\n", sizeof(double)) ;

    return 0 ;
}
