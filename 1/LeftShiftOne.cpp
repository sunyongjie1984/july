#include <iostream>
#include <string.h>

void LeftShiftOne( char* s, int n )
{
    --n;
    char t = s[ 0 ];
    for ( int i = 1; i < n; ++i )
    {
        s[ i - 1 ] = s[ i ];
    }
    s[ n - 1 ] = t;
}
