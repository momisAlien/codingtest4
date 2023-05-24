#include <stdio.h>

void changecoins(int c);

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        int coin;
        scanf("%d", &coin);

        changecoins(coin);
    }

    return 0;
}

void changecoins(int coin) // 동전 계산
{
    int b, d, e, f;

    b = coin / 25; //쿼터 계산
    coin %= 25;

    d = coin / 10; // 다임 계산
    coin %= 10;

    e = coin / 5; // 니켈 계산
    coin %= 5;

    f = coin; // 폐니 계산

    printf("%d %d %d %d\n", b, d, e, f);
}
