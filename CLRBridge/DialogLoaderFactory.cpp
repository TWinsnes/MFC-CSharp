#include "stdafx.h"
#include "DialogLoaderFactory.h"
#include "DialogLoader.h"

DialogLoaderFactory::DialogLoaderFactory()
{
}

DialogLoaderFactory::~DialogLoaderFactory()
{
}

IDialogLoader* DialogLoaderFactory::GetDialogLoader()
{
	return new DialogLoader(); // leaks, but good enough for example purposes
}