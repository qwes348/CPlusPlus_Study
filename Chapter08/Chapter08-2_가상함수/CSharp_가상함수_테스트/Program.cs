namespace test;

class Program
{
    class First
    {
        public void MyFunc()
        {
            Console.WriteLine("First");
        }

        public virtual void MyFunc2()
        {
            Console.WriteLine("First");
        }

        public void MyFunc3()
        {
            Console.WriteLine("First");
        }
    }

    class Second : First
    {
        public void MyFunc()
        {
            Console.WriteLine("Second");
        }

        public override void MyFunc2()
        {
            Console.WriteLine("Second");
        }

        public new void MyFunc3()
        {
            Console.WriteLine("Second");
        }
    }

    class Third : Second
    {
        public void MyFunc()
        {
            Console.WriteLine("Third");
        }

        public override void MyFunc2()
        {
            Console.WriteLine("Third");
        }

        public new void MyFunc3()
        {
            Console.WriteLine("Third");
        }
    }

    static void Main(string[] args)
    {
        First fir = new Third();
        Second sec = (Second)fir;
        Third thr = (Third)sec;

        // 가상함수를 선언하지않고 단순히 같은 이름의 함수를 정의해서 부모 함수를 가린 경우에는
        // 변수(포인터)의 타입의 함수를 호출한다
        fir.MyFunc();
        sec.MyFunc();
        thr.MyFunc();

        Console.WriteLine();

        // 가상함수를 오버라이딩한것만 실제 객체 타입의 함수를 호출한다
        fir.MyFunc2();
        sec.MyFunc2();
        thr.MyFunc2();

        Console.WriteLine();

        // 같은 이름 함수에 명시적으로 new 키워드를 사용해서 가린경우에도 1번케이스와 똑같은 출력을 보인다
        fir.MyFunc3();
        sec.MyFunc3();
        thr.MyFunc3();
    }
}
