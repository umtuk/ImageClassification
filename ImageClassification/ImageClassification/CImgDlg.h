#pragma once

// CImgDlg 대화 상자

class CImgDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CImgDlg)

public:
	CImgDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CImgDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_IMG_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	virtual BOOL OnInitDialog();
	CString load, save;
	CString fileName;
	CImage img;
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};
