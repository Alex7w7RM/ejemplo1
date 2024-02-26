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


    return 0;
}
