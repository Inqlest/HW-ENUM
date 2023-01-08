#include <iostream>

enum class months{
    January = 1,
    February,
    March, 
    April, 
    May, 
    June, 
    July, 
    August, 
    September, 
    October,  
    November,
    December
};

int main(){
    int num;
    months month; 
    while (true){
    std::cout << "Enter month number: " << std::endl;
    std:: cin >> num;
    month = static_cast<months>(num);
    switch(static_cast<int>(month)){
        case 0: std::cout << "End of programm\n";
        return 0;
        break;
        case 1: 
        std::cout << "January\n" << std::endl;
        break;
        case 2: 
        std::cout << "February\n" << std::endl;
        break;
        case 3: 
        std::cout << "March\n" << std::endl;
        break;
        case 4: 
        std::cout << "April\n" << std::endl;
        break;
        case 5: 
        std::cout << "May\n" << std::endl;
        break;
        case 6: 
        std::cout << "June\n" << std::endl;
        break;
        case 7: 
        std::cout << "July\n" << std::endl;
        break;
        case 8: 
        std::cout << "August\n" << std::endl;
        break;
        case 9: 
        std::cout << "September\n" << std::endl;
        break;
        case 10:
        std::cout << "October\n" << std::endl;
        break;
        case 11:
        std::cout << "November\n" << std::endl;
        break;
        case 12:
        std::cout << "December\n" << std::endl;
        break;
        default:
        std::cout << "Wrong number\n" << std::endl;
        break;
    }
    }
    
}