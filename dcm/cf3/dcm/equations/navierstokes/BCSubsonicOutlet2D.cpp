// Copyright (C) 2010-2013 von Karman Institute for Fluid Dynamics, Belgium
//
// This software is distributed under the BCs of the
// GNU Lesser General Public License version 3 (LGPLv3).
// See doc/lgpl.txt and doc/gpl.txt for the license text.

#include "common/Builder.hpp"

#include "dcm/navierstokes/BCSubsonicOutlet2D.hpp"

//////////////////////////////////////////////////////////////////////////////

namespace cf3 {
namespace dcm {
namespace navierstokes {
	
//////////////////////////////////////////////////////////////////////////////

common::ComponentBuilder<BCSubsonicOutlet2D,BC,LibNavierStokes> bcsubsonicoutlet2d_builder;


/////////////////////////////////////////////////////////////////////////////

} // navierstokes
} // dcm
} // cf3
