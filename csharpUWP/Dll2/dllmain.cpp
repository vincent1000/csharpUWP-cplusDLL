// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include <iostream>
#include <fstream>
#include <time.h>
#include<windows.h>
#define SDK2_EXPORTS
#include "DLL2.h"
#include "DLL1.h"
#pragma comment(lib,"DLL1.lib")
SDK2_API void DLL2Init()
{
	std::cout << "in dll init" << std::endl;
	DLL1Init();
	MessageBox(NULL, (LPCWSTR)"2", NULL, 0);
}

