#include <iostream>
#include <cmath>


int main()
{
    setlocale(LC_ALL, "Russian");
    int totalChest = 80;
    int count = 0;

    int left = 1;
    int right = totalChest;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        int goldenChest = rand() % totalChest + 1;
        if (goldenChest <= middle)
        {
            right = middle;
        }
        else
        {
            left = middle + 1;
        }
        count++;
    }
    
    std::cout << "Мы нашли золотую хвостовку в студуке под номером " << left << std::endl;
    std::cout << "Минимальное кол-во испытаний оказалось " << count << std::endl;
    return 0;
}
