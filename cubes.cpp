//As we know that our period is from -99999 to 99000, we will shorten our algorithm
#include <iostream>
#include <cmath>
#include <ctime>
#include <fstream>

int main()
{
    int StartNum = -99999;
    int EndNum = -99000;
    double k3 = (int)EndNum / 3, k5 = (int)EndNum / 5, k7 = (int)EndNum / 7, k11 = EndNum / 11, k13 = EndNum / 13, number=0;
    double summ = 0;
    std::ofstream FileOut;
    FileOut.open("C:\\result.txt");

    unsigned int start_time = clock(); 

    for (int counter = -1; counter>EndNum / 3; counter--)
    {
        if (3 * (k3 + counter) > StartNum)
        {
            number = 3 * (k3 + counter);
            summ = summ + number*number*number;
        }
        if (5*(k5+counter)>StartNum)
        {
            number = 5 * (k5 + counter);
            summ = summ + number * number * number;
        }
        if (7*(k7+counter)>StartNum)
        {
            number = 7 * (k7 + counter);
            summ = summ + number * number * number;
        }
        if (11*(k11+counter)>StartNum)
        {
            number = 11 * (k11 + counter);
            summ = summ + number * number * number;
        }
        if (13 * (k13 + counter)>StartNum)
        {
            number = 13 * (k13 + counter);
            summ = summ + number * number * number;
        }
    }
    
    unsigned int end_time = clock(); 
    unsigned int search_time = end_time - start_time; 

    FileOut << "Calculate the sum of cubes of numbers that are divisible without a remainder by 3, 5, 7, 11 or 13 and are in the range from -99999 to 99000.\nThe result is " << summ << ";" << std::endl;
    FileOut << "Time value is " << search_time << " milliseconds."<< std::endl;
    std::cout << "Calculate the sum of cubes of numbers that are divisible without a remainder by 3, 5, 7, 11 or 13 and are in the range from -99999 to 99000.\nThe result is " << summ << ";" << std::endl;
    std::cout << "Time value is " << search_time << " milliseconds." << std::endl;
    FileOut.close();
}