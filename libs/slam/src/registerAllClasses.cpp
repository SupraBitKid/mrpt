/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2015, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#include "slam-precomp.h"   // Precompiled headers

#define MRPT_NO_WARN_BIG_HDR
#include <mrpt/slam.h>

#include <mrpt/utils/CStartUpClassesRegister.h>

using namespace mrpt::utils;
using namespace mrpt::math;
using namespace mrpt::slam;
using namespace mrpt::maps;
using namespace mrpt::poses;
using namespace mrpt::opengl;


void registerAllClasses_mrpt_core();

CStartUpClassesRegister  mrpt_slam_class_reg(&registerAllClasses_mrpt_core);

/*---------------------------------------------------------------
					registerAllClasses_mrpt_core
  ---------------------------------------------------------------*/
void registerAllClasses_mrpt_core()
{
//   Hack to enable compatibility with an older name of this class:
	registerClass( CLASS_ID( CMultiMetricMap ) );
	registerClassCustomName( "CHybridMetricMap", CLASS_ID( CMultiMetricMap ) );

	registerClass( CLASS_ID( CIncrementalMapPartitioner ) );
	registerClass( CLASS_ID( CMultiMetricMapPDF ) );


}

