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
		Dialog1^ dialog;
		dialog->Show();
	}
	catch(Exception^ ex)
	{
		throw;
	}
}
