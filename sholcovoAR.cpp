#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, k = 0, maxim = -100000, s = 0;
    cin >> n;
    int* line = new int[11];
    for (int i = 0; i < 11; i++) {
        cin >> line[i];
    }
    int* m = new int[100];
    for (int i = 0; i < 100; i++) {
        m[i] = -100000000;
    }
    int* mkr3 = new int[100];
    for (int i = 0; i < 100; i++) {
        mkr3[i] = -100000000;
    }
    int* b123kr3 = new int[100];
    for (int i = 0; i < 100; i++) {
        b123kr3[i] = -100000000;
    }
    int* b123 = new int[100];
    for (int i = 0; i < 100; i++) {
        b123[i] = -100000000;
    }
    for (int i = 11; i < n; i++) {
        cin >> x;
        if (x > 123) {
            if (x % 3 == 0) {
                if ((x + m[(100 - x % 100) % 100]) > maxim) maxim = x + m[(100 - x % 100) % 100];
            }
            else {
                if((x + mkr3[(100 - x % 100) % 100]) > maxim) maxim = x + mkr3[(100 - x % 100) % 100];
            }
        }
        else {
            if (x % 3 == 0) {
                if (((x + b123[(100 - x % 100) % 100]) > maxim)) maxim = x + b123[(100 - x % 100) % 100];
            }
            else {
                if (((x + b123kr3[(100 - x % 100) % 100]) > maxim)) maxim = x + b123kr3[(100 - x % 100) % 100];
            }
        }
        if (line[0] > m[line[0] % 100]) m[line[0] % 100] = line[0];
        if ((line[0] > mkr3[line[0] % 100])&& (line[0] %3==0)) mkr3[line[0] % 100] = line[0];
        if (line[0] > 123) {
            if (line[0] > b123[line[0] % 100]) b123[line[0] % 100] = line[0];
            if ((line[0] % 3 == 0)&& (line[0] > b123kr3[line[0] % 100])) b123kr3[line[0] % 100]=line[0];
        }

        for (int j = 0; j < 10; j++) {
            line[j] = line[j+1];
        }
        line[10] = x;
    }
    cout << k;
}