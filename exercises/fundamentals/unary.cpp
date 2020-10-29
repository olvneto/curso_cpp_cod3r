#include <cstdio>
using namespace std;

int main() {
    int x = 2;
    int y = 1;

    x++;
    ++y;
    printf("%d %d\n", x, y);
 
    --x;
    y--;
    printf("%d %d\n", x, y);
    
    printf("%d\n", x-- == ++y);//x = 2 e y = 2, depois x = 1 e y = 2

    return 0;
}