#undef _NO_OLDNAMES  /* 이토아 쓰려면 해야함 */
#define function
#define program(name) main()
#define elseif else if
#define forever while(1)
#define true 1
#define false 0
#define set
#define as =
#define update
#define by +=
#define equ ==
#define neq !=
#define geq >=
#define leq <=
#define gtr >
#define lss <
#define checklist short int
#define mark
#define checked 1
#define memory
#define initialized
#define when ;
#define step ;
#define until(exp) while(!(exp))
#define loop
#define or ||
#define and &&
#define not
#define selectcase switch
#define ultra long long
#define input(prompt,variable) printf(prompt);scanf("%i",&variable)

/* 내가 봐도 매크로에 중독(?)이 된 듯하다(...) */

function f(int x)
{
    if(x%2) return x * 3 + 1;
    else return x / 2;
}

program (calculator)
{
    int memory option;

    puts  ("┌───────────────┐ ");
    puts  ("│1. 계승   2. 순열   3. 조합   │ ");
    printf("└───────────────┘ ");

opt_input:
    input("\n\n옵션: ", option);

    int memory n, m, ret initialized as 1, R1 initialized as 1, R2 initialized as 1, i;
    int memory yn;

    selectcase(option)
        {
            case 1:
                input("수: ", n);
                for(i as 1 loop when i leq n step i++)
                    {
                        ret *= i;
                    }

                printf("%i계승은 %i입니다. \n\n", n, ret);

                input("또 계산할까요?[1: 예] ", yn);

                if(yn equ 1) goto opt_input;
                else return 0;
            case 2:  /* 예면 위로, 아니오면 바로 종료라 브레이크 없어도 됨 */
                input("nPm에서 n: ", n);  /* 응? 노드 패키지 매니저 아님 */
                input("nPm에서 m: ", m);

                for(i as n loop when i geq m step i--)
                    {
                        ret *= i;
                    }

                printf("순열 %i %i은 %i입니다. \n\n", n, m, ret);

                input("또 계산할까요?[1: 예] ", yn);

                if(yn equ 1) goto opt_input;
                else return 0;
            case 3:
                input("nCm에서 n: ", n);
                input("nCm에서 m: ", m);

                for(i as n loop when i geq m step i--)
                    {
                        R1 *= i;
                    }

                for(i as m loop when i geq 1 step i--)
                    {
                        R2 *= i;
                    }

                printf("조합 %i %i은 %i입니다. \n\n", n, m, R1 / R2);

                input("또 계산할까요?[1: 예] ", yn);

                if(yn equ 1) goto opt_input;
                else return 0;
            default:
                puts("[오류] 옵션이 올바르지 않습니다!");
                goto opt_input;
        }

    return 0;
}
