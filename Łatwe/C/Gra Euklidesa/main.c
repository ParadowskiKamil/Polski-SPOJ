#include <stdio.h>

int calculateTheFinalAmountOfTokens(int tokensOfFirstPlayer, int tokensOfSecondPlayer);

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        printf("%d\n", calculateTheFinalAmountOfTokens(a, b));
    }
}

int calculateTheFinalAmountOfTokens(int tokensOfFirstPlayer, int tokensOfSecondPlayer)
{
    while (tokensOfFirstPlayer != tokensOfSecondPlayer)
    {
        if (tokensOfFirstPlayer > tokensOfSecondPlayer)
        {
            if (tokensOfFirstPlayer % tokensOfSecondPlayer == 0)
            {
                return tokensOfSecondPlayer * 2;
            }
            else
            {
                tokensOfFirstPlayer %= tokensOfSecondPlayer;
            }
        }
        else
        {
            if (tokensOfSecondPlayer % tokensOfFirstPlayer == 0)
            {
                return tokensOfFirstPlayer * 2;
            }
            else
            {
                tokensOfSecondPlayer %= tokensOfFirstPlayer;
            }
        }
    }
    return tokensOfFirstPlayer + tokensOfSecondPlayer;
}