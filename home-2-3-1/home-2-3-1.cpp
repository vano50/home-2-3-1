#include <iostream>


class Calculator {

    double num1;
    double num2;
public:
    double add() { return num1 + num2; }
    double multiply() { return num1 * num2; };
    double subtract_1_2() { return num1 - num2; };
    double subtract_2_1() { return num2 - num1; };
    double divide_1_2() { return num1 / num2; };
    double divide_2_1() { return num2 / num1; };
    bool set_num1(double num1) {
        this->num1 = num1;
        if (num1 != 0) { return true; }
        else {
            std::cout << "Неверный ввод!\n";
            return false;
        }
    }
    bool set_num2(double num2) {
        this->num2 = num2;
        if (num2 != 0) {
            return true;
        }
        else {
            std::cout << "Неверный ввод!\n";
            return false;
        }
    }
};



int main() {
    setlocale(LC_ALL, "Russian");

    double xnum1 = 0;
    double xnum2 = 0;
    bool check_enter;

    Calculator calc;
    do {
        do {
            
        std::cout << "Введите первое число ";
        std::cin >> xnum1;
        
        check_enter = calc.set_num1(xnum1);

        } while (check_enter == false);

        do {

        std::cout << "Введите второе число ";
        std::cin >> xnum2;

        check_enter = calc.set_num2(xnum2);
                  
        } while (check_enter == false);

        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << std::endl;
        std::cout << "num1 - num2 = " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_2_1() << std::endl;
    } while (true);

    return 0;
}

