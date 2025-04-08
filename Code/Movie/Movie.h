#pragma once

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

namespace MediaPlayer
{
	enum Approach 
	{
		Default
	};

	MOVIE_DEC void FreeMovie();
	MOVIE_DEC long PlayMovie(HWND windowHandle, bool unk, LPCSTR path);
	MOVIE_DEC void SetApproach(MediaPlayer::Approach approach);
	MOVIE_DEC void Shutdown();
	MOVIE_DEC void Startup();
	MOVIE_DEC void StopMovie();
	MOVIE_DEC bool UpdateMovie();
};
