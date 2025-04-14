#pragma once

#ifndef __PARAMCURVE_H__
#define __PARAMCURVE_H__

#include <DACOM.h>

#define IID_IParamCurve DACOM_MAKE_IID("IParamCurve")
struct IParamCurve : IDAComponent
{
	virtual double unknownParamCurveA(float scale) = 0;
	virtual void unknownParamCurveB(DWORD a2, float a3, float a4, DWORD a5, DWORD a6) = 0;
	virtual bool unknownParamCurveC(int, float, int, int, int) = 0;
	virtual bool unknownParamCurveD(float a2, float a3, __int64 a4) = 0;
	virtual bool unknownParamCurveE(unsigned int a2) = 0;
	virtual int unknownParamCurveF() = 0;
	virtual int unknownParamCurveG(int a2) = 0;
	virtual const char* GetName() = 0;
	virtual const char* GetDescription() = 0;
	virtual double unknownParamCurveJ(int index, int count) = 0;
	virtual void unknownParamCurveK() = 0;
};

extern "C"
{
	void Register_ParamCurveComponents();
}

#endif // __PARAMCURVE_H
