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

#ifndef RFOCUSLISTENERADAPTER_H
#define RFOCUSLISTENERADAPTER_H

#include <QMetaType>

#include "RFocusListener.h"

class RDocumentInterface;



/**
 * \brief Abstract base class for classes that are interested in the current 
 * focus.
 *
 * \ingroup core
 * \scriptable
 * \generateScriptShell
 */
class RFocusListenerAdapter : public RFocusListener {
public:
    virtual ~RFocusListenerAdapter() {}

    /**
     * Called by the document whenever the focus changed from one MDI
     * to another.
     *
     * \param di The document interface that has now the focus.
     */
    virtual void updateFocus(RDocumentInterface* di) { Q_UNUSED(di) }
};

Q_DECLARE_METATYPE(RFocusListenerAdapter*)

#endif