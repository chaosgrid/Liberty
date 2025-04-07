#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac1b0, internal_6dac1b0, public_6dac1b0);
extern "C" NAKED register_t __cdecl internal_6dac1b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6430]
        mov dword ptr ds : [public_6dbc27c], eax
        ret 
        UNREACHABLE_TRAP(0x6dac1b0)
    }
}
