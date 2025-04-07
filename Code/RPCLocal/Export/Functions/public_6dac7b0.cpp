#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac7b0, internal_6dac7b0, public_6dac7b0);
extern "C" NAKED register_t __cdecl internal_6dac7b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64fc]
        mov dword ptr ds : [public_6dbc30c], eax
        ret 
        UNREACHABLE_TRAP(0x6dac7b0)
    }
}
