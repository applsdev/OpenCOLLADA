/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_JOINTFFD_H__
#define __MayaDM_JOINTFFD_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMFfd.h"
namespace MayaDM
{
class JointFfd : public Ffd
{
public:
public:
	JointFfd(FILE* file,const std::string& name,const std::string& parent=""):Ffd(file, name, parent, "jointFfd"){}
	virtual ~JointFfd(){}
	void setBaseLattice2Matrix(const matrix& b2)
	{
		if(b2 == identity) return;
		fprintf(mFile,"setAttr \".b2\" -type \"matrix\" ");
		b2.write(mFile);
		fprintf(mFile,";\n");

	}
	void setUseComponentCache(bool uc)
	{
		if(uc == true) return;
		fprintf(mFile,"setAttr \".uc\" %i;\n", uc);

	}
	void getBaseLattice2Matrix()
	{
		fprintf(mFile,"\"%s.b2\"",mName.c_str());

	}
	void getGroupIdUpperBindSkin(size_t gu_i)
	{
		fprintf(mFile,"\"%s.gu[%i]\"",mName.c_str(),gu_i);

	}
	void getGroupIdLowerBindSkin(size_t gl_i)
	{
		fprintf(mFile,"\"%s.gl[%i]\"",mName.c_str(),gl_i);

	}
	void getUpperBindSkinNode()
	{
		fprintf(mFile,"\"%s.ub\"",mName.c_str());

	}
	void getLowerBindSkinNode()
	{
		fprintf(mFile,"\"%s.lb\"",mName.c_str());

	}
	void getUseComponentCache()
	{
		fprintf(mFile,"\"%s.uc\"",mName.c_str());

	}
protected:
	JointFfd(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):Ffd(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_JOINTFFD_H__