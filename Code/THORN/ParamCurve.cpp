#include <DACOM.h>
#include "ParamCurve.h"
#include <Dump.h>

#define operator_new sub_6F57E9C
_extern void* __cdecl operator_new(size_t Sze);

#define operator_delete sub_6F57E26
_extern void __cdecl operator_delete(void* Block);

struct CURVEDESC : DACOMDESC
{
	DWORD unknown8;
	DWORD unknownC;
	DWORD unknown10;
};
static_assert(sizeof(CURVEDESC) == 0x14); // 20

#define ParamCurveBase_unknownParamCurveB sub_6F2F3E0
#define ParamCurveBase_unknownParamCurveC sub_6F2F4D0
#define ParamCurveBase_unknownParamCurveD sub_6F2F560
#define ParamCurveBase_unknownParamCurveE sub_6F2F700
#define ParamCurveBase_unknownParamCurveF sub_6F2F7B0
#define ParamCurveBase_unknownParamCurveG sub_6F2F7C0
#define ParamCurveBase_unknownParamCurveJ sub_6F2F810
#define ParamCurveBase_unknownParamCurveK sub_6F2F370
extern "C" void __thiscall ParamCurveBase_unknownParamCurveB(void* _this, DWORD a2, float a3, float a4, DWORD a5, DWORD a6);
extern "C" bool __thiscall ParamCurveBase_unknownParamCurveC(void* _this, int a2, float a3, int a4, int a5, int a6);
extern "C" bool __thiscall ParamCurveBase_unknownParamCurveD(void* _this, float a2, float a3, __int64 a4);
extern "C" bool __thiscall ParamCurveBase_unknownParamCurveE(void* _this, unsigned int a2);
extern "C" int __thiscall ParamCurveBase_unknownParamCurveF(void* _this);
extern "C" int __thiscall ParamCurveBase_unknownParamCurveG(void* _this, int a2);
extern "C" int __thiscall ParamCurveBase_unknownParamCurveJ(void* _this, int a2, int a3);
extern "C" void __thiscall ParamCurveBase_unknownParamCurveK(void* _this);

#define SmoothPCurve_unknownParamCurveA sub_6F2FAB0
#define SmoothPCurve_unknownParamCurveK sub_6F2FAC0
extern "C" double __thiscall SmoothPCurve_unknownParamCurveA(void* _this, float a2);
extern "C" void __thiscall SmoothPCurve_unknownParamCurveK(void* _this);

#define CatmullRomPCurve_unknownParamCurveA sub_6F2F210
extern "C" double __thiscall CatmullRomPCurve_unknownParamCurveA(void* _this, float a2);

#define LinearPCurve_unknownParamCurveA sub_6F2F210
extern "C" double __thiscall LinearPCurve_unknownParamCurveA(void* _this, float a2);

#define ThornParamCurve_unknownParamCurveK sub_6F2F840
extern "C" void __thiscall ThornParamCurve_unknownParamCurveK(void* _this);

#define ThornLPCurve_unknownParamCurveK sub_6F2F970
extern "C" void __thiscall ThornLPCurve_unknownParamCurveK(void* _this);



struct ParamCurveBase : IParamCurve
{
	DWORD unknown4;
	void* unknown8;
	DWORD unknownC;
	DWORD unknown10;
	void* unknown14;
	void* unknown18;
	DWORD unknown1C;
	DWORD unknown20;
	DWORD unknown24;

	DA_HEAP_DEFINE_NEW_OPERATOR(ParamCurveBase);

	// .rdata:06F5A280 stru_6F5A280    dd offset _purecall     ; QueryInterface
	// .rdata:06F5A284                 dd offset _purecall     ; AddRef
	// .rdata:06F5A288                 dd offset _purecall     ; Release
	// .rdata:06F5A28C                 dd offset _purecall     ; unknownParamCurveA
	// .rdata:06F5A290                 dd offset sub_6F2F3E0   ; unknownParamCurveB
	// .rdata:06F5A294                 dd offset sub_6F2F4D0   ; unknownParamCurveC
	// .rdata:06F5A298                 dd offset sub_6F2F560   ; unknownParamCurveD
	// .rdata:06F5A29C                 dd offset sub_6F2F700   ; unknownParamCurveE
	// .rdata:06F5A2A0                 dd offset sub_6F2F7B0   ; unknownParamCurveF
	// .rdata:06F5A2A4                 dd offset sub_6F2F7C0   ; unknownParamCurveG
	// .rdata:06F5A2A8                 dd offset _purecall     ; GetName
	// .rdata:06F5A2AC                 dd offset _purecall     ; GetDescription
	// .rdata:06F5A2B0                 dd offset sub_6F2F810   ; unknownParamCurveJ
	// .rdata:06F5A2B4                 dd offset sub_6F2F370   ; unknownParamCurveK
	// .rdata:06F5A2B8                 dd offset sub_6F2EFB0   ; Dtor
	// .rdata:06F5A2BC                 dd offset sub_6F2F7F0   ; init
	// .rdata:06F5A2C0                 dd offset sub_6F2F800   ; C

	// IParamCurve
	virtual double unknownParamCurveA(float a2) = 0;
	virtual void unknownParamCurveB(DWORD a2, float a3, float a4, DWORD a5, DWORD a6) override;
	virtual bool unknownParamCurveC(int a2, float a3, int a4, int a5, int a6) override;
	virtual bool unknownParamCurveD(float a2, float a3, __int64 a4) override;
	virtual bool unknownParamCurveE(unsigned int a2) override;
	virtual int unknownParamCurveF() override;
	virtual int unknownParamCurveG(int a2) override;
	virtual const char* GetName() = 0;
	virtual const char* GetDescription() = 0;
	virtual double unknownParamCurveJ(int index, int count) override;
	virtual void unknownParamCurveK() override;

	ParamCurveBase();
	virtual ~ParamCurveBase();
	virtual GENRESULT init(CURVEDESC* pDesc);
	virtual GENRESULT __stdcall UnknownB(void);
};
static_assert(sizeof(ParamCurveBase) == 0x28);
static_assert(sizeof(DAComponent<ParamCurveBase>) == 0x2C);

extern "C" ParamCurveBase* __thiscall sub_6F2EDF0(ParamCurveBase* _this);
ParamCurveBase::ParamCurveBase()
{
	debug_point;
	sub_6F2EDF0(this);
	debug_point;
}

extern "C" ParamCurveBase* __thiscall sub_6F2F090(ParamCurveBase* _this);
ParamCurveBase::~ParamCurveBase()
{
	debug_point;
	sub_6F2F090(this);
	debug_point;
}

void ParamCurveBase::unknownParamCurveB(DWORD a2, float a3, float a4, DWORD a5, DWORD a6)
{
	ParamCurveBase_unknownParamCurveB(this, a2, a3, a4, a5, a6);
}

bool ParamCurveBase::unknownParamCurveC(int a2, float a3, int a4, int a5, int a6)
{
	auto result = ParamCurveBase_unknownParamCurveC(this, a2, a3, a4, a5, a6);
	return result;
}

bool ParamCurveBase::unknownParamCurveD(float a2, float a3, __int64 a4)
{
	bool result = ParamCurveBase_unknownParamCurveD(this, a2, a3, a4);
	return result;
}

bool ParamCurveBase::unknownParamCurveE(unsigned int a2)
{
	auto result = ParamCurveBase_unknownParamCurveE(this, a2);
	return result;
}

int ParamCurveBase::unknownParamCurveF()
{
	auto result = ParamCurveBase_unknownParamCurveF(this);
	return result;
}

int ParamCurveBase::unknownParamCurveG(int a2)
{
	auto result = ParamCurveBase_unknownParamCurveG(this, a2);
	return result;
}

double ParamCurveBase::unknownParamCurveJ(int index, int count)
{
	int rel_index = index % count;
	float scale = static_cast<float>(rel_index) / static_cast<float>(count);
	double result = unknownParamCurveA(scale);
	return result;
}

void ParamCurveBase::unknownParamCurveK()
{
	ParamCurveBase_unknownParamCurveK(this);
}

GENRESULT ParamCurveBase::init(CURVEDESC* pDesc)
{
	return GR_OK;
}

GENRESULT ParamCurveBase::UnknownB(void)
{
	NOT_IMPLEMENTED; // is this even used?
	return GR_OK;
}

#define CLSID_CR_PCurve "CatmullRomPCurve"
struct CatmullRomPCurve : ParamCurveBase
{
	BEGIN_DACOM_MAP_INBOUND(CatmullRomPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	CatmullRomPCurve();

	virtual double unknownParamCurveA(float scale) override;
	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
};
static_assert(sizeof(DAComponent<CatmullRomPCurve>) == 0x2C); // 44

CatmullRomPCurve::CatmullRomPCurve() :
	ParamCurveBase()
{

}

double CatmullRomPCurve::unknownParamCurveA(float scale)
{
	auto result = CatmullRomPCurve_unknownParamCurveA(this, scale);
	return result;
}

const char* CatmullRomPCurve::GetName()
{
	return "CatmullRomPCurve";
}

const char* CatmullRomPCurve::GetDescription()
{
	return "CatmullRom";
}

#define CLSID_THORN_CR_PCurve "ThornParamCurve"
struct ThornParamCurve : CatmullRomPCurve
{
	BEGIN_DACOM_MAP_INBOUND(ThornParamCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
	virtual void unknownParamCurveK() override;
};

const char* ThornParamCurve::GetName()
{
	return "ThornParamCurve";
}

const char* ThornParamCurve::GetDescription()
{
	return "CatmullRom(non-negative)";
}

void ThornParamCurve::unknownParamCurveK()
{
	ThornParamCurve_unknownParamCurveK(this);
}

#define CLSID_LinearPCurve "LinearPCurve"
struct LinearPCurve0 : ParamCurveBase
{
	BEGIN_DACOM_MAP_INBOUND(LinearPCurve0)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	virtual double unknownParamCurveA(float scale) override;
	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
};

double LinearPCurve0::unknownParamCurveA(float scale)
{
	double result = LinearPCurve_unknownParamCurveA(this, scale);
	return result;
}

const char* LinearPCurve0::GetName()
{
	return "LinearPCurve";
}

const char* LinearPCurve0::GetDescription()
{
	return "Linear";
}

#define CLSID_ThornLPCurve "ThornLPCurve"
struct ThornLPCurve : LinearPCurve0
{
	BEGIN_DACOM_MAP_INBOUND(ThornLPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
	virtual void unknownParamCurveK() override;
};

const char* ThornLPCurve::GetName()
{
	return "ThornLPCurve";
}

const char* ThornLPCurve::GetDescription()
{
	return "Linear(non-negative)";
}

void ThornLPCurve::unknownParamCurveK()
{
	ThornLPCurve_unknownParamCurveK(this);
}

#define CLSID_Smooth_PCurve "SmoothPCurve"
struct SmoothPCurve : ParamCurveBase
{
	BEGIN_DACOM_MAP_INBOUND(SmoothPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	DWORD unknown28;
	BYTE unknown2C;
	BYTE unknown2D; // assumed unused
	BYTE unknown2E; // assumed unused
	BYTE unknown2F; // assumed unused

	void* unknown30; // pointer of primitive type
	void* unknown34;
	void* unknown38;

	SmoothPCurve();
	~SmoothPCurve();

	virtual double unknownParamCurveA(float scale) override;
	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
	virtual void unknownParamCurveK() override;
};

SmoothPCurve::SmoothPCurve() :
	ParamCurveBase()
{
	this->unknown2C = 0;
	this->unknown30 = 0;
	this->unknown34 = 0;
	this->unknown38 = 0;
	this->unknown28 = 4;
	SmoothPCurve::unknownParamCurveK();
}

SmoothPCurve::~SmoothPCurve()
{
	operator_delete(this->unknown30);
	this->unknown30 = 0;
	this->unknown34 = 0;
	this->unknown38 = 0;
}

double SmoothPCurve::unknownParamCurveA(float scale)
{
	auto result = SmoothPCurve_unknownParamCurveA(this, scale);
	return result;
}

const char* SmoothPCurve::GetName()
{
	return "SmoothPCurve";
}

const char* SmoothPCurve::GetDescription()
{
	return "Smooth";
}

void SmoothPCurve::unknownParamCurveK()
{
	SmoothPCurve_unknownParamCurveK(this);
}

#define CLSID_Step_PCurve "StepPCurve"
struct StepPCurve : SmoothPCurve
{
	BEGIN_DACOM_MAP_INBOUND(StepPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	StepPCurve();

	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
};

StepPCurve::StepPCurve() :
	SmoothPCurve()
{
	this->unknown28 = 0;
	SmoothPCurve::unknownParamCurveK();
}

const char* StepPCurve::GetName()
{
	return "StepPCurve";
}

const char* StepPCurve::GetDescription()
{
	return "Step";
}

#define CLSID_Linear_PCurve "LinearPCurve"
struct LinearPCurve : SmoothPCurve
{
	BEGIN_DACOM_MAP_INBOUND(LinearPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	LinearPCurve();

	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
};

LinearPCurve::LinearPCurve() :
	SmoothPCurve()
{
	this->unknown28 = 1;
	SmoothPCurve::unknownParamCurveK();
}

const char* LinearPCurve::GetName()
{
	return "LinearPCurve";
}

const char* LinearPCurve::GetDescription()
{
	return "Linear";
}

#define CLSID_RampUp_PCurve "RampUpPCurve"
struct RampUpPCurve : SmoothPCurve
{
	BEGIN_DACOM_MAP_INBOUND(RampUpPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	RampUpPCurve();

	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
};

RampUpPCurve::RampUpPCurve() :
	SmoothPCurve()
{
	this->unknown28 = 2;
	SmoothPCurve::unknownParamCurveK();
}

const char* RampUpPCurve::GetName()
{
	return "RampUpPCurve";
}

const char* RampUpPCurve::GetDescription()
{
	return "Ramp Up";
}

#define CLSID_RampDown_PCurve "RampDownPCurve"
struct RampDownPCurve : SmoothPCurve
{
	BEGIN_DACOM_MAP_INBOUND(RampDownPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	RampDownPCurve();

	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
};

RampDownPCurve::RampDownPCurve() :
	SmoothPCurve()
{
	this->unknown28 = 3;
	SmoothPCurve::unknownParamCurveK();
}

const char* RampDownPCurve::GetName()
{
	return "RampDownPCurve";
}

const char* RampDownPCurve::GetDescription()
{
	return "Ramp Down";
}

#define CLSID_BumpOut_PCurve "BumpOutPCurve"
struct BumpOutPCurve : SmoothPCurve
{
	BEGIN_DACOM_MAP_INBOUND(BumpOutPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	BumpOutPCurve();

	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
};

BumpOutPCurve::BumpOutPCurve() :
	SmoothPCurve()
{
	this->unknown28 = 5;
	SmoothPCurve::unknownParamCurveK();
}

const char* BumpOutPCurve::GetName()
{
	return "BumpOutPCurve";
}

const char* BumpOutPCurve::GetDescription()
{
	return "Bump Out";
}

#define CLSID_BumpIn_PCurve "BumpInPCurve"
struct BumpInPCurve : SmoothPCurve
{
	BEGIN_DACOM_MAP_INBOUND(BumpInPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	BumpInPCurve();

	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
};

BumpInPCurve::BumpInPCurve() :
	SmoothPCurve()
{
	this->unknown28 = 6;
	SmoothPCurve::unknownParamCurveK();
}

const char* BumpInPCurve::GetName()
{
	return "BumpInPCurve";
}

const char* BumpInPCurve::GetDescription()
{
	return "Bump In";
}

#define CLSID_FreeForm_PCurve "FreeFormPCurve"
struct FreeFormPCurve : SmoothPCurve
{
	BEGIN_DACOM_MAP_INBOUND(FreeFormPCurve)
		DACOM_INTERFACE_ENTRY(IParamCurve)
		DACOM_INTERFACE_ENTRY2(IID_IParamCurve, IParamCurve)
		END_DACOM_MAP()

	FreeFormPCurve();

	virtual const char* GetName() override;
	virtual const char* GetDescription() override;
};
static_assert(sizeof(DAComponent<FreeFormPCurve>) == 0x40);

FreeFormPCurve::FreeFormPCurve() :
	SmoothPCurve()
{
	this->unknown28 = 7;
	SmoothPCurve::unknownParamCurveK();
}

const char* FreeFormPCurve::GetName()
{
	return "FreeFormPCurve";
}

const char* FreeFormPCurve::GetDescription()
{
	return "Free Form";
}

template<typename ParamCurve>
static void Register_ParamCurve(ICOManager* DACOM, const char* pCLSID)
{
	if (IComponentFactory* pComponentFactory = new DAComponentFactory<DADebugComponent<ParamCurve>, CURVEDESC>(pCLSID))
	{
		if (FAILED(DACOM->RegisterComponent(pComponentFactory, pCLSID, DACOM_LOW_PRIORITY + 1)))
		{
			GENERAL_ERROR(TEMPSTR("ParamCurve: Unable to register %s component!\n", pCLSID));
		}
	}
	else
	{
		GENERAL_ERROR(TEMPSTR("ParamCurve: Unable to create %s component factory!\n\n", pCLSID));
	}
}

extern "C"
{
	void Register_ParamCurveComponents()
	{
		if (ICOManager* DACOM = DACOM_Acquire())
		{
			Register_ParamCurve<CatmullRomPCurve>(DACOM, CLSID_CR_PCurve);
			Register_ParamCurve<ThornParamCurve>(DACOM, CLSID_THORN_CR_PCurve);
			Register_ParamCurve<LinearPCurve0>(DACOM, CLSID_LinearPCurve);
			Register_ParamCurve<ThornLPCurve>(DACOM, CLSID_ThornLPCurve);
			Register_ParamCurve<SmoothPCurve>(DACOM, CLSID_Smooth_PCurve);
			Register_ParamCurve<StepPCurve>(DACOM, CLSID_Step_PCurve);
			Register_ParamCurve<LinearPCurve>(DACOM, CLSID_Linear_PCurve);
			Register_ParamCurve<RampUpPCurve>(DACOM, CLSID_RampUp_PCurve);
			Register_ParamCurve<RampDownPCurve>(DACOM, CLSID_RampDown_PCurve);
			Register_ParamCurve<BumpOutPCurve>(DACOM, CLSID_BumpOut_PCurve);
			Register_ParamCurve<BumpInPCurve>(DACOM, CLSID_BumpIn_PCurve);
			Register_ParamCurve<FreeFormPCurve>(DACOM, CLSID_FreeForm_PCurve);
		}
		else
		{
			GENERAL_ERROR("Register_ParamCurveComponents: Unable to get DACOM!\n");
		}
	}
}
