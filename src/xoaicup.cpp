#include "xoaicup.h"

XOAICup::XOAICup(QObject *parent) :
        QObject(parent)
{

}

void XOAICup::nextOne()
{


	if ((currentPlayer = static_cast<Player_t>(static_cast<int>(currentPlayer) + 1))
	    == END)
		currentPlayer = static_cast<Player_t>(1);
}

void XOAICup::checkMatrix(Point p)
{
	if (p.x > M_SIZE - 1 || p.y > M_SIZE - 1)
		throw std::range_error("Point is bigger than field size!");

	// Определение нижней границы
	auto lower_boundary = [](uint8_t x)->uint8_t {
		auto ret = x
			   -
			   (SERIES - 1);
		if (ret < 0)
			return 0;
		else
			return ret;
	};
	// Определение верхней границы
	auto upper_boundary = [](uint8_t x)->uint8_t {
		auto ret = x
			   +
			   (SERIES - 1);
		if (ret > M_SIZE)
			return M_SIZE;
		else
			return ret;
	};

	// Длина серии
	uint8_t count_h = 0, // Горизонталь
		count_v = 0, // Вертикаль
		count_d = 0; // диагональ
	/*
	 * TODO: Тут поиск последовательности длины SERIES относительно точки
	 * Например, для горизонтали: от x = lower_boundary(p.x) до x = upper_boundary(p.x)
	 */
	if (count_h >= SERIES || count_v >= SERIES || count_d >= SERIES)
		emit Winner(currentPlayer);
}
