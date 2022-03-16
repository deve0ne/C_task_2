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
    double currNum = calculateNum(1);

    for (int i = 2; currNum > pow(10, -10); ++i) {
        calculatedNum += currNum;

        currNum = calculateNum(i);
    }

    cout << "Correct answer is: " << answer << endl;
    cout << "Our answer is: " << calculatedNum << endl;

    return 0;
}
