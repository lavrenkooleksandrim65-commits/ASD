#include <iomanip>
#include <iostream>

using namespace std;

void searchInLastRow(double **A, int m, int n, double target) {
  int left = 0;
  int right = n - 1;
  bool found = false;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (A[m - 1][mid] == target) {
      cout << "Число " << target
           << " знайдено в останньому рядку на координатах: [" << (m - 1)
           << "][" << mid << "]\n";
      found = true;
      break;
    } else if (A[m - 1][mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  if (!found) {
    cout << "В останньому рядку число " << target << " не знайдено.\n";
  }
}

void searchInFirstColumn(double **A, int m, int n, double target) {
  int left = 0;
  int right = m - 1;
  bool found = false;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (A[mid][0] == target) {
      cout << "Число " << target
           << " знайдено у першому стовпчику на координатах: [" << mid
           << "][0]\n";
      found = true;
      break;
    } else if (A[mid][0] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  if (!found) {
    cout << "У першому стовпчику число " << target << " не знайдено.\n";
  }
}

int main() {
  int m, n;
  cout << "Введіть кількість рядків (m від 7 до 10): ";
  cin >> m;
  cout << "Введіть кількість стовпців (n від 7 до 10): ";
  cin >> n;

  double **A = new double *[m];
  for (int i = 0; i < m; i++) {
    A[i] = new double[n];
  }

  double value = 1.0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      A[i][j] = value;
      value += 1.0;
    }
  }

  cout << "\nЗгенерована матриця:\n";
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << setw(6) << A[i][j];
    }
    cout << "\n";
  }

  double X;
  cout << "\nВведіть дійсне число X для пошуку: ";
  cin >> X;

  cout << "\nРезультати пошуку:\n";
  searchInLastRow(A, m, n, X);
  searchInFirstColumn(A, m, n, X);

  for (int i = 0; i < m; i++) {
    delete[] A[i];
  }
  delete[] A;

  return 0;
}
