#pragma once

#include "stdafx.h"

class CFrameWindowWnd : public CWindowWnd, public INotifyUI
{
public:
	CFrameWindowWnd();
	virtual LPCTSTR GetWindowClassName() const;
	virtual UINT GetClassStyle() const;
	virtual void OnFinalMessage(HWND hWnd);
	virtual void Notify(TNotifyUI& msg);
	virtual LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);

private:
	CPaintManagerUI m_pm;
};

