#pragma once
#include "IDialogLoader.h"

class DialogLoader : public IDialogLoader
{
public:
	DialogLoader();
	virtual ~DialogLoader();

	virtual void LoadDialog();
};

