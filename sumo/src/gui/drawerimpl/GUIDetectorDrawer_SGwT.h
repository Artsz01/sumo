#ifndef GUIDetectorDrawer_SGwT_h
#define GUIDetectorDrawer_SGwT_h
//---------------------------------------------------------------------------//
//                        GUIDetectorDrawer_SGwT.h -
//  Class for drawing detectors with tooltips
//                           -------------------
//  project              : SUMO - Simulation of Urban MObility
//  begin                : Tue, 02.09.2003
//  copyright            : (C) 2003 by Daniel Krajzewicz
//  organisation         : IVF/DLR http://ivf.dlr.de
//  email                : Daniel.Krajzewicz@dlr.de
//---------------------------------------------------------------------------//

//---------------------------------------------------------------------------//
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
//---------------------------------------------------------------------------//
// $Log$
// Revision 1.7  2005/09/22 13:30:40  dkrajzew
// SECOND LARGE CODE RECHECK: converted doubles and floats to SUMOReal
//
// Revision 1.6  2005/09/15 11:05:28  dkrajzew
// LARGE CODE RECHECK
//
// Revision 1.5  2005/04/27 09:44:26  dkrajzew
// level3 warnings removed
//
// Revision 1.4  2004/07/02 08:12:12  dkrajzew
// detector drawers now also draw other additional items
//
// Revision 1.3  2004/01/26 06:39:18  dkrajzew
// visualisation of e3-detectors added; documentation added
//
// Revision 1.2  2003/09/25 08:59:28  dkrajzew
// documentation patched
//
// Revision 1.1  2003/09/23 14:28:16  dkrajzew
// possibility to visualise detectors using different geometry complexities added
//
/* =========================================================================
 * compiler pragmas
 * ======================================================================= */
#pragma warning(disable: 4786)


/* =========================================================================
 * included modules
 * ======================================================================= */
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif // HAVE_CONFIG_H

#include "GUIBaseDetectorDrawer.h"

class GUIAbstractAddGlObject;


/* =========================================================================
 * class definitions
 * ======================================================================= */
/**
 * @class GUIDetectorDrawer_SGwT
 * Derived from GUIBaseDetectorDrawer, this class implements the method that
 *  draws the detectors. For each detector two steps are performed:
 *  The tooltip information is set first. Then, the method to draw the detector
 *  in simple geometry mode is called.
 */
class GUIDetectorDrawer_SGwT
        : public GUIBaseDetectorDrawer
{
public:
    /// Constructor
    GUIDetectorDrawer_SGwT(const std::vector<GUIGlObject_AbstractAdd*> &additionals)
        : GUIBaseDetectorDrawer(additionals) { }

    /// Destructor
    ~GUIDetectorDrawer_SGwT() { }

protected:
    /// Draws the detectors
    void myDrawGLDetectors(size_t *which, size_t maxDetectors,
        SUMOReal scale);

};

/**************** DO NOT DEFINE ANYTHING AFTER THE INCLUDE *****************/

#endif

// Local Variables:
// mode:C++
// End:
