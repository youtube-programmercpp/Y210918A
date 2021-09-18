// ConsoleApplication1.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "../Dll1/Sub.h"
#ifdef _DEBUG
#   ifdef _WIN64
#      pragma comment(lib, "..\\x64\\Debug\\Dll1.lib")
#   else
#      pragma comment(lib, "..\\Debug\\Dll1.lib")
#   endif
#else
#   ifdef _WIN64
#      pragma comment(lib, "..\\x64\\Release\\Dll1.lib")
#   else
#      pragma comment(lib, "..\\Release\\Dll1.lib")
#   endif
#endif
#include <Windows.h>
int main()
{
    const auto result = f(1, 2);
    std::cout << "関数 f は" << result << " を返しました。\n";
    const auto p = g(12345);
    std::cout << "関数 g は" << p << " を返しました。\n";
    h(p);

    const auto p2 = g2(12345);
    std::cout << "関数 g2 は" << p2 << " を返しました。\n";
    LocalFree(p2);
}
