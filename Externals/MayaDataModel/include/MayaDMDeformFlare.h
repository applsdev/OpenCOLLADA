/*
    Copyright (c) 2008 NetAllied Systems GmbH

    This file is part of MayaDataModel.

    Licensed under the MIT Open Source License,
    for details please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/
#ifndef __MayaDM_DEFORMFLARE_H__
#define __MayaDM_DEFORMFLARE_H__
#include "MayaDMTypes.h"
#include "MayaDMConnectables.h"
#include "MayaDMDeformFunc.h"
namespace MayaDM
{
class DeformFlare : public DeformFunc
{
public:
public:
	DeformFlare(FILE* file,const std::string& name,const std::string& parent=""):DeformFunc(file, name, parent, "deformFlare"){}
	virtual ~DeformFlare(){}
	void setLowBound(double lb)
	{
		if(lb == -1.0) return;
		fprintf(mFile,"setAttr \".lb\" %f;\n", lb);

	}
	void setHighBound(double hb)
	{
		if(hb == 1.0) return;
		fprintf(mFile,"setAttr \".hb\" %f;\n", hb);

	}
	void setStartFlareX(double sfx)
	{
		if(sfx == 1.0) return;
		fprintf(mFile,"setAttr \".sfx\" %f;\n", sfx);

	}
	void setStartFlareZ(double sfz)
	{
		if(sfz == 1.0) return;
		fprintf(mFile,"setAttr \".sfz\" %f;\n", sfz);

	}
	void setEndFlareX(double efx)
	{
		if(efx == 1.0) return;
		fprintf(mFile,"setAttr \".efx\" %f;\n", efx);

	}
	void setEndFlareZ(double efz)
	{
		if(efz == 1.0) return;
		fprintf(mFile,"setAttr \".efz\" %f;\n", efz);

	}
	void setCurve(double crv)
	{
		if(crv == 0.0) return;
		fprintf(mFile,"setAttr \".crv\" %f;\n", crv);

	}
	void getLowBound()
	{
		fprintf(mFile,"\"%s.lb\"",mName.c_str());

	}
	void getHighBound()
	{
		fprintf(mFile,"\"%s.hb\"",mName.c_str());

	}
	void getStartFlareX()
	{
		fprintf(mFile,"\"%s.sfx\"",mName.c_str());

	}
	void getStartFlareZ()
	{
		fprintf(mFile,"\"%s.sfz\"",mName.c_str());

	}
	void getEndFlareX()
	{
		fprintf(mFile,"\"%s.efx\"",mName.c_str());

	}
	void getEndFlareZ()
	{
		fprintf(mFile,"\"%s.efz\"",mName.c_str());

	}
	void getCurve()
	{
		fprintf(mFile,"\"%s.crv\"",mName.c_str());

	}
protected:
	DeformFlare(FILE* file,const std::string& name,const std::string& parent,const std::string& nodeType):DeformFunc(file, name, parent, nodeType) {}

};
}//namespace MayaDM
#endif//__MayaDM_DEFORMFLARE_H__