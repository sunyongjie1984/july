#include <iostream>
#include <string.h>

extern void LeftShiftOne( char* s, int n );

void LeftRotateString( char* s, const int n, int m )
{
    while( m-- )
    {
        LeftShiftOne( s, n );
    }
}
