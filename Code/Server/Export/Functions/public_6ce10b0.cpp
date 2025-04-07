#include "Server-PCH.h"

PROC_DECLARE(0x6ce10b0, internal_6ce10b0, public_6ce10b0);
extern "C" NAKED register_t __cdecl internal_6ce10b0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6d64cec
        ret 
        UNREACHABLE_TRAP(0x6ce10b0)
    }
}
