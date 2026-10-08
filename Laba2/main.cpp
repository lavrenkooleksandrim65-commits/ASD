#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

double variant1(int n) {
  double S = 0.0;

  for (int i = 1; i <= n; i++) {
    double P = 1.0;

    for (int j = 1; j <= i; j++) {
      P *= sin(j);
    }

    S += (sin(i) + 2.0) / (i + P);
  }

  return S;
}

double variant2(int n) {
  double S = 0.0;
  double P = 1.0;

  for (int i = 1; i <= n; i++) {
    double current_sin = sin(i);

    P *= current_sin;

    S += (current_sin + 2.0) / (i + P);
  }

  return S;
}

int main() {
  int n;
  cout << "Введіть натуральне число n: ";
  cin >> n;

  if (n < 1) {
    cout << "Помилка: n має бути натуральним числом (n >= 1).\n";
    return 1;
  }

  cout << fixed << setprecision(7);

  cout << "\nВаріант 1 вкладені цикли: " << variant1(n) << "\n";
  cout << "Варіант 2 один цикл:      " << variant2(n) << "\n";

  return 0;
}
