// CImgDlg.cpp: 구현 파일
//

#include "pch.h"
#include "ImageClassification.h"
#include "CImgDlg.h"
#include "afxdialogex.h"

// 사용자 설정

CString dirName[10] = {		// 폴더 이름을 설정합니다. 폴더 이름을 ""로 설정할 경우 그 폴더는 생성되지 않습니다.
	_T("0"),
	_T("1"),
	_T("2"),
	_T("3"),
	_T("4"),
	_T("5"),
	_T("6"),
	_T("7"),
	_T("8"),
	_T("9")
};

//


// CImgDlg 대화 상자

IMPLEMENT_DYNAMIC(CImgDlg, CDialogEx)

CImgDlg::CImgDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_IMG_DIALOG, pParent)
{
}

CImgDlg::~CImgDlg()
{
}

void CImgDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CImgDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()


// CImgDlg 메시지 처리기


void CImgDlg::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 여기에 메시지 처리기 코드를 추가합니다.
	img.Draw(dc, 0, 0);

					   // 그리기 메시지에 대해서는 CDialogEx::OnPaint()을(를) 호출하지 마십시오.
}


BOOL CImgDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  여기에 추가 초기화 작업을 추가합니다.

	CString str;

	img.Load(load);
	MoveWindow(0, 0, img.GetWidth(), img.GetHeight());

	for (int i = 0; i < 10; i++) {
		if (dirName[i] != _T("")) {
			CreateDirectory(save + _T("\\") + dirName[i], NULL);
		}
	}

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 예외: OCX 속성 페이지는 FALSE를 반환해야 합니다.
}


void CImgDlg::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.

	switch (nChar) {
	case 0x30: // 0
		if (dirName[0] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[0] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	case 0x31: // 1
		if (dirName[1] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[1] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	case 0x32: // 2
		if (dirName[2] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[2] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	case 0x33: // 3
		if (dirName[3] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[3] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	case 0x34: // 4
		if (dirName[4] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[4] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	case 0x35: // 5
		if (dirName[5] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[5] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	case 0x36: // 6
		if (dirName[6] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[6] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	case 0x37: // 7
		if (dirName[7] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[7] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	case 0x38: // 8
		if (dirName[8] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[8] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	case 0x39: // 9
		if (dirName[9] != _T("")) 
			MoveFile(load, save + _T("\\") + dirName[9] + _T("\\") + fileName);
		EndDialog(IDCANCEL);
	}

	CDialogEx::OnKeyDown(nChar, nRepCnt, nFlags);
}
