
### 1. Intro : FATAL EXCEPTION: main
- crash log intro
* log 첨부할 때, FATAL EXCEPTION 부터 kill 까지

---

### 2. Exception 종류

> java.lang.IllegalStateException: Can not perform this action after onSaveInstanceState
* 액티비티, 프래그먼트 상태 저장 후, 화면이 백그라운드로 넘어간 상태에서 프래그먼트 트랜잭션(교체, 추가 등) 시도할 때 발생
* 시스템은 상태 저장 후 변경사항을 복구할 수 없어 crash
> MapEngine.nativeGetViewLevel(Native method)
* 1안. 지도가 초기화되지 않은 상태에서 매서드 호출 
* 2안. 객체가 해제되었는데 자바쪽에서 참조할 때
> java.lang.IllegalStateException: Fragment already added:
* 동일한 프래그먼트 인스턴스를 중복해서 추가하려 할 때
> java.lang.NullPointerException: Attempt to invoke virtual method
* 초기화하지 않은 null 객체의 메서드를 호출할 때
> java.lang.IndexOutOfBoundsException: Inconsistency detected. Invalid item position 
* RecycelerView에서 list 내용이 변경되었는데, 애니메이션 도는 도중에 인덱스 어긋날 때
> Fatal signal 6 (SIGABRT), code -1 (SI_QUEUE) / crash_dump64
* 프로그램이 스스로 비정상 감지 후 중단 : 메모리 오염, 잘못된 포인터
