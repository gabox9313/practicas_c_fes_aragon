#include <iostream>
int main ()
{
    int x, y,palto,pancho,ralto,rancho; float n, n1, n2, n3;
    scanf("%i" "%i" "%f" "%f" "%f" "%f", &x, &y, &n, &n1, &n2, &n3);
	palto= x*n; pancho= y*n1; ralto= (x*n2)+palto; rancho= (y*n3)+pancho;
    printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", x, y, n, n1, n2, n3,palto,pancho,ralto,rancho);
}
