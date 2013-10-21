#ifndef MANGA_H
#define MANGA_H

#include <QtWidgets/QMainWindow>
#include "ui_manga.h"

class Manga : public QMainWindow
{
	Q_OBJECT

public:
	Manga(QWidget *parent = 0);
	~Manga();

private:
	Ui::MangaClass ui;
};

#endif // MANGA_H
