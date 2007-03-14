/* -*- mode:c++ -*- ********************************************************
 * file:        TestStateSub.h
 *
 * author:      Andreas Koepke
 *
 * copyright:   (C) 2004 Telecommunication Networks Group (TKN) at
 *              Technische Universitaet Berlin, Germany.
 *
 *              This program is free software; you can redistribute it 
 *              and/or modify it under the terms of the GNU General Public 
 *              License as published by the Free Software Foundation; either
 *              version 2 of the License, or (at your option) any later 
 *              version.
 *              For further information see file COPYING 
 *              in the top level directory
 ***************************************************************************
 * part of:     testsuite of framework
 * description: vsiualizes state read from blackboard
 ***************************************************************************
 * changelog:   $Revision: 1.2 $
 *              last modified:   $Date: 2004/02/09 13:59:33 $
 *              by:              $Author: omfw-willkomm $
 **************************************************************************/


#ifndef TESTSTATESUB_H
#define TESTSTATESUB_H

#include <BasicModule.h>

class TestStateSub : public BasicModule
{
private:
    int catTestParam;
    cModule *host;

public:
    Module_Class_Members(TestStateSub, BasicModule, 0);
    virtual void initialize(int stage);
    virtual void handleMessage( cMessage* );
    virtual void receiveBBItem(int category, const BBItem *details, int scopeModuleId);
};

#endif