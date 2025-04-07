#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac7a0, internal_6dac7a0, public_6dac7a0);
extern "C" NAKED register_t __cdecl internal_6dac7a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64f8]
        mov dword ptr ds : [public_6dbc314], eax
        ret 
        UNREACHABLE_TRAP(0x6dac7a0)
    }
}
