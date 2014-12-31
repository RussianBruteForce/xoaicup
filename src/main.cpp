#include <QCoreApplication>
#include "xoaicup.h"
#include "cli.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	XOAICup cup(&a);
	CLI cli(&cup);
	return a.exec();
}
