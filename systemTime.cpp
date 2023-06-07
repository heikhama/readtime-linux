#include <iostream>
#include <chrono>
#include <ctime>    

int main()
{
    auto start = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(start);
    std::cout << "Date and Time: " << std::ctime(&end_time) << std::endl;
    std::tm* now = std::localtime(&end_time);
    std::cout << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday << " "
         << now->tm_hour << ':'
         << now->tm_min << ':'
         << now->tm_sec << std::endl;
         
    return 0;

}