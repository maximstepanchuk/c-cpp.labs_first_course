#include<iostream>
#include<algorithm>
using namespace std;

int main() {

    int array[] = {21, 13, 9, 4, 33, 6, 14, 25, 17 };
    int length = sizeof(array) / sizeof(array[0]);

    cout << "Length of array: " << length << endl;
    //by QSort

    sort(array, array+length); 

for (int i = 0; i <= length - 1; i++)
        std::cout << array[i] << ' ';
    cout << endl;

    int a, b, c, k = 0;
    for (int i = 0; i <= length - 3; i++)
    {
        a = array[i]; b = array[i + 1]; c = array[i + 2];
        if (a + b > c)
            cout << a << " " << b << " " << c << endl;
        k++;
    }
    cout << "Count of triangles: " << k;

    return 0;
}