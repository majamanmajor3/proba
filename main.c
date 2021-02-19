#include <stdio.h>
void kiir(int);
int main() {
    setbuf(stdout, _Buffer: NULL);
    int x=0, y[100][100]={0};
    x++;
    if(x<9){
        x++;
    }
    else{
        printf( _Format: "%d", x);
    }
    kiir(x);
    return 0;
}
void kiir(int x){
    int y;
    y=2;
    printf( _Format: "%d", x);
}
