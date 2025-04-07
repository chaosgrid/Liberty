#include "Server-PCH.h"

PROC_DECLARE(0x6ce10f0, internal_6ce10f0, public_6ce10f0);
extern "C" NAKED register_t __cdecl internal_6ce10f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        ret 
        UNREACHABLE_TRAP(0x6ce10f0)
    }
}
