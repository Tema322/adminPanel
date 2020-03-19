#pragma  once
class Payment
{
private
		Money amout; //приватная переменная
public:
	Payment(Money cashTendered); //процедура
//с аргументом(переменной cashTendered типа Money
	Money getAmount();
// функция getAmount возвращает рузультат типа Money
};
