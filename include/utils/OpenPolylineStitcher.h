// Copyright (c) 2024 Ultimaker B.V.
// CuraEngine is released under the terms of the AGPLv3 or higher.

#ifndef UTILS_OPEN_POLYLINE_STITCHER_H
#define UTILS_OPEN_POLYLINE_STITCHER_H

#include "PolylineStitcher.h"
#include "geometry/open_polyline.h"
#include "geometry/polygon.h"
#include "geometry/shape.h"

namespace cura
{

using OpenPolylineStitcher = PolylineStitcher<LinesSet<OpenPolyline>, Shape, OpenPolyline, Point2LL>;

} // namespace cura
#endif // UTILS_OPEN_POLYLINE_STITCHER_H
