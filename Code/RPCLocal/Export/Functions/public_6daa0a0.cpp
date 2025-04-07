#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daa0a0, internal_6daa0a0, public_6daa0a0);
extern "C" NAKED register_t __cdecl internal_6daa0a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6308]
        mov dword ptr ds : [public_6dbc194], eax
        ret 
        UNREACHABLE_TRAP(0x6daa0a0)
    }
}
