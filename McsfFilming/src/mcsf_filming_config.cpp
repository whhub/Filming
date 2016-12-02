//////////////////////////////////////////////////////////////////////////
/// 
///  Copyright, (c) Shanghai United Imaging healthcare Inc., 2011
///  All rights reserved.
///
///  \author  Mu PengXuan  pengxun.mu@united-imaging.com
///
///  \file    mcsf_filming_config.cpp
///  \brief   global macro and variable define
///
///  \version 1.0
///  \date    Oct. 25, 2011
///  
//////////////////////////////////////////////////////////////////////////

#include "mcsf_filming_config.h"

MCSF_FILMING_BEGIN_NAMESPACE

    //McsfFilmingLogger gFilmingLogger(MCSF_FILMING_LOGGER_NAME, MCSF_FILMING_LOGGER_SOURCE);

#ifdef  DEVELOP_DEBUG_MODE
OFLogger gPrintScuLogger = OFLog::getLogger(EMPTY_STRING.c_str());
#endif//DEVELOP_DEBUG_MODE

MCSF_FILMING_END_NAMESPACE

