#ifndef XOAICUP_H
#define XOAICUP_H

#include <QObject>
#include <stdexcept>
#include <array>

#define M_SIZE 15 // размер поля
#define SERIES 5 // серия для победы

/*
 * Собственно класс платформы
 */
class XOAICup : public QObject
{
	Q_OBJECT

	enum Player_t { // Игрок
		NONE = 0,
		TIC = 1,
		TOE = 2,
		END = TOE // для упрощения итерации
	};
	struct Point { // Точка
		uint8_t x, y;
	};

public:
	explicit XOAICup(QObject *parent = 0);

signals:
	void Winner(Player_t);

public slots:
	void nextOne();

private:
	std::array<std::array<Player_t, M_SIZE>, M_SIZE> field; // поле
	Player_t currentPlayer; // Тот игрок, чей ход будет следующим
	void checkMatrix(Point p); // Проверка матрицы на победителя из текущей позиции
};

#endif // XOAICUP_H
