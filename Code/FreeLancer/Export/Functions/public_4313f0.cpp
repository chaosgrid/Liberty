#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4313f0, internal_4313f0, public_4313f0);
extern "C" NAKED register_t __cdecl internal_4313f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x4313f0)
    }
}
