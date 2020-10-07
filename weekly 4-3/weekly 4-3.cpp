#include <iostream>
#include <string>

struct person
{

    std::string name = "no";
    std::string num = "no";
};

person number[10];

int inputnumber(int);
int shownumbers(int);

int main()
{
    bool done = false;

    do
    {
        int menu;
        std::cout << "Select option:" << std::endl;
        std::cout << "1: Input a new number" << std::endl;
        std::cout << "2: Show all numbers" << std::endl;
        std::cin >> menu;

        system("CLS");

        if (menu == 1)
        {
            inputnumber(0);
        }
        else if (menu == 2)
        {
            shownumbers(0);
        }
        else
        {
            std::cout << "Please choose a valid option" << std::endl;
        }
    } while (done == false);
    

}

int inputnumber(int)
{
    int nr = 0;
    for (int i = 0; i < std::size(number) + 1; i++)
    {
        nr = i;
        if (number[i].name == "no")
        {
            break;
        }
        if (i == std::size(number))
        {
            std::cout << "Sorry, the list is full" << std::endl;
            return 0;
        }
    }

    std::cout << "Please enter name:" << std::endl;
    //std::getline(std::cin, number[nr].name); //Problems with getline
    std::cin >> number[nr].name;

    std::cout << "\n" << std::endl;
    
    std::cout << "Please enter number:" << std::endl;
    //std::getline(std::cin, number[nr].num); // problems with getline
    std::cin >> number[nr].num;

    system("CLS");

    return 0;

}

int shownumbers(int)
{
    for (int i = 0; i < 10; i++)
    {
        if (number[i].name == "no" && i == 0)
        {
            std::cout << "No one is here" << std::endl;
            break;
        }
        else if (number[i].name == "no")
        {
            break;
        }

        std::cout << number[i].name << std::endl;
        std::cout << number[i].num << std::endl;
        std::cout << "\n" << std::endl;
    }

    system("PAUSE");
    system("CLS");

    return 0;
}
