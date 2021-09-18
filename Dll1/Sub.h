#ifdef DLL1_EXPORTS
//このDLLをビルドする時
#	define	Y210918A_Sub_API	__declspec(dllexport)
#else
//このDLLを利用するプログラムをビルドする時
#	define	Y210918A_Sub_API	__declspec(dllimport)
#endif
extern "C" int  __cdecl  f (int a, int b);
extern "C" Y210918A_Sub_API char*  __stdcall g (int a);
extern "C" Y210918A_Sub_API void   __stdcall h (void* p);
extern "C" Y210918A_Sub_API char*  __stdcall g2(int a);
