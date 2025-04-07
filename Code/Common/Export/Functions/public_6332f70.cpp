#include "Common-PCH.h"

PROC_DECLARE(0x6332f70, internal_6332f70, public_6332f70);
extern "C" NAKED register_t __cdecl internal_6332f70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_640a778]
        inc eax
        mov dword ptr ds : [public_640a778], eax
        ret 
        UNREACHABLE_TRAP(0x6332f70)
    }
}
