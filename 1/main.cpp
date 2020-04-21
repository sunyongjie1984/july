#include <iostream>
#include <string.h>

extern void LeftShiftOne( char* s, int n );
extern void LeftRotateString( char* s, int n, int m );

int main()
{
    char array0[ 12 ] = "hello world";
    std::cout << array0 << std::endl;
    LeftShiftOne( array0, sizeof( array0 ) );
    std::cout << array0 << std::endl;

    char array1[ 12 ] = "hello world";
    std::cout << array1 << std::endl;
    LeftRotateString( array1, sizeof( array1 ), 3 );
    std::cout << array1 << std::endl;
    return 0;
}
