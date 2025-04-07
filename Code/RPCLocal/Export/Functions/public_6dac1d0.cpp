#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac1d0, internal_6dac1d0, public_6dac1d0);
extern "C" NAKED register_t __cdecl internal_6dac1d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db643c]
        mov dword ptr ds : [public_6dbc294], eax
        ret 
        UNREACHABLE_TRAP(0x6dac1d0)
    }
}
