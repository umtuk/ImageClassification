# ImageClassification
[MFC] 폴더 안의 모든 이미지 파일을 분류
[MFC] Classify all image files in the folder.
<hr/>

## Manual

키보드 입력을 0~9까지 받아 최대 10 종류로 이미지 파일을 분류합니다.
파일 경로는 분류할 이미지 파일이 있는 폴더의 경로입니다.
저장 경로는 분류할 이미지를 저장할 폴더의 경로입니다.
파일 경로와 저장 경로를 입력하고 시작 버튼을 클릭하면 이미지가 출력되고 0~9를 입력해 분류합니다.
정렬 버튼을 누르면 왼쪽 박스의 (머릿말)+(숫자 인덱싱)로 파일 이름이 변경됩니다.

ImageClassificationDlg.cpp 코드 상단 부분에 사용자 설정 란이 있습니다.

// 사용자 설정

vector<CString> fileFormat  // 이미지 파일 형식을 추가하거나 삭제합니다.
CString initSave            // 초기 저장 경로 값을 설정합니다.
CString initLoad            // 초기 파일 경로 값을 설정합니다.
CString sortFileFormat      // 이미지 파일 정렬 후 파일 형식을 설정힙니다.

//


CImgDlg.cpp 코드 상단 부분에 사용자 설정 란이 있습니다.

// 사용자 설정

CString dirName[10]   // 폴더 이름을 설정합니다. 폴더 이름을 ""로 설정할 경우 그 폴더는 생성되지 않습니다.

//
