/*
 * @Author       : Outsider
 * @Date         : 2023-02-10 18:28:04
 * @LastEditors  : Outsider
 * @LastEditTime : 2023-07-25 20:34:44
 * @Description  : In User Settings Edit
 * @FilePath     : \Lq\other\test.cc
 */
#include <iostream>
#include <cstring>

struct MyStruct
{
    char x;
    int a;
    char y;
    double b;
    char c;
};

template <typename T, std::size_t N>
void printSizeAndLength(const T (&arr)[N])
{
    std::cout << "Size of arr in function: " << sizeof(arr)
              << std::endl;                                     // 计算数组的大小
    std::cout << "Length of arr: " << strlen(arr) << std::endl; // 计算字符串的长度
}
int main() { std::cout << sizeof(MyStruct) << std::endl; }
