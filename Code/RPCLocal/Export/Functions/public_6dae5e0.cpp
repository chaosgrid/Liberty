#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae5e0, internal_6dae5e0, public_6dae5e0);
extern "C" NAKED register_t __cdecl internal_6dae5e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65f8]
        mov dword ptr ds : [public_6dbc40c], eax
        ret 
        UNREACHABLE_TRAP(0x6dae5e0)
    }
}
