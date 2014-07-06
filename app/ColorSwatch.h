/*  ColorSwatch.h
 *
 *  Copyright (C) 2014  Jim Evins <evins@snaught.com>
 *
 *  This file is part of gLabels-qt.
 *
 *  gLabels-qt is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  gLabels-qt is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with gLabels-qt.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef glabels_ColorSwatch_h
#define glabels_ColorSwatch_h

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QColor>


namespace glabels
{

	///
	/// Simple Preview Widget
	///
	class ColorSwatch : public QGraphicsView
	{

		/////////////////////////////////
		// Life Cycle
		/////////////////////////////////
	public:
		ColorSwatch( int w, int h, QColor& color, QWidget *parent = 0 );


		/////////////////////////////////
		// Properties
		/////////////////////////////////
	public:
		void setColor( QColor& color );


		/////////////////////////////////
		// Private Data
		/////////////////////////////////
	private:
		int                mW;
		int                mH;
		QColor             mColor;

		QGraphicsScene*    mScene;
		QGraphicsRectItem* mSwatchItem;

	};

}

#endif // glabels_ColorSwatch_h
