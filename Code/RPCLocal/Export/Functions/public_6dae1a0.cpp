#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae1a0, internal_6dae1a0, public_6dae1a0);
extern "C" NAKED register_t __cdecl internal_6dae1a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65b8]
        mov dword ptr ds : [public_6dbc3bc], eax
        ret 
        UNREACHABLE_TRAP(0x6dae1a0)
    }
}
