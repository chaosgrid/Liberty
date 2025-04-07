#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dae1c0, internal_6dae1c0, public_6dae1c0);
extern "C" NAKED register_t __cdecl internal_6dae1c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db65c4]
        mov dword ptr ds : [public_6dbc3d4], eax
        ret 
        UNREACHABLE_TRAP(0x6dae1c0)
    }
}
