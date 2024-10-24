#include <iostream>

using namespace std;
class Circle {
private:
    float radius;
    double PI = 3.14;

public:  
    Circle(float r) : radius(r) {}

    float length() const {
        return 2 * PI * radius;
    }

    float square() const {
        return PI * radius * radius;
    }
};

int main() {
    setlocale(LC_ALL, "");
    float radius;
    cout << "Введите радиус окружности: ";
    cin >> radius;

    Circle circle(radius);
    cout << "Длина окружности: " << circle.length() << std::endl;
    cout << "Площадь окружности: " << circle.square() << std::endl;

    return 0;
}