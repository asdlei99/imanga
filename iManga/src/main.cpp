#include "manga.h"
#include <QtWidgets/QApplication>
#include <direct.h>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Manga w;
	char buffer[1024];
	getcwd(buffer, 1024);
	w.show();
	return a.exec();
}
