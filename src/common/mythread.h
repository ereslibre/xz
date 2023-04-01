///////////////////////////////////////////////////////////////////////////////
//
/// \file       mythread.h
/// \brief      Some threading related helper macros and functions
//
//  Author:     Lasse Collin
//
//  This file has been put into the public domain.
//  You can do whatever you want with this file.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef MYTHREAD_H
#define MYTHREAD_H

#include "sysdefs.h"

//////////////////
// No threading //
//////////////////

// Calls the given function once. This isn't thread safe.
#define mythread_once(func) func()

#endif
