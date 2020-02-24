
#include <math.h>

using namespace std;
int main()
{
 float a,b,c;
 float delta,x1,x2;
 cout << “Digite os 3 coeficientes: “;
 cin >> a;
 cin >> b;
 cin >> c;
 delta = b*b – 4 * a * c; delta = b*b – 4 * a * c;
 x1 = (-b + sqrt(delta)) / (2*a);
 x2 = (-b - sqrt(delta)) / (2*a);
 cout << “As raízes são: “;
 cout << x1 << “ e “ << x2 << “\n”;

  system ("pause");
    return 0;
}
