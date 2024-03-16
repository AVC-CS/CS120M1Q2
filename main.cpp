#include "main.hpp"

int main()
{
    int n1, n2, n3;
    float f1, f2;

    srand(time(0));
    n1 = rand() % 10;
    n2 = rand() % 10;
    n3 = rand() % 10;

    cout << "The three values are " << n1 << "\t" << n2 << "\t" << n3 << endl;

    cout << " Call myCompare(n1) " << myCompare(n1) << endl;
    cout << " Call myCompare(n1, n2) " << myCompare(n1, n2) << endl;
    cout << " Call myCompare(n1, n2, n3) " << myCompare(n1, n2, n3) << endl;
    f1 = 19.3456;
    f2 = 21.9876;
    cout << " Call float myCompare(n1, n2) " << myCompare(f1, f2) << endl;
}