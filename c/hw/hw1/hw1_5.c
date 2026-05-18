#include <stdio.h>
int main()
{
    int E, S, N;
    scanf("%d %d %d", &E, &S, &N);
    char skill;
    int total_damage = 0;
    int total_block = 0;
    int current_orbs = N;
    while (skill != 'Q')
    {
        scanf(" %c", &skill);
        if (E >= 1)
        {
            if (skill == 's')
            {
                if (S < -6)
                    total_damage += 0;
                else
                    total_damage += 6 + S;
                E -= 1;
            }
            if (skill == 'b')
            {

                total_block += 5;
                E -= 1;
            }
            if (skill == 'c')
            {

                current_orbs += 1;
                E -= 1;
            }
        }
        // else if{

        // }

        if (skill == 't')
        {
            E += 2;
            S -= 1;
        }

        if (E >= 2)
        {
            if (skill == 'e')
            {
                total_damage += current_orbs * 8;
                current_orbs = 0;
                E -= 2;
            }
        }
    }
    if (skill == 'Q')
    {
        total_damage += current_orbs * 3;
    }

    printf("%d %d\n", total_damage, total_block);
    printf("%d %d %d", E, S, current_orbs);
}

// 2 1 1 s c t e Q

//     23 0 0 0 0