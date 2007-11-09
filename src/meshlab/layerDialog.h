/****************************************************************************
* MeshLab                                                           o o     *
* An extendible mesh processor                                    o     o   *
*                                                                _   O  _   *
* Copyright(C) 2005, 2006                                          \/)\/    *
* Visual Computing Lab                                            /\/|      *
* ISTI - Italian National Research Council                           |      *
*                                                                    \      *
* All rights reserved.                                                      *
*                                                                           *
* This program is free software; you can redistribute it and/or modify      *
* it under the terms of the GNU General Public License as published by      *
* the Free Software Foundation; either version 2 of the License, or         *
* (at your option) any later version.                                       *
*                                                                           *
* This program is distributed in the hope that it will be useful,           *
* but WITHOUT ANY WARRANTY; without even the implied warranty of            *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
* GNU General Public License (http://www.gnu.org/licenses/gpl.txt)          *
* for more details.                                                         *
*                                                                           *
****************************************************************************/
/****************************************************************************
History

$Log: stdpardialog.cpp,v $
****************************************************************************/
#ifndef LAYER_DIALOG_H
#define LAYER_DIALOG_H
#include <QtGui>

class GLArea;
class MainWindow;
class QTableWidget;

#include "ui_layerDialog.h"
#include <QDialog>

class LayerDialog : public QDialog
{
	Q_OBJECT
	public:
     LayerDialog(QWidget *parent = 0);
     void updateTable();

	public slots:
		void toggleStatus(int row, int column);
    void showEvent ( QShowEvent * event );
	private:
		Ui::layerDialog ui;
		GLArea *gla; 
		MainWindow *mw; 
};


#endif
