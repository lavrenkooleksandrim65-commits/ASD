#include <iostream>

using namespace std;

int func1(int x) { return x * x * x - 6; };
int func2(int x) { return 2 * x * x * x - 3 * x + 2; };

int variant1(int x) {
  if (x > -10) {
    if (x <= -5) {
      cout << "Формула x3 -6, y = " << func1(x);
      return 0;
    }
    if (x > 5) {
      if (x <= 15) {
        cout << "Формула x3 -6, y = " << func1(x);
        return 0;
      }
      if (x >= 25) {
        cout << "Формула 2x3 - 3x + 2, y = " << func2(x);
        return 0;
      }
    }
  }
  cout << "Для данного х, y не існує";

  return 0;
}

int variant2(int x) {
  if ((x > -10 && x <= -5) || (x > 5 && x <= 15)) {
    cout << "Формула x3 -6, y = " << func1(x);
    return 0;
  }
  if (x >= 25) {
    cout << "Формула 2x3 - 3x + 2, y = " << func2(x);
    return 0;
  }
  cout << "Для данного х, y не існує";

  return 0;
}

int main() {
  int x = 0;

  cout << "y = x3 - 6, x E (-10,-5] U (5,15]\n";
  cout << "або\n";
  cout << "y = 2x3 - 3x + 2, x E [25, +oo)\n";

  cout << "Введіть х: ";
  cin >> x;

  cout << "\nВаріант без логічних операторів\n";
  variant1(x);

  cout << "\nВаріант з логічними операторами\n";
  variant1(x);
  return 0;
}
