#ifndef CLI_H
#define CLI_H

#include <QObject>

/*
 * Класс консольного интерфейса для доступа к платформе
 * Аналогично будет запиливаться веб, но пока пусть будет CLI
 */
class CLI : public QObject
{
	Q_OBJECT
public:
	explicit CLI(QObject *parent = 0);

signals:

public slots:

};

#endif // CLI_H
