## TIL : main.yml

### 1. on
```bash
on:
  workflow_dispatch:
    inputs:
      log_date:
        description: '분석할 날짜'   # 입력창 설명
        required: true              # 필수 여부
        default: '2025-05-03'        # 기본값
        type: string                 # 타입
```

> 1) string - 텍스트 입력
```bash
inputs:
  log_date:
    description: '날짜 입력 (YYYY-MM-DD)'
    type: string
    default: '2025-05-03'                # 타입
```
> 2) beelean - 체크 박스
```bash
inputs:
  debug_mode:
    description: '디버그 모드 켜기'
    type: boolean
    default: false               # 타입
```
> 3) choice - 드롭다운
```bash
inputs:
  environment:
    description: '실행 환경 선택'
    type: choice
    options:
      - development
      - staging
      - production             # 타입
```
> 4) number - 숫자 입력
```bash
inputs:
  retry_count:
    description: '재시도 횟수'
    type: number
    default: 3          # 타입
```

### 2. 상황
> - 특정 날짜 로그만 분석하고 싶을 때 날짜 입력받아서 실행
> - 긴급하게 수동으로 배포할 때 버튼 한 번으로 실행
> - 테스트 환경 골라서 실행할 때 choice로 환경 선택
> - 디버그 모드 켜고 싶을 때 boolean으로 토글

### 3. Note
> - 로컬에서 RUN할 때, 해당 내용은 반영되지 않음

