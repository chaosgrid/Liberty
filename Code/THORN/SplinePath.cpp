#include <DACOM.h>
#include "SplinePath.h"
#include <Dump.h>

#define operator_new sub_6F57E9C
_extern void* __cdecl operator_new(size_t Sze);

#define operator_delete sub_6F57E26
_extern void __cdecl operator_delete(void* Block);

#include <crtdbg.h>
#define CHECK_MEM() ASSERT(_CrtCheckMemory())

// CRSplinePath_IPersistString_vtbl				dd offset _purecall     ; QueryInterface
//												dd offset _purecall     ; AddRef
//												dd offset _purecall     ; Release
//												dd offset CRSplinePath__vPersistStringA; vPersistStringA
//												dd offset CRSplinePath__vPersistStringB; vPersistStringB
//												dd offset CRSplinePath__vPersistStringC; vPersistStringC
// CRSplinePath_IMotionPath_vtbl				dd offset _purecall     ; QueryInterface
//												dd offset _purecall     ; AddRef
//												dd offset _purecall     ; Release
//												dd offset CRSplinePath__vMotionPathA; vMotionPathA
//												dd offset CRSplinePath__vMotionPathB; vMotionPathB
//												dd offset CRSplinePath__vMotionPathC; vMotionPathC
//												dd offset CRSplinePath__vMotionPathD; vMotionPathD
//												dd offset CRSplinePath__vMotionPathE; vMotionPathE
// CRSplinePath_ICRSpline_vtbl					dd offset _purecall     ; QueryInterface
//												dd offset _purecall     ; AddRef
//												dd offset _purecall     ; Release
//												dd offset CRSplinePath__vCRSplineA; vCRSplineA
//												dd offset CRSplinePath__vCRSplineB; vCRSplineB
//												dd offset CRSplinePath__vCRSplineC; vCRSplineC
//												dd offset CRSplinePath__vCRSplineD; vCRSplineD
//												dd offset CRSplinePath__vCRSplineE; vCRSplineE
//												dd offset CRSplinePath__vCRSplineF; vCRSplineF
//												dd offset CRSplinePath__vCRSplineG; vCRSplineG
//												dd offset CRSplinePath__vCRSplineH; vCRSplineH
//												dd offset CRSplinePath__vCRSplineI; vCRSplineI
//												dd offset CRSplinePath__vCRSplineJ; vCRSplineJ
//												dd offset CRSplinePath__vCRSplineK; vCRSplineK
//												dd offset CRSplinePath__vCRSplineL; vCRSplineL
//												dd offset CRSplinePath__vCRSplineN; vCRSplineN

TRAMPOLINE(DWORD, __stdcall, CRSplinePath_vPersistStringA, _sub_6F34CC0, IPersistString* _this, DWORD a2);
TRAMPOLINE(DWORD, __stdcall, CRSplinePath_vPersistStringB, _sub_6F34BC0, IPersistString* _this, DWORD a2, DWORD a3);
TRAMPOLINE(DWORD, __stdcall, CRSplinePath_vPersistStringC, _sub_6F34CA0, IPersistString* _this);
TRAMPOLINE(DWORD, __stdcall, CRSplinePath_vMotionPathA, _sub_6F34180, IMotionPath* _this, DWORD a2, DWORD a3);
TRAMPOLINE(DWORD, __stdcall, CRSplinePath_vMotionPathB, _sub_6F343F0, IMotionPath* _this, DWORD a2, DWORD a3);
TRAMPOLINE(DWORD, __stdcall, CRSplinePath_vMotionPathC, _sub_6F34420, IMotionPath* _this, DWORD a2, DWORD a3);
TRAMPOLINE(DWORD, __stdcall, CRSplinePath_vMotionPathD, _sub_6F34640, IMotionPath* _this, DWORD a2, DWORD a3);
TRAMPOLINE(DWORD, __stdcall, CRSplinePath_vMotionPathE, _sub_6F34670, IMotionPath* _this, DWORD a2);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineA, _sub_6F34950, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineB, _sub_6F346A0, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineC, _sub_6F34930, ICRSpline* _this);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineD, _sub_6F34990, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineE, _sub_6F349D0, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineF, _sub_6F347A0, ICRSpline* _this, DWORD a2);
TRAMPOLINE(DWORD, __stdcall, CRSplinePath_vCRSplineG, _sub_6F347C0, ICRSpline* _this);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineH, _sub_6F347D0, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineI, _sub_6F347E0, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineJ, _sub_6F34810, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineK, _sub_6F347F0, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineL, _sub_6F34800, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CRSplinePath_vCRSplineN, _sub_6F34820, ICRSpline* _this, DWORD a2, DWORD a3);

// CROrientationSplinePath_IPersistString_vtbl	dd offset _purecall     ; QueryInterface
//												dd offset _purecall     ; AddRef
//												dd offset _purecall     ; Release
//												dd offset CROrientationSpline__vPersistStringA; vPersistStringA
//												dd offset CROrientationSpline__vPersistStringB; vPersistStringB
//												dd offset CROrientationSpline__vPersistStringC; vPersistStringC
// CROrientationSplinePath_IMotionPath_vtbl		dd offset _purecall     ; QueryInterface
//												dd offset _purecall     ; AddRef
//												dd offset _purecall     ; Release
//												dd offset CROrientationSpline__vMotionPathA; vMotionPathA
//												dd offset CRSplinePath__vMotionPathB; vMotionPathB
//												dd offset CROrientationSpline__vMotionPathC; vMotionPathC
//												dd offset CRSplinePath__vMotionPathD; vMotionPathD
//												dd offset CRSplinePath__vMotionPathE; vMotionPathE
// CROrientationSplinePath_ICRSpline_vtbl		dd offset _purecall     ; QueryInterface
//												dd offset _purecall     ; AddRef
//												dd offset _purecall     ; Release
//												dd offset CRSplinePath__vCRSplineA; vCRSplineA
//												dd offset CROrientationSpline__vCRSplineB; vCRSplineB
//												dd offset CRSplinePath__vCRSplineC; vCRSplineC
//												dd offset CRSplinePath__vCRSplineD; vCRSplineD
//												dd offset CRSplinePath__vCRSplineE; vCRSplineE
//												dd offset CRSplinePath__vCRSplineF; vCRSplineF
//												dd offset CRSplinePath__vCRSplineG; vCRSplineG
//												dd offset CROrientationSpline__vCRSplineH; vCRSplineH
//												dd offset CROrientationSpline__vCRSplineI; vCRSplineI
//												dd offset CROrientationSpline__vCRSplineJ; vCRSplineJ
//												dd offset CROrientationSpline__vCRSplineK; vCRSplineK
//												dd offset CROrientationSpline__vCRSplineL; vCRSplineL
//												dd offset CROrientationSpline__vCRSplineN; vCRSplineN

TRAMPOLINE(DWORD, __stdcall, CROrientationSplinePath_vPersistStringA, _sub_6F356F0, IPersistString* _this, DWORD a2);
TRAMPOLINE(DWORD, __stdcall, CROrientationSplinePath_vPersistStringB, _sub_6F35580, IPersistString* _this, DWORD a2, DWORD a3);
TRAMPOLINE(DWORD, __stdcall, CROrientationSplinePath_vPersistStringC, _sub_6F356C0, IPersistString* _this);
TRAMPOLINE(DWORD, __stdcall, CROrientationSplinePath_vMotionPathA, _sub_6F354A0, IMotionPath* _this, DWORD a2, DWORD a3);
TRAMPOLINE(DWORD, __stdcall, CROrientationSplinePath_vMotionPathC, _sub_6F35530, IMotionPath* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CROrientationSplinePath_vCRSplineB, _sub_6F350D0, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CROrientationSplinePath_vCRSplineH, _sub_6F351E0, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CROrientationSplinePath_vCRSplineI, _sub_6F35220, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CROrientationSplinePath_vCRSplineJ, _sub_6F353D0, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CROrientationSplinePath_vCRSplineK, _sub_6F35270, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CROrientationSplinePath_vCRSplineL, _sub_6F352F0, ICRSpline* _this, DWORD a2, DWORD a3);
TRAMPOLINE(GENRESULT, __stdcall, CROrientationSplinePath_vCRSplineN, _sub_6F35410, ICRSpline* _this, DWORD a2, DWORD a3);

#define CLSID_CRSplinePath "CV_CRSplinePath"
struct CRSplinePath : ICRSpline, IMotionPath, IPersistString
{
	BEGIN_DACOM_MAP_INBOUND(CRSplinePath)
		DACOM_INTERFACE_ENTRY(ICRSpline)
		DACOM_INTERFACE_ENTRY2(IID_ICRSpline, ICRSpline)
		DACOM_INTERFACE_ENTRY(IMotionPath)
		DACOM_INTERFACE_ENTRY2(IID_IMotionPath, IMotionPath)
		DACOM_INTERFACE_ENTRY(IPersistString)
		DACOM_INTERFACE_ENTRY2(IID_IPersistString, IPersistString)
		END_DACOM_MAP()

	DA_HEAP_DEFINE_NEW_OPERATOR(CRSplinePath);

	void* object_ptr_unknownC;
	DWORD unknown10;
	DWORD unknown14;
	DWORD unknown18;
	DWORD unknown1C;
	DWORD unknown20;
	DWORD unknown24;
	DWORD unknown28;
	DWORD unknown2C;
	DWORD unknown30;
	DWORD unknown34;
	DWORD unknown38;
	DWORD unknown3C;
	DWORD unknown40;
	DWORD unknown44;
	DWORD unknown48;
	DWORD unknown4C;
	DWORD unknown50;
	DWORD unknown54;
	DWORD unknown58;
	DWORD unknown5C;
	DWORD unknown60;
	DWORD unknown64;
	DWORD unknown68;
	DWORD unknown6C;

	CRSplinePath();
	~CRSplinePath();
	GENRESULT init(AGGDESC* pDesc);

	// ICRSpline
	virtual GENRESULT __stdcall vCRSplineA(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineB(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineC() override;
	virtual GENRESULT __stdcall vCRSplineD(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineE(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineF(DWORD a2) override;
	virtual DWORD __stdcall vCRSplineG() override;
	virtual GENRESULT __stdcall vCRSplineH(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineI(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineJ(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineK(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineL(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineN(DWORD a2, DWORD a3) override;

	// IMotionPath
	virtual DWORD __stdcall vMotionPathA(DWORD a2, DWORD a3) override;
	virtual DWORD __stdcall vMotionPathB(DWORD a2, DWORD a3) override;
	virtual DWORD __stdcall vMotionPathC(DWORD a2, DWORD a3) override;
	virtual DWORD __stdcall vMotionPathD(DWORD a2, DWORD a3) override;
	virtual DWORD __stdcall vMotionPathE(DWORD a2) override;

	// IPersistString
	virtual DWORD __stdcall vPersistStringA(DWORD a2) override;
	virtual DWORD __stdcall vPersistStringB(DWORD a2, DWORD a3) override;
	virtual DWORD __stdcall vPersistStringC() override;
};
static_assert(sizeof(DAComponentAggregate<CRSplinePath>) == 0x80);

_extern void* __thiscall sub_6F37570(void* _this);
CRSplinePath::CRSplinePath()
{
	this->object_ptr_unknownC = 0;
	sub_6F37570(&this->unknown10);
	this->unknown3C = 0;
	this->unknown38 = 0;
	this->unknown34 = 0;
	sub_6F37570(&this->unknown40);
	this->unknown6C = 0;
	this->unknown68 = 0;
	this->unknown64 = 0;
}

_extern void __thiscall sub_6F34890(void* _this);
CRSplinePath::~CRSplinePath()
{
	CHECK_MEM();
	if (object_ptr_unknownC)
	{
		sub_6F34890(object_ptr_unknownC);
		operator_delete(object_ptr_unknownC);
		this->object_ptr_unknownC = 0;
	}
	CHECK_MEM();
}

GENRESULT CRSplinePath::init(AGGDESC* pDesc)
{
	return GR_OK;
}

GENRESULT CRSplinePath::vCRSplineA(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineA(this, a2, a3);
	return result;
}

GENRESULT CRSplinePath::vCRSplineB(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineB(this, a2, a3);
	return result;
}

GENRESULT CRSplinePath::vCRSplineC()
{
	auto result = CRSplinePath_vCRSplineC(this);
	return result;
}

GENRESULT CRSplinePath::vCRSplineD(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineD(this, a2, a3);
	return result;
}

GENRESULT CRSplinePath::vCRSplineE(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineE(this, a2, a3);
	return result;
}

GENRESULT CRSplinePath::vCRSplineF(DWORD a2)
{
	auto result = CRSplinePath_vCRSplineF(this, a2);
	return result;
}

DWORD CRSplinePath::vCRSplineG()
{
	auto result = CRSplinePath_vCRSplineG(this);
	return result;
}

GENRESULT CRSplinePath::vCRSplineH(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineH(this, a2, a3);
	return result;
}

GENRESULT CRSplinePath::vCRSplineI(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineI(this, a2, a3);
	return result;
}

GENRESULT CRSplinePath::vCRSplineJ(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineJ(this, a2, a3);
	return result;
}

GENRESULT CRSplinePath::vCRSplineK(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineK(this, a2, a3);
	return result;
}

GENRESULT CRSplinePath::vCRSplineL(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineL(this, a2, a3);
	return result;
}

GENRESULT CRSplinePath::vCRSplineN(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vCRSplineN(this, a2, a3);
	return result;
}

DWORD CRSplinePath::vMotionPathA(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vMotionPathA(this, a2, a3);
	return result;
}

DWORD CRSplinePath::vMotionPathB(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vMotionPathB(this, a2, a3);
	return result;
}

DWORD CRSplinePath::vMotionPathC(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vMotionPathC(this, a2, a3);
	return result;
}

DWORD CRSplinePath::vMotionPathD(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vMotionPathD(this, a2, a3);
	return result;
}

DWORD CRSplinePath::vMotionPathE(DWORD a2)
{
	auto result = CRSplinePath_vMotionPathE(this, a2);
	return result;
}

DWORD CRSplinePath::vPersistStringA(DWORD a2)
{
	auto result = CRSplinePath_vPersistStringA(this, a2);
	return result;
}

DWORD CRSplinePath::vPersistStringB(DWORD a2, DWORD a3)
{
	auto result = CRSplinePath_vPersistStringB(this, a2, a3);
	return result;
}

DWORD CRSplinePath::vPersistStringC()
{
	auto result = CRSplinePath_vPersistStringC(this);
	return result;
}

#define CLSID_CROrientationSplinePath "CV_CROrientationSplinePath"
struct CROrientationSplinePath : CRSplinePath
{
	BEGIN_DACOM_MAP_INBOUND(CROrientationSplinePath)
		DACOM_INTERFACE_ENTRY(ICRSpline)
		DACOM_INTERFACE_ENTRY2(IID_ICRSpline, ICRSpline)
		DACOM_INTERFACE_ENTRY(IMotionPath)
		DACOM_INTERFACE_ENTRY2(IID_IMotionPath, IMotionPath)
		DACOM_INTERFACE_ENTRY(IPersistString)
		DACOM_INTERFACE_ENTRY2(IID_IPersistString, IPersistString)
		END_DACOM_MAP()

	CROrientationSplinePath();
	~CROrientationSplinePath();
	GENRESULT init(AGGDESC* pDesc);

	// ICRSpline
	virtual GENRESULT __stdcall vCRSplineB(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineH(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineI(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineJ(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineK(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineL(DWORD a2, DWORD a3) override;
	virtual GENRESULT __stdcall vCRSplineN(DWORD a2, DWORD a3) override;

	// IMotionPath
	virtual DWORD __stdcall vMotionPathA(DWORD a2, DWORD a3) override;
	virtual DWORD __stdcall vMotionPathC(DWORD a2, DWORD a3) override;

	// IPersistString
	virtual DWORD __stdcall vPersistStringA(DWORD a2) override;
	virtual DWORD __stdcall vPersistStringB(DWORD a2, DWORD a3) override;
	virtual DWORD __stdcall vPersistStringC() override;
};
static_assert(sizeof(DAComponentAggregate<CROrientationSplinePath>) == 0x80);

CROrientationSplinePath::CROrientationSplinePath() :
	CRSplinePath()
{

}

CROrientationSplinePath::~CROrientationSplinePath()
{
	
}

GENRESULT CROrientationSplinePath::init(AGGDESC* pDesc)
{
	GENRESULT result = CRSplinePath::init(pDesc);
	return result;
}

GENRESULT CROrientationSplinePath::vCRSplineB(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vCRSplineB(this, a2, a3);
	return result;
}

GENRESULT CROrientationSplinePath::vCRSplineH(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vCRSplineH(this, a2, a3);
	return result;
}

GENRESULT CROrientationSplinePath::vCRSplineI(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vCRSplineI(this, a2, a3);
	return result;
}

GENRESULT CROrientationSplinePath::vCRSplineJ(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vCRSplineJ(this, a2, a3);
	return result;
}

GENRESULT CROrientationSplinePath::vCRSplineK(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vCRSplineK(this, a2, a3);
	return result;
}

GENRESULT CROrientationSplinePath::vCRSplineL(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vCRSplineL(this, a2, a3);
	return result;
}

GENRESULT CROrientationSplinePath::vCRSplineN(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vCRSplineN(this, a2, a3);
	return result;
}

DWORD CROrientationSplinePath::vMotionPathA(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vMotionPathA(this, a2, a3);
	return result;
}

DWORD CROrientationSplinePath::vMotionPathC(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vMotionPathC(this, a2, a3);
	return result;
}

DWORD CROrientationSplinePath::vPersistStringA(DWORD a2)
{
	auto result = CROrientationSplinePath_vPersistStringA(this, a2);
	return result;
}

DWORD CROrientationSplinePath::vPersistStringB(DWORD a2, DWORD a3)
{
	auto result = CROrientationSplinePath_vPersistStringB(this, a2, a3);
	return result;
}

DWORD CROrientationSplinePath::vPersistStringC()
{
	auto result = CROrientationSplinePath_vPersistStringC(this);
	return result;
}

template<typename SplinePath>
static void Register_SplinePath(ICOManager* DACOM, const char* pCLSID)
{
	if (IComponentFactory* pComponentFactory = new DAComponentFactory2<DAComponentAggregate<SplinePath>, AGGDESC>(pCLSID))
	{
		if (FAILED(DACOM->RegisterComponent(pComponentFactory, pCLSID, DACOM_LOW_PRIORITY + 1)))
		{
			GENERAL_ERROR(TEMPSTR("SplinePath: Unable to register %s component!\n", pCLSID));
		}
	}
	else
	{
		GENERAL_ERROR(TEMPSTR("SplinePath: Unable to create %s component factory!\n\n", pCLSID));
	}
}

extern "C"
{
	void Register_SplinePathComponents()
	{
		if (ICOManager* DACOM = DACOM_Acquire())
		{
			Register_SplinePath<CRSplinePath>(DACOM, CLSID_CRSplinePath);
			Register_SplinePath<CROrientationSplinePath>(DACOM, CLSID_CROrientationSplinePath);
		}
		else
		{
			GENERAL_ERROR("Register_SplinePathComponents: Unable to get DACOM!\n");
		}
	}
}
