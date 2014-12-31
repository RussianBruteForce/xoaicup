#ifndef XOAICUP_H
#define XOAICUP_H

#include <QObject>

/*
 * Собственно класс платформы
 */
class XOAICup : public QObject
{
	Q_OBJECT
public:
	explicit XOAICup(QObject *parent = 0);

signals:

public slots:

};

#endif // XOAICUP_H
