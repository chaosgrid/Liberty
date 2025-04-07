#include "Server-PCH.h"

PROC_DECLARE(0x6ce10c0, internal_6ce10c0, public_6ce10c0);
extern "C" NAKED register_t __cdecl internal_6ce10c0()
{
    __asm
    {
        mov eax, ecx
        mov dword ptr ds : [eax], offset public_6d64cec
        ret 4
        UNREACHABLE_TRAP(0x6ce10c0)
    }
}
