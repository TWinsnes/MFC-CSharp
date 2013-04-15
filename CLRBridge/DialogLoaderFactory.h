#pragma once
#include "IDialogLoader.h"

#ifdef EXPORTDLL
	#define DECLERATION __declspec(dllexport)
#else
	#define DECLERATION __declspec(dllimport)
#endif

class DECLERATION DialogLoaderFactory
{
public:
	DialogLoaderFactory();
	virtual ~DialogLoaderFactory();

	IDialogLoader* GetDialogLoader();
};

