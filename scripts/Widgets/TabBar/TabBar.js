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

function TabBar() {
}

TabBar.init = function(basePath) {
    var appWin = RMainWindowQt.getMainWindow();

    if (appWin.getMdiArea()) {
        appWin.getMdiArea().documentMode = true;
    }

    var tabBar = appWin.getTabBar();
    if (!isNull(tabBar)) {
        tabBar.elideMode = Qt.ElideRight;
        tabBar.tabsClosable = true;
        tabBar.usesScrollButtons = true;
        tabBar.contextMenuPolicy = Qt.NoContextMenu;
        // somewhat buggy:
        //tabBar.movable = true;

        if (RSettings.getQtVersion().startsWith("4.7.")) {
            // starting with Qt 4.8, this is no longer necessary:
            tabBar.tabCloseRequested.connect(function(tabIndex) {
                tabBar.setCurrentIndex(tabIndex);
                var closeEvent = new RCloseCurrentEvent();
                QCoreApplication.postEvent(appWin, closeEvent);
            });
        }
    }
};
