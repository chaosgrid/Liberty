#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db19a0, internal_6db19a0, public_6db19a0);
extern "C" NAKED register_t __cdecl internal_6db19a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db67cc]
        mov dword ptr ds : [public_6dbc5ec], eax
        ret 
        UNREACHABLE_TRAP(0x6db19a0)
    }
}
