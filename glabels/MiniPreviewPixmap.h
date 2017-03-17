/*  MiniPreviewPixmap.h
 *
 *  Copyright (C) 2013-2016  Jim Evins <evins@snaught.com>
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

#ifndef glabels_MiniPreviewPixmap_h
#define glabels_MiniPreviewPixmap_h


#include <QPixmap>
#include <QPainter>

#include "Point.h"


namespace glabels
{

	// Forward references
	class Template;
	class Frame;


	class MiniPreviewPixmap : public QPixmap
	{
		
	public:
		MiniPreviewPixmap();

		MiniPreviewPixmap( const Template* tmplate, int width, int height );

		
	private:
		void draw( const Template* tmplate, int width, int height );
		void drawPaper( QPainter& painter, const Template* tmplate, double scale );
		void drawLabelOutlines( QPainter& painter, const Template* tmplate, double scale );
		void drawLabelOutline( QPainter& painter, const Frame *frame, const Point& point0 );
		
	};

}


#endif // glabels_MiniPreviewPixmap_h