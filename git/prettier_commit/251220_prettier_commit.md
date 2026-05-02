### Prettier - Github 구조
1. git commit
2. husky (pre-commit / 깃허브 훅) // 언제 시작하지 
3. lint-staged (이번 커밋 파일만) // 어떤 파일에 할지
4. prettier --write // 어떤 규칙을 적용할지(무엇을)
5. 정렬된 코드로 commit
``` bash
> Prettier / Husky / lint-staged → npm 패키지
> commit 훅 → Git 기능
```

### 깃허브와 로컬 폴더 연동
``` bash
git init 
> 버전 관리 시작
> 이 폴더를 깃 저장소로 만든다 
git remote add origin https://github.com/yeajieo/DailyStudyNotes.git
git remote -v
```

### 로컬 폴더 환경 설정
``` bash
npm init -y
> 프로젝트 시작 (node.js 프로젝트 초기화)
> 결과물 : package.json 파일 생성, 프로젝트 정보 저장 공간 생성

// 모듈 설치
npm install --save-dev prettier husky lint-staged
// husky 활성화
npx husky-init
```

### 프리티어 규칙 파일 생성
``` bash
touch .prettierrc
{
  "printWidth": 100,
  "tabWidth": 2,
  "useTabs": false,
  "semi": true,
  "singleQuote": true,
  "trailingComma": "es5",
  "arrowParens": "always",
  "bracketSpacing": true,
  "endOfLine": "lf"
}
```

### package.json 편집
``` bash
{
  "name": "study_cicd",
  "version": "1.0.0",
  "description": "",
  "main": "index.js",
  "scripts": {
    "test": "echo \"Error: no test specified\" && exit 1",
    "prepare": "husky install"
  },
  "lint-staged": {
    "**/*.js": ["prettier --write", "git add"]
  },
  "keywords": [],
  "author": "",
  "license": "ISC",
  "type": "commonjs",
  "devDependencies": {
    "husky": "^8.0.0",
    "lint-staged": "^16.2.7",
    "prettier": "^3.7.4"
  }
}
> "**/*.js" → 모든 JS 파일
> "prettier --write" → Prettier로 자동 포맷
> "git add" → 포맷된 파일을 자동으로 스테이지에 올림 (수정 파일을 올리는 역할)
> 주의 : 이 옵션이 깃허브에 파일을 올릴 때 ADD 과정을 생략한다는 말이 아니고, 스테이지에 올라간 파일을 수정하고, 자동으로 add 해주는 역할
```
### package 적용
``` bash
npm install
> package.json 파일에 적혀 있는 모든 의존성 라이브러리를 한 번에 설치해 줌
> node_modules/ 폴더가 생김 → 설치된 라이브러리들이 들어 있음
> package-lock.json 파일 생성/업데이트 → 설치된 라이브러리 버전 정보를 기록

// 최초 한번만 프로젝트에 설정하면 됨 (다른 소스파일 만들어도 상관 없음)
npx husky set .husky/pre-commit "npx lint-staged"

// 교정 시작 (수동으로 하는 법 : 깃허브 업로드 연동해놔서 안 해도 됩니다)
npx prettier --write 파일이름.js
npx prettier --write .
```

### 엉망으로 쓴 js 예시 파일 생성하기 (example_prettier.js)
``` bash
function helloWorld( name ,age){console.log("Hello "+name +"! You are "+age+" years old")}
const numbers=[1,2,3,4,5,6]; for(let i=0;i<numbers.length;i++){console.log(numbers[i])}
const person={name:"Alice",age:25, hobbies:["reading","gaming","coding"]};
const add=(a,b)=>{return a+b}
if(true){console.log("This is true")}else{console.log("This is false")}
```

### 깃허브 푸시 옵션
1. -u 사용하면 다시 푸시할 때 브렌치 이름 지정하지 않아도 됨 
``` bash
git push -u origin main
git push
```

2. 푸시할 때마다 브렌치 이름 써야함
``` bash
git push origin main
```

3. 오류
``` bash
git branch -r
// 목록 확인해보니까 브랜치 자체가 없었음

git bracnch
// 먀스터 브렌치가 생김

git push -u origin master
// 메인 말고 마스터로 올려보기

```
4. VScode에서 파일 들여쓰기 수정하기
``` bash
> shift + option + f
> 마크다운 프리뷰 : shift + cmd + v
```

### ESLint
- 코드 문법을 교정해줌

### GIT LENS
``` bash
> 코드 라인별 → 누가, 언제, 왜 수정했는지
> 파일 히스토리 → 어떤 커밋에서 바뀌었는지
> 저장소 히스토리 → 브랜치/태그/커밋 흐름 한눈에
```

### Project manager
- 여러개의 프로젝트 동시 작업
- 깃 레포가 여러개
- 프로젝트 즐겨찾기

