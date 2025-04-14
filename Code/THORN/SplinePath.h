#pragma once

#ifndef __SPLINEPATH_H__
#define __SPLINEPATH_H__

#include <DACOM.h>

#define IID_ICRSpline DACOM_MAKE_IID("ICRSpline")
struct ICRSpline : IDAComponent
{
	virtual GENRESULT __stdcall vCRSplineA(DWORD a2, DWORD a3) = 0;
	virtual GENRESULT __stdcall vCRSplineB(DWORD a2, DWORD a3) = 0;
	virtual GENRESULT __stdcall vCRSplineC() = 0;
	virtual GENRESULT __stdcall vCRSplineD(DWORD a2, DWORD a3) = 0;
	virtual GENRESULT __stdcall vCRSplineE(DWORD a2, DWORD a3) = 0;
	virtual GENRESULT __stdcall vCRSplineF(DWORD a2) = 0;
	virtual DWORD __stdcall vCRSplineG() = 0;
	virtual GENRESULT __stdcall vCRSplineH(DWORD a2, DWORD a3) = 0;
	virtual GENRESULT __stdcall vCRSplineI(DWORD a2, DWORD a3) = 0;
	virtual GENRESULT __stdcall vCRSplineJ(DWORD a2, DWORD a3) = 0;
	virtual GENRESULT __stdcall vCRSplineK(DWORD a2, DWORD a3) = 0;
	virtual GENRESULT __stdcall vCRSplineL(DWORD a2, DWORD a3) = 0;
	virtual GENRESULT __stdcall vCRSplineN(DWORD a2, DWORD a3) = 0;
};

#define IID_IMotionPath DACOM_MAKE_IID("IMotionPath")
struct IMotionPath : IDAComponent
{
	virtual DWORD __stdcall vMotionPathA(DWORD a2, DWORD a3) = 0;
	virtual DWORD __stdcall vMotionPathB(DWORD a2, DWORD a3) = 0;
	virtual DWORD __stdcall vMotionPathC(DWORD a2, DWORD a3) = 0;
	virtual DWORD __stdcall vMotionPathD(DWORD a2, DWORD a3) = 0;
	virtual DWORD __stdcall vMotionPathE(DWORD a2) = 0;
};

#define IID_IPersistString DACOM_MAKE_IID("IPersistString")
struct IPersistString : IDAComponent
{
	virtual DWORD __stdcall vPersistStringA(DWORD a2) = 0;
	virtual DWORD __stdcall vPersistStringB(DWORD a2, DWORD a3) = 0;
	virtual DWORD __stdcall vPersistStringC() = 0;
};

extern "C"
{
	void Register_SplinePathComponents();
}

#endif // __SPLINEPATH_H
