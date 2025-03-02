#include <iostream>
#include <string> 
struct MARSH {
    int num;
    std::string start;
    std::string end;
};
int main()
{
    setlocale(LC_ALL, "Russian");
    MARSH* marsh_arr = new MARSH[8];
    for (int i = 0; i < 8; i++) {
        std::cout << "Введите номер маршрута" << ": ";
        std::cin >> marsh_arr[i].num;
        std::cout << "Введите название начального пункта маршрута" << ": ";
        std::cin >> marsh_arr[i].start;
        std::cout << "Введите название конечного пункта маршрута" << ": ";
        std::cin >> marsh_arr[i].end;
    }
    for (int i = 0; i < 8 - 1; i++) {
        for (int j = 0; j < 8 - i - 1; j++) {
            if (marsh_arr[j].num > marsh_arr[j + 1].num) {        // Меняем местами элементы
                MARSH temp = marsh_arr[j];       //temp - временная переменная, используемая для обмена значениями двух элементов массива
                marsh_arr[j] = marsh_arr[j + 1];
                marsh_arr[j + 1] = temp;
            }
        }
    }
    std::cout << "\nУпорядоченные данные:\n";
    for (int i = 0; i < 8; ++i) {             //вывод массива уже упорядоченного
        std::cout << "Номер маршрута: " << marsh_arr[i].num 
            << ", название начального пункта маршрута: " << marsh_arr[i].start 
            << ", название конечного пункта маршрута: " << marsh_arr[i].end << std::endl;
    }
    int N;
    while (true)
    {
        std::cout << "Введите номер маршрута: " ;  
        std::cin >> N;   
        int i = 0;
        while ((marsh_arr[i].num != N) and (i < 8)) i++; {
            if (i == 8) {
                std::cout << "Вашего маршрута не существует";
                break;
            }
            else
        {
                std::cout << "Номер маршрута: " << marsh_arr[i].num
                    << ", название начального пункта маршрута: " << marsh_arr[i].start
                    << ", название конечного пункта маршрута: " << marsh_arr[i].end << std::endl;
        }
        }
    }
}