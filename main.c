#undef _NO_OLDNAMES  /* ����� ������ �ؾ��� */
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

/* ���� ���� ��ũ�ο� �ߵ�(?)�� �� ���ϴ�(...) */

function f(int x)
{
    if(x%2) return x * 3 + 1;
    else return x / 2;
}

program (calculator)
{
    int memory option;

    puts  ("���������������������������������� ");
    puts  ("��1. ���   2. ����   3. ����   �� ");
    printf("���������������������������������� ");

opt_input:
    input("\n\n�ɼ�: ", option);

    int memory n, m, ret initialized as 1, R1 initialized as 1, R2 initialized as 1, i;
    int memory yn;

    selectcase(option)
        {
            case 1:
                input("��: ", n);
                for(i as 1 loop when i leq n step i++)
                    {
                        ret *= i;
                    }

                printf("%i����� %i�Դϴ�. \n\n", n, ret);

                input("�� ����ұ��?[1: ��] ", yn);

                if(yn equ 1) goto opt_input;
                else return 0;
            case 2:  /* ���� ����, �ƴϿ��� �ٷ� ����� �극��ũ ��� �� */
                input("nPm���� n: ", n);  /* ��? ��� ��Ű�� �Ŵ��� �ƴ� */
                input("nPm���� m: ", m);

                for(i as n loop when i geq m step i--)
                    {
                        ret *= i;
                    }

                printf("���� %i %i�� %i�Դϴ�. \n\n", n, m, ret);

                input("�� ����ұ��?[1: ��] ", yn);

                if(yn equ 1) goto opt_input;
                else return 0;
            case 3:
                input("nCm���� n: ", n);
                input("nCm���� m: ", m);

                for(i as n loop when i geq m step i--)
                    {
                        R1 *= i;
                    }

                for(i as m loop when i geq 1 step i--)
                    {
                        R2 *= i;
                    }

                printf("���� %i %i�� %i�Դϴ�. \n\n", n, m, R1 / R2);

                input("�� ����ұ��?[1: ��] ", yn);

                if(yn equ 1) goto opt_input;
                else return 0;
            default:
                puts("[����] �ɼ��� �ùٸ��� �ʽ��ϴ�!");
                goto opt_input;
        }

    return 0;
}
