#include "FreeLancer-PCH.h"

PROC_DECLARE(0x583120, internal_583120, public_583120);
extern "C" NAKED register_t __cdecl internal_583120()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x3C]
        UNREACHABLE_TRAP(0x583120)
    }
}
