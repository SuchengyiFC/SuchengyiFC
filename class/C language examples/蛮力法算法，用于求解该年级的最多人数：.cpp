#include <stdio.h>

int main() {
    int max_people = 0;
    for (int boat1 = 1; boat1 <= 100; boat1++) { // ���������100ֻ��
        for (int boat2 = 1; boat2 <= 100; boat2++) { // ͬ���أ����������100ֻ��
            if ((boat1 * 10 - 2) == (boat2 * 8 + 1)) { // ����һ�����2����λ
                int people = boat1 * 10;
                if (people > max_people) {
                    max_people = people;
                }
            }
        }
    }
    printf("���꼶���������Ϊ: %d\n", max_people);
    return 0;
}
	//������һ��ʹ�� C ���Ե��������㷨�����������꼶�����������	
	#include <stdio.h>

int main() {
    int boat1, boat2, max_people;
    
    // ��������һ�ⷽ�̵õ���ֻ����
    boat1 = 18;
    boat2 = boat1 + 1;
    
    // �����������
    max_people = boat1 * 10;
    
    printf("���꼶���������Ϊ: %d\n", max_people);
    return 0;
}
