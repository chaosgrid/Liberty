#include "THORN-PCH.h"

PROC_DECLARE(0x6f49fc0, internal_6f49fc0, public_6f49fc0);
extern "C" NAKED register_t __cdecl internal_6f49fc0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        ret 
        UNREACHABLE_TRAP(0x6f49fc0)
    }
}
