#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac3a0, internal_6dac3a0, public_6dac3a0);
extern "C" NAKED register_t __cdecl internal_6dac3a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64e8]
        mov dword ptr ds : [public_6dbc304], eax
        ret 
        UNREACHABLE_TRAP(0x6dac3a0)
    }
}
