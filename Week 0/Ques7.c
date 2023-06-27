#include <stdio.h>

int main()
{
    int x = 1;
    int y;
    /*With bracket: expressions before and after comma are evaluated 
    one by one left to right and value will be assigned to LHS*/

    /*Without bracket: first expression will be evaluated only and 
    assigned to LHS*/
    y = (x=x+3,x*5);
    printf("%d",y);
    return 0;
}