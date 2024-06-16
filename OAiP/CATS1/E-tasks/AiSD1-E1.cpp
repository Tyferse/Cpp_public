#include <cmath>
#include <iostream>
using namespace std;


int main() {
    int N1, N2, N3;
    cin >> N1 >> N2 >> N3;

    int a1[N1];
    for (int i = 0; i < N1; i++) {
        cin >> a1[i];
    }

    int a2[N2];
    for (int i = 0; i < N2; i++) {
        cin >> a2[i];
    }

    int a3[N3];
    for (int i = 0; i < N3; i++) {
        cin >> a3[i];
    }

    // Счётчик количества элементов и индексы элементов в соответстыу.щих массивах
    int k = 0, i1 = 0, i2 = 0, i3 = 0;
    while(i1 < N1 && i2 < N2 && i3 < N3) {
        // Если элементы в трёх массивах равны, то увеличиваем все счётчики
        if ((a1[i1] == a2[i2]) && (a1[i1] == a3[i3])) {
            k++;
            i1++; 
            i2++; 
            i3++;
            continue;
        }

        if ((a1[i1] <= a2[i2]) && (a1[i1] <= a3[i3]))
            // Если элемент первого массива меньше, чем элементы остальных массивов,
            // то переходим к следующему элементу первого массива
            i1++;
        else if ((a2[i2] <= a1[i1]) && (a2[i2] <= a3[i3]))
            // Если элемент второго массива меньше, чем элементы остальных массивов,
            // то переходим к следующему элементу второго массива
            i2++;
        else if ((a3[i3] <= a2[i2]) && (a3[i3] <= a1[i1]))
            // Если элемент третьего массива меньше, чем элементы остальных массивов,
            // то переходим к следующему элементу третьего массива
            i3++;
    }

    cout << k;

    return 0;
}