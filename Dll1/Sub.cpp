#include "pch.h"
#include "Sub.h"

int f_sub(int a, int b)
{
	return a + b;
}

extern "C"  int __cdecl f(int a, int b)
{
	return f_sub(a, b);
}
#include <string>
#include <string.h>
extern "C" Y210918A_Sub_API char* __stdcall g(int a)
{
	const auto s = std::to_string(a);
	return _strdup(s.c_str());//malloc
}
extern "C" Y210918A_Sub_API void __stdcall h(void* p)
{
	free(p);
}
#include <Shlwapi.h>
#pragma comment(lib, "Shlwapi.lib")
extern "C" Y210918A_Sub_API char* __stdcall g2(int a)
{
	const auto s = std::to_string(a);
	return StrDupA(s.c_str());//malloc
}
