// dllmain.cpp : ���� DLL Ӧ�ó������ڵ㡣
#include "stdafx.h"
#include "dllmain.h"
#include "Hero.h"
#include "Wolf.h"
#include "Tiger.h"
#include "Dumesa.h"

CRoleModule g_module;
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{

	return TRUE;
}



extern "C" __declspec(dllexport) bool dllGetClassObject(const cptf::IID& csid
														, const cptf::IID& iid
														, void** rntObj)
{
	return g_module.dllGetClassObject(csid, iid, rntObj);
}

