#include <stdio.h>

int main()
{
    int number;

    printf("5�ڸ� ���ڸ� �Է��ϼ���: ");
    scanf_s("%d", &number);

    // �� �ڸ����� ���� ���
    int sum = 0;
    int originalNumber = number; // ���� ���ڸ� �����ؾ� ��

    while (number > 0)
    {
        sum += number % 10; // ������ �ڸ����� ����
        number /= 10; // ������ �ڸ��� ����
    }

    // ���� 5�� ���� ������ Ȯ��
    int remainder = sum % 5;

    if (remainder == 3)
    {
        printf("Suspect(������)\n");
    }
    else 
    {
        printf("Citizen(�ù�)\n");
    }

    return 0;
}