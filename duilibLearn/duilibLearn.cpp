// duilibLearn.cpp : 定义应用程序的入口点。
//

#include "stdafx.h"
#include "duilibLearn.h"
#include "FrameWindowWnd.h"
#include "UiLiscene.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
	CPaintManagerUI::SetInstance(hInstance);
	CPaintManagerUI::SetResourcePath(CPaintManagerUI::GetInstancePath());

// 	CFrameWindowWnd *pFrame = new CFrameWindowWnd;
// 	if (pFrame == NULL)
// 	{
// 		return 0;
// 	}
// 
// 	pFrame->Create(NULL, _T("测试"), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
// 	pFrame->ShowWindow(true);

	UiLiscene *Ui = new UiLiscene;
	if (nullptr == Ui)
	{
		return 0;
	}

	Ui->Create(NULL, _T(""), UI_WNDSTYLE_FRAME, WS_EX_WINDOWEDGE);
	Ui->CenterWindow();

	if (Ui->ShowModal() == IDOK)
	{
		return 0;
	}
	else
	{
		return 0;
	}
	
	CPaintManagerUI::MessageLoop();

	return 0;
}

