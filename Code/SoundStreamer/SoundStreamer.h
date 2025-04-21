#pragma once

#ifndef __SOUNDSTREAMER_H__
#define __SOUNDSTREAMER_H__

#include "Streamer.h"

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

	struct IDirectSound* lpDSound;
	HWND hMainWindow;
	UINT uMsg;
	DWORD unknown14;
	float SoundBufferTime;
	BYTE unknown1C;
	CRITICAL_SECTION criticalSection;
	BYTE unknown38;
	void* unknown3C;
	void* unknown40;
	DWORD unknown44;
	BYTE unknown48_struct;
	DWORD unknown4C;
	DWORD unknown50;
	DWORD unknown54;
	DWORD unknown58;
	DWORD unknown5C;
	HANDLE hThread;
	DWORD threadStatus;
	HANDLE hEvent;

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

	DACOM_DEFMETHOD(Initialize) (void) override;

	GENRESULT init(AGGDESC* lpDesc);

	int main(void);
};

extern "C"
{
	SOUNDSTREAMER_DEC IComponentFactory* CreateSoundStreamerFactory(void);
	SOUNDSTREAMER_DEC void Register_SoundStreamer();
	SOUNDSTREAMER_DEC void Shutdown_SoundStreamer();
}

#endif // __SOUNDSTREAMER_H__
