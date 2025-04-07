#include "Common-PCH.h"

PROC_DECLARE(0x6304750, internal_6304750, public_6304750);
extern "C" NAKED register_t __cdecl internal_6304750()
{
    __asm
    {
        mov eax, ecx
        mov byte ptr ds : [eax+0x18], 0
        ret 
        UNREACHABLE_TRAP(0x6304750)
    }
}
