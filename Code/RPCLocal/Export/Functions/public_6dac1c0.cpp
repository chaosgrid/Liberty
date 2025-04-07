#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac1c0, internal_6dac1c0, public_6dac1c0);
extern "C" NAKED register_t __cdecl internal_6dac1c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db643c]
        mov dword ptr ds : [public_6dbc290], eax
        ret 
        UNREACHABLE_TRAP(0x6dac1c0)
    }
}
