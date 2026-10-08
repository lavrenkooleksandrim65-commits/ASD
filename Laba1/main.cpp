#include <iostream>

using namespace std;

double func1(double x) { return x * x * x - 6; }
double func2(double x) { return 2 * x * x * x - 3 * x + 2; }

// Програма 1:
void variant1(double x) {
  if (x > -10) {
    if (x <= -5) {
      cout << "Формула x3 - 6, y = " << func1(x) << "\n";
      return;
    }
    if (x > 5) {
      if (x <= 15) {
        cout << "Формула x3 - 6, y = " << func1(x) << "\n";
        return;
      }
      if (x >= 25) {
        cout << "Формула 2x3 - 3x + 2, y = " << func2(x) << "\n";
        return;
      }
    }
  }
  cout << "Для даного x, y не існує\n";
}

// Програма 2:
void variant2(double x) {
  if ((x > -10 && x <= -5) || (x > 5 && x <= 15)) {
    cout << "Формула x3 - 6, y = " << func1(x) << "\n";
    return;
  }
  if (x >= 25) {
    cout << "Формула 2x3 - 3x + 2, y = " << func2(x) << "\n";
    return;
  }
  cout << "Для даного x, y не існує\n";
}

int main() {
  double x = 0;

  cout << "y = x3 - 6, x E (-10,-5] U (5,15]\n";
  cout << "або\n";
  cout << "y = 2x3 - 3x + 2, x E [25, +oo)\n";

  cout << "Введіть x: ";
  cin >> x;

  cout << "\nВаріант без логічних операторів\n";
  variant1(x);

  cout << "\nВаріант з логічними операторами\n";
  variant2(x);
  return 0;
}
