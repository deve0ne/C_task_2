#include <iostream>
#include <cmath>

using namespace std;

double calculateNum(int n) {
    double numerator = 12 * pow(n, 2) - 1;
    double denumerator = n * pow((4 * pow(n, 2) - 1), 2);

    return numerator / denumerator;
}

int main() {
    double answer = 2 * log(2);
    double calculatedNum = 0;
    double currNum = 1; //1 для того, чтобы прошла первая проверка в for

    for (int i = 1; currNum > pow(10, -10); ++i) {
        currNum = calculateNum(i);

        calculatedNum += currNum;
    }

    cout << "Correct answer is: " << answer << endl;
    cout << "Our answer is: " << calculatedNum << endl;

    return 0;
}
