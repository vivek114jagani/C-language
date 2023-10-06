#include <stdio.h>

do_while.....!!!

    void
    main()
{
    int n, i = 11;

    printf("Enter the number : ");
    scanf("%d", &n);

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);
}

while
    ....!!!

        void
        main()
    {
        int n, i = 11;

        printf("Enter the number : ");
        scanf("%d", &n);

        while (i <= n)
        {
            printf("%d\n", i);
            i++;
        }
    }

for
    .....!!!

        void
        main()
    {
        int n, i = 1;

        printf("Enter the number : ");
        scanf("%d", &n);

        for (i = 1; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }

for (start; end; ++ / --)