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

void changecoins(int coin) // ���� ���
{
    int b, d, e, f;

    b = coin / 25; //���� ���
    coin %= 25;

    d = coin / 10; // ���� ���
    coin %= 10;

    e = coin / 5; // ���� ���
    coin %= 5;

    f = coin; // ��� ���

    printf("%d %d %d %d\n", b, d, e, f);
}
