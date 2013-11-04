/*  Vendor.h
 *
 *  Copyright (C) 2013  Jim Evins <evins@snaught.com>
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

#ifndef libglabels_Vendor_h
#define libglabels_Vendor_h


#include <QString>


namespace libglabels
{

	class Vendor
	{
	public:
		Vendor( const QString &name, const QString &url ) : mName(name), mUrl(url)
		{
		}

		inline const QString &name() const { return mName; }

		inline const QString &url() const { return mUrl; }

	private:
		QString mName;
		QString mUrl;
	};

}

#endif // libglabels_Vendor_h