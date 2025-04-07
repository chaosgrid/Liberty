#include "Common-PCH.h"

PROC_DECLARE(0x6293200, internal_6293200, public_6293200);
extern "C" NAKED register_t __cdecl internal_6293200()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [eax+0x84]
        ret 
        UNREACHABLE_TRAP(0x6293200)
    }
}
