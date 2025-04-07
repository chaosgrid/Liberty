#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae5f0, internal_6dae5f0, public_6dae5f0);
extern "C" NAKED register_t __cdecl internal_6dae5f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6600]
        mov dword ptr ds : [public_6dbc420], eax
        ret 
        UNREACHABLE_TRAP(0x6dae5f0)
    }
}
