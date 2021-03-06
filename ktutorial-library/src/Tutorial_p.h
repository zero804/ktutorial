/***************************************************************************
 *   Copyright (C) 2012 by Daniel Calviño Sánchez <danxuliu@gmail.com>     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; If not, see <http://www.gnu.org/licenses/>.  *
 ***************************************************************************/

#ifndef KTUTORIAL_TUTORIAL_P_H
#define KTUTORIAL_TUTORIAL_P_H

#include <QMap>

namespace ktutorial {

class TutorialPrivate {
public:

    /**
     * The information about this Tutorial.
     */
    TutorialInformation* mTutorialInformation;

    /**
     * All the added Steps, indexed by their identifier.
     */
    QMap<QString, Step*> mSteps;

    /**
     * The step currently active, if any.
     */
    Step* mCurrentStep;

    /**
     * The steps to change to that were not activated yet.
     */
    QList<Step*> mQueuedSteps;

};

}

#endif
