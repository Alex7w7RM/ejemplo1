#include <iostream>
 using namespace std;

int a =1 , b= 1, resu1 , resu2;
int main() {

    cout << " tabla del 4 " << endl ;



    do {
        resu1 = 4 * a;
        cout << 4 << "*" << a  << "=" << resu1 << endl;
        a++;
    } while (a <=10 );


    cout << "tabla del 9" << endl;
    do {
        resu2 = 9 * b ;
        cout << 9 << "*" << b << "=" << resu2 << endl;
        b++;
    } while ( b <= 10);

    int num1;

    bool primo = true ;

    cout << "ingrese un numero para determinar si es primo" << endl;
    cin >> num1;
    for (int i = 2; i < num1 ; i++) {
        if (num1 % i==0) primo= false;

    }
    if ( primo == true) cout << "el numero es primo" << endl;
    else cout << " el numero no es primo" << endl;

    return 0;
}
