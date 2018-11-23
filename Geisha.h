
// LES V3R1.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CLESV3R1App:
// See LES V3R1.cpp for the implementation of this class
//

class CLESV3R1App : public CWinApp
{
public:
	CLESV3R1App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CLESV3R1App theApp;
