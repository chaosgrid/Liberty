#include "Movie.h"

extern "C" __declspec(dllexport) void Liberty() {}

namespace MediaPlayer
{
	void FreeMovie() {}
	long PlayMovie(HWND windowHandle, bool unk, LPCSTR path) { return 0; }
	void SetApproach(MediaPlayer::Approach approach) {}
	void Shutdown() {}
	void Startup() {}
	void StopMovie() {}
	bool UpdateMovie() { return false; }
};
