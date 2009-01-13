/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_POLYMERGEUV_H__
#define __MayaDM_POLYMERGEUV_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMPolyModifierUV.h"
namespace MayaDM
{
class PolyMergeUV : public PolyModifierUV
{
public:
public:
	PolyMergeUV(FILE* file,const std::string& name,const std::string& parent=""):PolyModifierUV(file, name, parent, "polyMergeUV"){}
	virtual ~PolyMergeUV(){}
	void setDistance(float d)
	{
		if(d == 10000) return;
		fprintf(mFile,"setAttr \".d\" %f;\n", d);

	}
	void getDistance()
	{
		fprintf(mFile,"\"%s.d\"",mName.c_str());

	}
protected:
	PolyMergeUV(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):PolyModifierUV(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_POLYMERGEUV_H__