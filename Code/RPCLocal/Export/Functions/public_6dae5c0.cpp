#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae5c0, internal_6dae5c0, public_6dae5c0);
extern "C" NAKED register_t __cdecl internal_6dae5c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65f4]
        mov dword ptr ds : [public_6dbc410], eax
        ret 
        UNREACHABLE_TRAP(0x6dae5c0)
    }
}
