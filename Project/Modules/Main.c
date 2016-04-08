#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include"total.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    float version = 0.87;
    MainParameters head;

    printf("Unit Converter. ������ %.2f \n\n", version);

    printf("��������!\n"
           "� ��������� ������ ��������� �������� ������������� � �������� ������\n\n");

    printf("��� ������ ��������, � ��������� ������ ���� �� ������ �� ��������: \n\n"
           "1 - ������; \n\n\t");
    scanf("%d", &head.measurement_id);

    while(head.measurement_id != 1) {
        printf("\n��� �������� ���� �� ������. �������� ���������� �����: \n\n\t");
        scanf("%d", &head.measurement_id);
    }

    switch(head.measurement_id) {
        case 1:
            printf("\n������� �����, ������� �� ������ ���� ���������. \n"
                   "� �������� �����-����������� ��� ������������ ����� ����������� ������ ','.\n\n\t");
            scanf("%lf", &head.MEASUREMENT);
            head.result = selectionswitchData(head.MEASUREMENT);
            break;
        default:
            break;
    }

    printf("\n��������� ���������������: %.6lf\n", head.result);

    system("pause");
    exit(EXIT_SUCCESS);
}
