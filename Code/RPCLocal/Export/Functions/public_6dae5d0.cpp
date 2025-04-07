#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae5d0, internal_6dae5d0, public_6dae5d0);
extern "C" NAKED register_t __cdecl internal_6dae5d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65f4]
        mov dword ptr ds : [public_6dbc414], eax
        ret 
        UNREACHABLE_TRAP(0x6dae5d0)
    }
}
