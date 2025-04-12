#include <Windows.h>
#include <PCH.h>

#include <Windows.h>
#include <PCH.h>
#include <DACOM.h>
#include <new>

extern "C" __declspec(dllexport) void Liberty() {}

_naked BOOL __stdcall EntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	__DEBUG_ASM(6EF505E);
	// chunk 0x6EF505E _sub_6EF505E
	asm("loc_6EF505E: push %ebp;");
	asm("loc_6EF505F: mov %esp,%ebp;");
	asm("loc_6EF5061: push %ebx;");
	asm("loc_6EF5062: mov 8(%ebp),%ebx;");
	asm("loc_6EF5065: push %esi;");
	asm("loc_6EF5066: mov 0xC(%ebp),%esi;");
	asm("loc_6EF5069: push %edi;");
	asm("loc_6EF506A: mov 0x10(%ebp),%edi;");
	asm("loc_6EF506D: test %esi,%esi;");
	asm("loc_6EF506F: jne loc_6EF507A;");
	asm("loc_6EF5071: cmpl $0,_data_6F010B0;");
	asm("loc_6EF5078: jmp loc_6EF50A0;");
	asm("loc_6EF507A: cmp $1,%esi;");
	asm("loc_6EF507D: je loc_6EF5084;");
	asm("loc_6EF507F: cmp $2,%esi;");
	asm("loc_6EF5082: jne loc_6EF50A6;");
	asm("loc_6EF5084: mov _data_6F0267C,%eax;");
	asm("loc_6EF5089: test %eax,%eax;");
	asm("loc_6EF508B: je loc_6EF5096;");
	asm("loc_6EF508D: push %edi;");
	asm("loc_6EF508E: push %esi;");
	asm("loc_6EF508F: push %ebx;");
	asm("loc_6EF5090: call *%eax;");
	asm("loc_6EF5092: test %eax,%eax;");
	asm("loc_6EF5094: je loc_6EF50A2;");
	asm("loc_6EF5096: push %edi;");
	asm("loc_6EF5097: push %esi;");
	asm("loc_6EF5098: push %ebx;");
	asm("loc_6EF5099: call _sub_6EF4FA6;");
	asm("loc_6EF509E: test %eax,%eax;");
	asm("loc_6EF50A0: jne loc_6EF50A6;");
	asm("loc_6EF50A2: xor %eax,%eax;");
	asm("loc_6EF50A4: jmp loc_6EF50F4;");

	// Nuke the call to DLL main, it has been replaced
	//asm("loc_6EF50A6: push %edi;");
	//asm("loc_6EF50A7: push %esi;");
	//asm("loc_6EF50A8: push %ebx;");
	//asm("loc_6EF50A9: call _sub_6EF3890;");
	asm("loc_6EF50A6: nop;");
	asm("loc_6EF50A7: nop;");
	asm("loc_6EF50A8: nop;");
	asm("loc_6EF50A9: nop;");

	asm("loc_6EF50AE: cmp $1,%esi;");
	asm("loc_6EF50B1: mov %eax,0xC(%ebp);");
	asm("loc_6EF50B4: jne loc_6EF50C2;");
	asm("loc_6EF50B6: test %eax,%eax;");
	asm("loc_6EF50B8: jne loc_6EF50F1;");
	asm("loc_6EF50BA: push %edi;");
	asm("loc_6EF50BB: push %eax;");
	asm("loc_6EF50BC: push %ebx;");
	asm("loc_6EF50BD: call _sub_6EF4FA6;");
	asm("loc_6EF50C2: test %esi,%esi;");
	asm("loc_6EF50C4: je loc_6EF50CB;");
	asm("loc_6EF50C6: cmp $3,%esi;");
	asm("loc_6EF50C9: jne loc_6EF50F1;");
	asm("loc_6EF50CB: push %edi;");
	asm("loc_6EF50CC: push %esi;");
	asm("loc_6EF50CD: push %ebx;");
	asm("loc_6EF50CE: call _sub_6EF4FA6;");
	asm("loc_6EF50D3: test %eax,%eax;");
	asm("loc_6EF50D5: jne loc_6EF50DA;");
	asm("loc_6EF50D7: and %eax,0xC(%ebp);");
	asm("loc_6EF50DA: cmpl $0,0xC(%ebp);");
	asm("loc_6EF50DE: je loc_6EF50F1;");
	asm("loc_6EF50E0: mov _data_6F0267C,%eax;");
	asm("loc_6EF50E5: test %eax,%eax;");
	asm("loc_6EF50E7: je loc_6EF50F1;");
	asm("loc_6EF50E9: push %edi;");
	asm("loc_6EF50EA: push %esi;");
	asm("loc_6EF50EB: push %ebx;");
	asm("loc_6EF50EC: call *%eax;");
	asm("loc_6EF50EE: mov %eax,0xC(%ebp);");
	asm("loc_6EF50F1: mov 0xC(%ebp),%eax;");
	asm("loc_6EF50F4: pop %edi;");
	asm("loc_6EF50F5: pop %esi;");
	asm("loc_6EF50F6: pop %ebx;");
	asm("loc_6EF50F7: pop %ebp;");
	asm("loc_6EF50F8: ret $0xC;");
	asm("int3;"); // unreachable
}

#define DAComponentFactory_SoundStreamer_vtbl off_6EFC1E4



extern "C"
{
	void sub_6EF3B80(void);
	void sub_6EF3DC0(void);
	void sub_6EF3BC0(void);
	void sub_6EF3BF0(void);
	void sub_6EF3E70(void);
	void sub_6EF3E80(void);
	void sub_6EF3E90(void);
	void sub_6EF2DB0(void);
	void sub_6EF3E10(void);
	void sub_6EF3E20(void);
	void sub_6EF3E30(void);
	void sub_6EF2E00(void);
	void sub_6EF3060(void);
	void sub_6EF3290(void);
	void sub_6EF33F0(void);
	void sub_6EF3420(void);
	void sub_6EF3470(void);
	void sub_6EF34A0(void);
	void sub_6EF3530(void);
	void sub_6EF3940(void);
	void sub_6EF3950(void);
	void sub_6EF34D0(void);
	void sub_6EF3500(void);
	void sub_6EF3D00(void);
	void sub_6EF3DC0(void);
	void sub_6EF3DD0(void);

	void* DAComponentFactory_SoundStreamer_vtbl[] =
	{
		reinterpret_cast<void*>(&sub_6EF3B80),
		reinterpret_cast<void*>(&sub_6EF3DC0),
		reinterpret_cast<void*>(&sub_6EF3BC0),
		reinterpret_cast<void*>(&sub_6EF3BF0),
	};

	void* off_6EFC1F4[] =
	{
		reinterpret_cast<void*>(&sub_6EF3E70),
		reinterpret_cast<void*>(&sub_6EF3E80),
		reinterpret_cast<void*>(&sub_6EF3E90),
		reinterpret_cast<void*>(&sub_6EF2DB0),
	};

	void* off_6EFC204[] =
	{
	reinterpret_cast<void*>(&sub_6EF3E10),
	reinterpret_cast<void*>(&sub_6EF3E20),
	reinterpret_cast<void*>(&sub_6EF3E30),
	reinterpret_cast<void*>(&sub_6EF2E00),
	reinterpret_cast<void*>(&sub_6EF3060),
	reinterpret_cast<void*>(&sub_6EF3290),
	reinterpret_cast<void*>(&sub_6EF33F0),
	reinterpret_cast<void*>(&sub_6EF3420),
	reinterpret_cast<void*>(&sub_6EF3470),
	reinterpret_cast<void*>(&sub_6EF34A0),
	reinterpret_cast<void*>(&sub_6EF3530),
	reinterpret_cast<void*>(&sub_6EF3940),
	reinterpret_cast<void*>(&sub_6EF3950),
	reinterpret_cast<void*>(&sub_6EF34D0),
	reinterpret_cast<void*>(&sub_6EF3500),
	};

	void* off_6EFC240[] =
	{
	reinterpret_cast<void*>(&sub_6EF3D00),
	reinterpret_cast<void*>(&sub_6EF3DC0),
	reinterpret_cast<void*>(&sub_6EF3DD0),
	};

	extern "C" void* data_6F010A4;
	extern "C" void* __thiscall sub_6EF2BB0(void*);
	extern "C" void* __cdecl sub_6EF4A65(size_t); // void *__cdecl operator new(size_t Size)
}

#define __cppobj
#define __hidden

struct __cppobj _IDAComponent;

struct /*VFT*/ IDAComponent_vtbl
{
	GENRESULT(__stdcall* QueryInterface)(void* __hidden _this, const C8* interface_name, void** instance);
	U32(__stdcall* AddRef)(void* __hidden _this);
	U32(__stdcall* Release)(void* __hidden _this);
};

struct __cppobj _IDAComponent
{
	IDAComponent_vtbl* __vftable;
};

struct __cppobj _IComponentFactory : _IDAComponent
{
};

struct __cppobj _DAComponentFactoryBase : _IComponentFactory
{
	U32 ref_count;
	const char* className;
};

struct __cppobj _DAComponentFactory_SoundStreamer : _DAComponentFactoryBase
{
};


struct ISoundStreamer
{

};

struct ISoundStreamer2
{

};







typedef struct Streamer* HSTREAM;

struct STREAMERDESC
{
	U32 size;
	struct IDirectSound* lpDSound;
	HWND hMainWindow;
	UINT uMsg;
	SINGLE readBufferTime;		// in seconds, 0 = default setting (4.0 is a reasonable value)
	SINGLE soundBufferTime;		// in seconds, 0 = default setting (0.25 is a reasonable value)

	STREAMERDESC(void)
	{
		memset(this, 0, sizeof(*this));
		size = sizeof(*this);
	}
};

#define STRMFL_PLAY			0x00000001			// start stream once opened
#define STRMFL_LOOPING		0x00000002			// loop the entire stream

#define IID_IStreamer DACOM_MAKE_IID("IStreamer")
#define IID_IStreamer2 DACOM_MAKE_IID("IStreamer2")

struct DACOM_NO_VTABLE IStreamer : IDAComponent
{
	enum STATUS
	{
		INVALID = 0,
		PLAYING,
		STOPPED,
		EOFREACHED,
		COMPLETED,
		INITSUCCESS
	};

	DACOM_DEFMETHOD_(BOOL32, Init) (STREAMERDESC* desc) = 0;
	DACOM_DEFMETHOD_(HSTREAM, Open) (const char* filename, struct IFileSystem* parent, DWORD flags = STRMFL_PLAY) = 0;
	DACOM_DEFMETHOD_(BOOL32, CloseHandle) (HSTREAM hStream) = 0;
	DACOM_DEFMETHOD_(BOOL32, Stop) (HSTREAM hStream) = 0;
	DACOM_DEFMETHOD_(BOOL32, Restart) (HSTREAM hStream) = 0;
	DACOM_DEFMETHOD_(BOOL32, SetVolume) (HSTREAM hStream, S32 volume) = 0;
	DACOM_DEFMETHOD_(BOOL32, GetVolume) (HSTREAM hStream, S32* volume) const = 0;
	DACOM_DEFMETHOD_(STATUS, GetStatus) (HSTREAM hStream) const = 0;
};

struct DACOM_NO_VTABLE IStreamer2 : IStreamer
{
	DACOM_DEFMETHOD_(DWORD, GetSomethingA) () = 0;
	DACOM_DEFMETHOD_(DWORD, GetSomethingB) () = 0;
	DACOM_DEFMETHOD_(BOOL32, SetSomethingC) (HSTREAM hStream, DWORD arg) = 0;
	DACOM_DEFMETHOD_(BOOL32, GetSomethingC) (HSTREAM hStream, DWORD* arg) = 0;
};

// $TODO I think this is called Music
#define CLSID_SoundStreamer "SoundStreamer"
struct DACOM_NO_VTABLE SoundStreamer : IStreamer2, IAggregateComponent
{
	BEGIN_DACOM_MAP_INBOUND(SoundStreamer)
		DACOM_INTERFACE_ENTRY(IStreamer)
		DACOM_INTERFACE_ENTRY(IStreamer2)
		DACOM_INTERFACE_ENTRY(IAggregateComponent)
		DACOM_INTERFACE_ENTRY2(IID_IStreamer, IStreamer)
		DACOM_INTERFACE_ENTRY2(IID_IStreamer2, IStreamer2)
		DACOM_INTERFACE_ENTRY2(IID_IAggregateComponent, IAggregateComponent)
		END_DACOM_MAP()

	SoundStreamer();
	~SoundStreamer();

	DACOM_DEFMETHOD_(BOOL32, Init) (STREAMERDESC* desc) override;
	DACOM_DEFMETHOD_(HSTREAM, Open) (const char* filename, struct IFileSystem* parent, DWORD flags = STRMFL_PLAY) override;
	DACOM_DEFMETHOD_(BOOL32, CloseHandle) (HSTREAM hStream) override;
	DACOM_DEFMETHOD_(BOOL32, Stop) (HSTREAM hStream) override;
	DACOM_DEFMETHOD_(BOOL32, Restart) (HSTREAM hStream) override;
	DACOM_DEFMETHOD_(BOOL32, SetVolume) (HSTREAM hStream, S32 volume) override;
	DACOM_DEFMETHOD_(BOOL32, GetVolume) (HSTREAM hStream, S32* volume) const override;
	DACOM_DEFMETHOD_(STATUS, GetStatus) (HSTREAM hStream) const override;

	DACOM_DEFMETHOD_(DWORD, GetSomethingA) () override;
	DACOM_DEFMETHOD_(DWORD, GetSomethingB) () override;
	DACOM_DEFMETHOD_(BOOL32, SetSomethingC) (HSTREAM hStream, DWORD arg) override;
	DACOM_DEFMETHOD_(BOOL32, GetSomethingC) (HSTREAM hStream, DWORD* arg) override;

	DACOM_DEFMETHOD(Initialize) (void);

	GENRESULT init(AGGDESC* lpDesc);
};

GENRESULT SoundStreamer::Initialize(void)
{
	return GR_OK;
}

BOOL32 SoundStreamer::Init(STREAMERDESC* desc)
{
	return TRUE;
}

HSTREAM SoundStreamer::Open(const char* filename, struct IFileSystem* parent, DWORD flags)
{
	GENERAL_NOTICE(TEMPSTR("SoundStreamer::Open not implemented. '%s'", filename));
	return NULL;
}

BOOL32 SoundStreamer::CloseHandle(HSTREAM hStream)
{
	NOT_IMPLEMENTED;
}

BOOL32 SoundStreamer::Stop(HSTREAM hStream)
{
	NOT_IMPLEMENTED;
}

BOOL32 SoundStreamer::Restart(HSTREAM hStream)
{
	NOT_IMPLEMENTED;
}

BOOL32 SoundStreamer::SetVolume(HSTREAM hStream, S32 volume)
{
	NOT_IMPLEMENTED;
}

BOOL32 SoundStreamer::GetVolume(HSTREAM hStream, S32* volume) const
{
	NOT_IMPLEMENTED;
}

SoundStreamer::STATUS SoundStreamer::GetStatus(HSTREAM hStream) const
{
	NOT_IMPLEMENTED;
}

DWORD SoundStreamer::GetSomethingA()
{
	NOT_IMPLEMENTED;
}

DWORD SoundStreamer::GetSomethingB()
{
	NOT_IMPLEMENTED;
}

BOOL32 SoundStreamer::SetSomethingC(HSTREAM hStream, DWORD arg)
{
	NOT_IMPLEMENTED;
}

BOOL32 SoundStreamer::GetSomethingC(HSTREAM hStream, DWORD* arg)
{
	NOT_IMPLEMENTED;
}

SoundStreamer::SoundStreamer()
{

}

SoundStreamer::~SoundStreamer()
{
	NOT_IMPLEMENTED;
}

GENRESULT SoundStreamer::init(AGGDESC* lpDesc)
{
	return GR_OK;
}

IComponentFactory* CreateSoundStreamerFactory(void)
{
	return new DAComponentFactory2<DAComponentAggregate<SoundStreamer>, AGGDESC>(CLSID_SoundStreamer);
}

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	BOOL Result = EntryPoint(hinstDLL, fdwReason, lpvReserved);
	if (fdwReason)
	{
		if (fdwReason == 1)
		{
			if (IComponentFactory* lpSoundStreamer = CreateSoundStreamerFactory())
			{
				ICOManager* DACOM = DACOM_Acquire();
				DACOM->RegisterComponent(lpSoundStreamer, CLSID_SoundStreamer, DACOM_LOW_PRIORITY);
				lpSoundStreamer->Release();
				return 1;
			}
		}
	}
	else if (data_6F010A4)
	{
		sub_6EF2BB0(data_6F010A4);
		data_6F010A4 = 0;
	}
	return Result;
	return 1;
}
