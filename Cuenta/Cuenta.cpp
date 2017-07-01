#include "stdafx.h"  //________________________________________ Cuenta.cpp
#include "Cuenta.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Cuenta app;
	return app.BeginDialog(IDI_Cuenta, hInstance);
}

void Cuenta::Window_Open(Win::Event& e)
{
}

void Cuenta::btClick_Click(Win::Event& e)
{
	static int count = 0;
	count++;
	btClick.Text = Sys::Convert::ToString(count);
}

