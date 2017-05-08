#include <iostream>

using std::cout;
using std::endl;

int sum_of_multiples(int multiple, int max_no);

int main() {
    int number1 = 3;
    int number2 = 5;
    int product = 15;
    int max_no = 999;

    int sum = sum_of_multiples(number1, max_no) + sum_of_multiples(number2, max_no) - sum_of_multiples(product, max_no);

    cout<<"Sum: "<<sum;

    return 0;
}

int sum_of_multiples(int multiple, int max_no) {
    int quotient = max_no / multiple;
    int sum = quotient * (quotient + 1) / 2;

    return sum * multiple;
}
