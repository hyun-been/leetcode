int reverse(int x){
    int y = 0;
    while(x != 0) { //양수, 음수 모두에 대한 처리를 위해 x > 0 사용하지 않음
        if (y > 214748364 || y < -214748364) //4byte를 초과하는 정수에 대한 예외 처리
            return 0;
        y *= 10;
        y += x % 10;
        x /= 10;
    }
    return y;
}
