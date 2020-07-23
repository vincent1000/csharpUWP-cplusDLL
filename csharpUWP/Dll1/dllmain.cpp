#include "pch.h"
#include <iostream>
#include <fstream>
#include <time.h>
#include<windows.h>
#define SDK1_EXPORTS
#include "DLL1.h"


SDK1_API void DLL1Init()
{
	std::cout << "in dll init" << std::endl;
	MessageBox(NULL, (LPCWSTR)"1", NULL, 0);
}