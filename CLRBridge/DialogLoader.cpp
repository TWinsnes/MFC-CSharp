#include "stdafx.h"
#include "DialogLoader.h"

#include "DialogLoaderImpl.h"

DialogLoader::DialogLoader()
{
}


DialogLoader::~DialogLoader()
{
}

void DialogLoader::LoadDialog()
{
	DialogLoaderImpl^ loader = gcnew DialogLoaderImpl();

	loader->LoadDialog();
}