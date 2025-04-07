#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac2a0, internal_6dac2a0, public_6dac2a0);
extern "C" NAKED register_t __cdecl internal_6dac2a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6480]
        mov dword ptr ds : [public_6dbc2cc], eax
        ret 
        UNREACHABLE_TRAP(0x6dac2a0)
    }
}
