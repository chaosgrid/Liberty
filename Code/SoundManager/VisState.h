#pragma once
#ifndef __VISSTATE_H__
#define __VISSTATE_H__

/* ---------- constants */

typedef enum vis_state
{
	VS_UNKNOWN,
	VS_NOT_VISIBLE,
	VS_SUB_PIXEL,			// smaller than one pixel
	VS_PARTIALLY_VISIBLE,
	VS_FULLY_VISIBLE,
	VS_END = 0x7FFFFFFF
} vis_state; // the order here is important (inceasing from invisible to fully visible) -ms

#endif // __VISSTATE_H__

