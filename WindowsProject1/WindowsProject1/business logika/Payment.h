#pragma  once
class Payment
{
private
		Money amout; //��������� ����������
public:
	Payment(Money cashTendered); //���������
//� ����������(���������� cashTendered ���� Money
	Money getAmount();
// ������� getAmount ���������� ��������� ���� Money
};
