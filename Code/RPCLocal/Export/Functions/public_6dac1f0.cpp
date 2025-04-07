#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac1f0, internal_6dac1f0, public_6dac1f0);
extern "C" NAKED register_t __cdecl internal_6dac1f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db644c]
        mov dword ptr ds : [public_6dbc2a0], eax
        ret 
        UNREACHABLE_TRAP(0x6dac1f0)
    }
}
