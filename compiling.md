
# 초간단 컴파일링 옵션들

-c 옵션은 하나의 프로그램을 여러 파일로 분리해 작성한 다음, 함께 컴파일 하는 ‘분리 컴파일 시’ 많이 사용된다. 예를 들어 main.c와 hi.c 두 개의 소스로 구성된 프로그램을 살펴보자.

```c
// main.c
extern void hi();

main() {
  hi();
}
```

```c
// hi.c
#include <stdio.h>

void hi() {
  printf("Hi\n");
}
```

이 둘을 함께 컴파일 하는 방법은 다음과 같으며, 이를 분리 컴파일이라 한다.

```bash
$ gcc main.c hi.c -o test
$ ./test
Hi
```

만약 다음과 같이 파일별로 컴파일 하면 컴파일 오류가 발생하는데, main.c 파일에 대한 오류는 호출하는 함수 hi라는 함수가 정의되지 않았기 때문이고, hi.c 파일에대한 오류는 main 함수가 없기 때문이다.

```bash
# 오류가 난다. 오류의 종류는 생략한다.
$ gcc main.c -o test
# 오류가 난다. 오류의 종류는 생략한다.
$ gcc hi.c -o hi.c
```

그러나 다음과 같이 각 파일별로 오브젝트 파일을 만들고 나중에 링크하는 것은 가능하다.

```bash
gcc -c main.c
gcc -c hi.c
gcc main.o hi.o -o test
```

이런식으로 분리 컴파일을 하게 되면 만일 hi.c 파일이 수정되면 main.c와 hi.c를 모두 컴파일할 필요 없이 hi.c 파일에 대한 오브젝트 파일만을 생성하고 링크하면 원하는 실행 파일이 생성된다.

```bash
# hi.c를 수정하고 나서 다시 컴파일
$ gcc -c hi.c
$ gcc main.o hi.o -o test
```
