#include "stdafx.h"
#include "DialogLoaderImpl.h"

using namespace CSharpLib;
using namespace System;

DialogLoaderImpl::DialogLoaderImpl()
{
}


DialogLoaderImpl::~DialogLoaderImpl()
{
}

void DialogLoaderImpl::LoadDialog()
{
	try
	{
		Loader::LoadDialog();
	}
	catch(Exception^ ex)
	{
		throw;
	}
}
