#include "app.hpp"

using namespace std;

void printResults(double a, double b, int k, int n, double eps) {
    double h = (b - a) / (k - 1);

    cout << fixed << setprecision(6);
    cout << setw(10) << "x"
        << setw(16) << "Exact"
        << setw(16) << "S(N=" << n << ")"
        << setw(16) << "S(eps)" << "\n";

    for (int i = 0; i < k; i++) {
        double x = a + i * h;
        series::EpsResult epsResult = series::sumByEps(x, eps);
        cout << setw(10) << x
            << setw(16) << series::exactValue(x)
            << setw(16) << series::sumByTerms(x, n)
            << setw(16) << epsResult.value << "\n";
    }
}

int main() {
    double a = 0.0;
    double b = 1.0;
    int k = 5;
    int n = 5;
    double eps = 0.0001;

    cout << "f(x) = 3^x on [" << a << ", " << b << "]"
        << ", k=" << k << ", N=" << n << ", eps=" << eps << endl;
    cout << endl;

    printResults(a, b, k, n, eps);

    return 0;
}
