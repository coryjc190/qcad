/**
 * Copyright (c) 2011-2013 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

#ifndef RPAINTERPATHEXPORTER_H
#define RPAINTERPATHEXPORTER_H

#include "core_global.h"

#include "RExporter.h"
#include "RPainterPath.h"

class QCADCORE_EXPORT RPainterPathExporter : public RExporter {
public:
    virtual void exportLineSegment(const RLine& line);

    virtual void exportPoint(const RPoint& point) {}
    virtual void exportArcSegment(const RArc& arc) {}
    virtual void exportTriangle(const RTriangle& triangle) {}

    RPainterPath getPainterPath();

private:
    RPainterPath path;
};

#endif
