/*
	Generated by KBEngine!
	Please do not modify this file!
	
	tools = kbcmd
*/

#pragma once

#include "KBECommon.h"
#include "EntityCall.h"
#include "KBETypes.h"
#include "CustomDataTypes.h"


// defined in */scripts/entity_defs/TestNoBase.def

class KBENGINEPLUGINS_API EntityBaseEntityCall_TestNoBaseBase : public EntityCall
{
public:
	uint16 entityComponentPropertyID;

	EntityBaseEntityCall_TestNoBaseBase(uint16 ecpID, int32 eid);

	virtual ~EntityBaseEntityCall_TestNoBaseBase();
};

class KBENGINEPLUGINS_API EntityCellEntityCall_TestNoBaseBase : public EntityCall
{
public:
	uint16 entityComponentPropertyID;

	EntityCellEntityCall_TestNoBaseBase(uint16 ecpID, int32 eid);

	virtual ~EntityCellEntityCall_TestNoBaseBase();
	void hello(int32 arg1);
};
