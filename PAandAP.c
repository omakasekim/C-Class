#include <stdio.h>

// Pointer Array & Array Pointers

//포인터 배열 , 배열 포인터

// A Pointer Array is an array with pointers as its members.
// Thus, an array that stores pointers.

int main()
{

    int i, arr_len;

    int num01 = 10, num02 = 20, num03 = 30;

    int *arr[3] = {&num01, &num02, &num03}; // int형 포인터 배열 선언

    arr_len = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < arr_len; i++)

    {

        printf("%d\n", *arr[i]);
    }

    // An Array Pointer is a pointer pointing to an array.
    // We have previously learnt that the name of the array, in the sense that its immutable, works just like a pointer.
    // the reason we use Array pointers explicitly is to efficiently index elements when dealing with N-dimension arrays (N>2)
    // Thus Array Pointers have no meaningful use when dealing with 1D array.

    int arr[2][3] = {

        {10, 20, 30},

        {40, 50, 60}

    };

    printf("%d\n", *arr[0]);

    printf("%d\n", *arr[1]);

    int arr[2][3] = // 배열의 선언

        {

            {10, 20, 30},

            {40, 50, 60}

        };

    int(*pArr)[3] = arr; // 배열 포인터의 선언

    printf("%d\n", arr[1][1]); // 배열 이름으로 참조

    printf("%d\n", pArr[1][1]); // 배열 포인터로 참조

    return 0;
}

/*


포인터 배열(Array of Pointer)와 배열 포인터(Pointer to Array)는 비슷해 보이지만 많은 차이점이 있다.



기본적으로 포인터와 배열에 개념을 정확하게 이해해야 아래 내용을 이해하기 쉽다.

간단히 설명하자면 둘다 비슷한 속성을 가지고 있지만 배열은 메모리공간을 사용자 마음대로 접근하며 데이터를 넣고 수정할 수 있다.

포인터 같은 경우에는 특정 메모리에 주소값을 가지고 있어서 간접참조를 하는 방식이다.


배열 포인터와 포인터 배열 말장난 같지만 가장 쉽게 구분하는 방식은 앞에 붙은 단어는 수식어이고 뒤에 단어가 명사이다.

바나나우유, 딸기우유가 있으면 우유인데 딸기나 바나나가 첨가된 우유이다.

포인터 배열은 주소값들을 저장하는 배열 이다.

배열 포인터는 배열의 시작주소값을 저장할 수 있는 포인터 이다.



- 포인터 배열- 

! char *data[] = {"가나다", "ABC", "포인터"};

의 경우 연산자 우선순위에 따라 뒤에 붙은 []이 우선이고 그다음 char *가 그 다음이다.

따라서 data 변수는 배열이다. 그리고 그 배열에 char *를 담는다.

"가나다" 문자열에 시작주소 값을 data[0] 에 넣고

"ABC" 문자열에 시작주소 값을 data[1] 에 넣는다.

포인터 배열은 문자열등과 같이 큰 길이에 데이터들을 포인터로 가르키게하고 
해당 포인터들을 다시 배열로 묶어서 관리하기 쉽게 할때 사용하면 좋다. 
위와같이 문자열 여러개를 각각 포인터가 가르키게하고 그 포인터들을 하나의 배열로 묶어서 관리해서 사용하기도 쉽고 가독성도 좋다.
만약에 따로따로 하나의 char* 로 할당을 했다면 for문을 사용하기도 힘들었을 것이다.
*/

/*

- 배열 포인터 -

!char arr[3][7] = {"가나다", "ABC", "포인터"};

!char (*data)[7];

!data = arr;

위의 경우 (*data) 가 먼저이고 char [7]가 그 다음이다.
따라서 data는 포인터 이다. 포인터는 주소값을 저장하는 곳이다. 따라서 char [7] 자료형에 주소값을 담는다.
data는 char [7]의 주소값을 가지기 때문에 data + 1을 하면 주소값이 sizeof(char) * 7 증가한 메모리의 주소 값을 가진다. 


 배열 포인터는 보통 함수선언을 해서 2차원 배열의 데이터를 파라미터로 받을때 많이 사용한다. 
 위의 예제에서 처럼 2차원으로 선언한 배열이 있다면 이것을 배열 포인터로 가리키게 하여 접근할 수 있다.

 한가지 주의해야 할 점은 위의 예제에서 처럼 data 입장에서는 arr이 몇개의 데이터를 가지고 있는지 알 수 없다. 
 그래서 함수에 넘겨줄때에는 3개의 char [7]의 데이터가 존재한다는 사실을 알려주기 위해 추가에 파라미터 변수가 필요하다. 
 그래야 안정적인 코드작성이 가능하다.
*/
