#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;
        return {kelvin, fahrenheit};
    }
};


int main() {
    Solution sol;
    double celsius = 36.50;
    vector<double> result = sol.convertTemperature(celsius);

    cout << fixed << setprecision(5);
    cout << "Kelvin: " << result[0] << ", Fahrenheit: " << result[1] << endl;

    return 0;
}
