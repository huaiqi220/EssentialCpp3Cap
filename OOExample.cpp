// OOExample.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "LibMat.h"
#include "Book.h"
#include "AudioBook.h"


void print(const LibMat& mat) {
    std::cout << "in global print(): about to print mat.print() \n";
    mat.print();
}


int main()
{
    std::cout << "\n" << "Creating a LibMat object to print()\n";
    //LibMat libmat;
    //print(libmat);

    std::cout << "--------------------------------------------------" << '\n';


    //Book book("Essential C++", "S B.L");
    //print(book);
    // 
    // 
    // 
    AudioBook ab("Mason and Dixon", "Thomas Pynchon", "Edwin Leonard");
    print(ab);

    // 派生类不必区分“继承而来的成员” 和 “自身定义的成员”
    // 二者完全一致，完全相同 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件


//
//Creating a LibMat object to print()
//--------------------------------------------------
//LibMat::LibMat() default constructor!
//Book::Book(Mason and Dixon, Thomas Pynchon) constructor
//AudioBook::AudioBook(Mason and Dixon, Thomas Pynchon, Edwin Leonard) constructor
//in global print() : about to print mat.print()
//AudioBook::print() --I am an AudioBook object!
//My title is : Mason and Dixon
//My author is : Thomas PynchonMy narrator is : Edwin Leonard
//AudioBook::~AudioBook() destructor!
//Book::Book destructor!
//LibMat::~LibMat() default destructor!
//
//C : \Users\zhuzi\source\repos\OOExample\x64\Debug\OOExample.exe(进程 16780)已退出，代码为 0。
//要在调试停止时自动关闭控制台，请启用“工具”->“选项”->“调试”->“调试停止时自动关闭控制台”。
//按任意键关闭此窗口. . .
