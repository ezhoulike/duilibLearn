#include "stdafx.h"
#include "UiLiscene.h"


#define LISENCE_TEXT _T("\
һ�����ʹ��Э��\r\n\
\
��Э�����û� (��Ȼ�ˡ����˻��������)���人��������Ϣ���޹�˾�����¼��\"�人������\"��֮�����\"����\"�����Ʒ�����¼��\"�������Ʒ\"���ķ���Э�顣һ����װ�����ƻ���������ʽʹ�ñ������Ʒ������ʾͬ�����Э�����������Լ��������û���ͬ��Э����������벻Ҫʹ�ñ������Ʒ��\r\n\
\r\n\
���������Ʒ��������\r\n\
1���������Ʒ֮����Ȩ������֪ʶ��Ȩ�����Ȩ�������棨����������������ȡ�û�δ����ȡ��֮����Ȩ��ר��Ȩ���̱�Ȩ��Ӫҵ���ܵȣ���Ϊ�人���������С��������Ʒ���л����񹲺͹���Ȩ�������ʰ�Ȩ��Լ������֪ʶ��Ȩ������Լ�ı������û�����ñ������Ʒ�ķ�������ʹ��Ȩ��\r\n\
2���û����ã�ɾ�������������������һ�й��ڰ�Ȩ����Ϣ���Ա�������з��򹤳̣��練��ࡢ������ȣ�\r\n\
3���������Ʒ����״��ʽ�ṩ���人�����ز���֤�������Ʒ�ܹ����ܹ���ȫ�����û��������û��ֲᡢ�����ļ���ʹ��˵���������ĵ��еĽ��������ݽ����û��ο����������Ϊ���û��������κγ�ŵ���人��������Ϣ���޹�˾����������汾�����������Թ��ܡ����ݡ��ṹ�����桢���з�ʽ�Ƚ����޸Ļ��Զ����µ�Ȩ����\r\n\
4��Ϊ�˸��õط������û�����Ϊ�����û��ṩ���и��Ե���Ϣ���ݵ���Ҫ���������Ʒ���ܻ��ռ�������ĳЩ��Ϣ������Ҽ�����ŵ����δ����Ȩ�ĵ������ṩ������Ϣ���Ա����û���˽��\r\n\
5��ʹ�ñ������Ʒ���û��Լ��е����գ������÷�����������Χ�ڣ��人��������Ϣ���޹�˾���κ�����²�����ʹ�û���ʹ�ñ������Ʒ������������ġ�����ġ���ֱ�ӻ��ӵ���ʧ�е��⳥���Ρ���ʹ�����ȱ���֪���𺦷����Ŀ����ԡ�\r\n\
6���人�����ض������Ϣ���ݰ��������֡����������������˾Ϊ�û��ṩ����ҵ��Ϣ��������Щ�����ܰ�Ȩ���̱�Ȩ��������֪ʶ��Ȩ������Ȩ���ɵı��������ԣ��û�ֻ���ڱ���˾��Ȩ�²���ʹ����Щ���ݣ����������Ը��ơ��޸ġ���׫��Щ���ݡ������������йص�������Ʒ��\r\n\
7�������δ���ر�Э����κ�һ������人��������Ȩ������ֹ��Э�飬������ͨ�������ֶ�׷�����Ρ�\r\n\
\r\n\
�����人�����ؾ��ж����ϸ����������ݵ����ս���Ȩ���޸�Ȩ�����û����人�����صĽ��ͻ��޸�������,Ӧ������ֹͣʹ�ñ������Ʒ���û�����ʹ�ñ������Ʒ����Ϊ������Ϊ���人�����صĽ��ͻ��޸ĵĽ��ܡ�\r\n\
\r\n\
�ġ���Э���������ľ��ף�˫��ͬ�ⰴ���л����񹲺͹����ɣ����人���������ڵص��й�ϽȨ�ķ�Ժ��Ͻ��")

UiLiscene::UiLiscene()
{
	m_AboutBtn = nullptr;
	m_CloseBtn = nullptr;
	m_MinBtn = nullptr;
	m_UserAgreement = nullptr;
	m_AgreeBtn = nullptr;
}

UiLiscene::~UiLiscene()
{
}

void UiLiscene::InitWindow()
{
	m_AboutBtn = static_cast<CButtonUI *>(m_PaintManager.FindControl(_T("aboutbtn")));
	m_MinBtn = static_cast<CButtonUI *>(m_PaintManager.FindControl(_T("minbtn")));
	m_CloseBtn = static_cast<CButtonUI *>(m_PaintManager.FindControl(_T("closebtn")));
	m_UserAgreement = static_cast<CEditUI *>(m_PaintManager.FindControl(_T("userAgreement")));
	m_OkBtn = static_cast<CButtonUI *>(m_PaintManager.FindControl(_T("OkBtn")));
	m_NoBtn = static_cast<CButtonUI *>(m_PaintManager.FindControl(_T("NoBtn")));
	m_AgreeBtn = static_cast<COptionUI *>(m_PaintManager.FindControl(_T("optNextTips")));

	if (m_UserAgreement)
	{
		m_UserAgreement->SetText(LISENCE_TEXT);
	}


}

void UiLiscene::OnFinalMessage(HWND hWnd)
{
	WindowImplBase::OnFinalMessage(hWnd);
	delete this;
}


LPCTSTR UiLiscene::GetWindowClassName() const
{
	return _T("UiLiscene");
}

CDuiString UiLiscene::GetSkinFile()
{
	return _T("LisceneTest.xml");
}

CDuiString UiLiscene::GetSkinFolder()
{
	return _T("skin");
}

UILIB_RESOURCETYPE UiLiscene::GetResourceType() const
{
	return UILIB_ZIPRESOURCE;
}

LPCTSTR UiLiscene::GetResourceID() const
{
 	return MAKEINTRESOURCE(IDR_ZIPRES1);
}

void UiLiscene::Notify(TNotifyUI& msg)
{
	if (msg.sType == DUI_MSGTYPE_CLICK)
	{
		CControlUI * clickSender = msg.pSender;
		if (m_CloseBtn == clickSender)
		{
			Close(IDCANCEL);
		}
		else if (m_AboutBtn == clickSender)
		{

		}
		else if (m_MinBtn == clickSender)
		{
			SendMessage(WM_SYSCOMMAND, SC_MINIMIZE, 0);
		}
		else if (m_OkBtn == clickSender)
		{
			bool isSelect = m_AgreeBtn->IsSelected();
			Close(IDOK);
		}
		else if (m_NoBtn == clickSender)
		{
			Close(IDCANCEL);
		}
	}
}

LRESULT UiLiscene::HandleCustomMessage(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	if (uMsg == WM_CLOSE)
	{
		Close(wParam);
	}
	return S_OK;
}


