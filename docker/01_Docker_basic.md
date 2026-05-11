# Docker
* ref #1 [Youtube 드림코딩](https://www.youtube.com/watch?v=LXJhA3VWXFA)
* ref #2 [인프런 - 개발자를 위한 쉬운 도커](https://www.inflearn.com/course/%EA%B0%9C%EB%B0%9C%EC%9E%90%EB%A5%BC-%EC%9C%84%ED%95%9C-%EC%89%AC%EC%9A%B4-%EB%8F%84%EC%BB%A4/dashboard?cid=332726)

### 1. Docker란
* Host OS 자원을 이용하며, Container 가상화를 위한 수단
* container > Application, System Tools, Dependencies, Assets 
* container를 Windows, Mac, Linux에 배포
* e.g., local -> app.js (여기에 관련된 node.js/npm/Configs/Dependencies) -> Server

---

### 2. VM과 Docker의 차이
#### 2-1. VM
| Virtual Machine : App1, libraries, binaries, GUEST OS(Mac, Windows, Linux) |
|----------------------------------------------------------------------------|
| Virtual Machine1 /  Virtual Machine2 / Virtual Machine3                    |
| Hypervisor (VMware, virtualBox) |
| Host OS |
| Infrastructure (클라우드, 데이터베이스) |
* **Guest OS(kernal) -> Hypervisor -> Host OS(kernal) -> Server** 
* 장점 : MAC 운영체제에서 Windows와 Linux를 동시에 운영 가능
* 단점 : 무겁고, 자원을 많이 잡아먹음 -> 이러한 단점으로 경량화 된 컨셉이 **Container**

#### 2-2. Container
| Container : App1, libraries, binaries |
|---------------------------------------|
| Container1 / Container2 / Container3  |
| Container Engine (설치 필요) |
| Host OS |
| Infrastructure (클라우드, 데이터베이스) |
* **Container -> Host OS(kernal) -> Server**
* 장점 #1 container engine 설치를 통해, 각각의 고립된 환경에서 container 작동
* 장점 #2 container에서 운영체제를 포함하지 않고 작동, container engine에서 Host OS를 공유하며 진행 -> container engine 중 대표적인 것이 **docker**

---

### 3. docker의 3요소 : Dockerfile / Image / Container
#### 3-1. Dockerfile : docker을 어떻게 만들지 설명하는 내용
* copy files : 어떤 파일들이 필요한지
* Install dependencies : framwork나 library를 설치해야 하는지
* Set environment variables : 필요한 환경 변수
* Run setup scripts : 어떻게 구동할지

#### 3-2. Image : 실행되고 있는 application 상태를 스냅샷해 이미지로 만들어둠
* 객체지향에서 Class와 유사한 형태
* 변경이 불가능한 상태
* 실행되고 있는 application 상태 : dockerfiles, node.js, app.js, assets, dependencies

#### 3-3. Container : Image를 독립된 환경에서 실행시키는 곳 [6:20]
* 실제로 각각 동작하는 container를 만들 수 있음
> (1) Shipping containers : 어떻게 이미지를 배포할 수 있는지
> * Local(Container Engine(docker)가 설치된) -> Image 생성 -> PUSH -> Container Registry(e.g., GitHub)
> * Container Registry(e.g., GitHub) -> PULL -> Server(Container Engine(docker)가 설치된) -> RUN

> (2) Container Registry(e.g., GitHub) 의 종류
> * Public : Docker hub, Red hat, GitHub packages
> * Private (회사에서 주로 사용) : AWS, Google Cloud, MS Azure


