#include "app.hpp"

double roundTo(double x) {
    return fabs(x) < 1e-15 ? 0 : x;
}

void tabulate1D(double a, double b, double h) {
    double minVal = NAN;
    double maxVal = NAN;

    cout << fixed << setprecision(6);
    cout << setw(10) << "x" << setw(15) << "y = f(x)" << endl;

    for (double x = a; x <= b; x += h) {
        double y = math::func1D(x);

        if (isnan(minVal) || y < minVal) {
            minVal = y;
        }
        if (isnan(maxVal) || y > maxVal) {
            maxVal = y;
        }

        cout << setw(10) << roundTo(x) << setw(15) << roundTo(y) << endl;
    }

    cout << endl;
    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;
}

void tabulate2D(double a, double b, double hx, double c, double d, double hy) {
    double minVal = NAN;
    double maxVal = NAN;

    int w = 12;
    cout << fixed << setprecision(4);
    cout << "Y\\X";

    for (double x = a; x <= b; x += hx) {
        cout << setw(w) << roundTo(x);
    }
    cout << endl;

    for (double y = c; y <= d; y += hy) {
        cout << setw(7) << setprecision(4) << roundTo(y);
        for (double x = a; x <= b; x += hx) {
            double z = math::func2D(x, y);

            if (isnan(minVal) || z < minVal) {
                minVal = z;
            }
            if (isnan(maxVal) || z > maxVal) {
                maxVal = z;
            }

            cout << setw(w) << setprecision(4) << roundTo(z);
        }
        cout << endl;
    }

    cout << endl;
    cout << "Minimum: " << setprecision(4) << minVal << endl;
    cout << "Maximum: " << setprecision(4) << maxVal << endl;
}

int main() {
    double a = -5.0, b = 5.0, h = 0.1;
    double c = -3.0, d = 3.0, hx = 0.2, hy = 0.3;

    cout << "1D function: y = f(x)" << endl;
    cout << "Interval: [" << a << ", " << b << "], step: " << h << endl;
    cout << endl;
    tabulate1D(a, b, h);

    cout << endl << endl;

    cout << "2D function: z = f(x, y)" << endl;
    cout << "Domain: x in [-10, 10], y in [" << c << ", " << d << "]" << endl;
    cout << "Steps: hx = " << hx << ", hy = " << hy << endl;
    cout << endl;
    tabulate2D(-10.0, 10.0, hx, c, d, hy);

    return 0;
}
