#ifndef CLI_H
#define CLI_H

#include <QObject>
#include "xoaicup.h"

/*
 * Класс консольного интерфейса для доступа к платформе
 * Аналогично будет запиливаться веб, но пока пусть будет CLI
 */
class CLI : public QObject
{
	Q_OBJECT
public:
	explicit CLI(XOAICup *parent);

signals:

public slots:

};

#endif // CLI_H
