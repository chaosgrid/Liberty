#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae1e0, internal_6dae1e0, public_6dae1e0);
extern "C" NAKED register_t __cdecl internal_6dae1e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65d0]
        mov dword ptr ds : [public_6dbc3e0], eax
        ret 
        UNREACHABLE_TRAP(0x6dae1e0)
    }
}
