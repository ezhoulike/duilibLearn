#pragma once

#include "stdafx.h"

class UiLiscene : public WindowImplBase
{
public:
	UiLiscene();
	~UiLiscene();

	virtual void InitWindow();
	virtual void OnFinalMessage(HWND hWnd);
	virtual void Notify(TNotifyUI& msg);

protected:
	virtual CDuiString GetSkinFolder();
	virtual CDuiString GetSkinFile();

	virtual UILIB_RESOURCETYPE GetResourceType() const;

	virtual LPCTSTR GetResourceID() const;

	virtual LPCTSTR GetWindowClassName() const;

	virtual LRESULT HandleCustomMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);

private:
	CButtonUI *m_AboutBtn;
	CButtonUI *m_MinBtn;
	CButtonUI *m_CloseBtn;

	CEditUI *m_UserAgreement;

	COptionUI *m_AgreeBtn;

	CButtonUI *m_OkBtn;
	CButtonUI *m_NoBtn;
};

