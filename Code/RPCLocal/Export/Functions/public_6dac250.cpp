#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac250, internal_6dac250, public_6dac250);
extern "C" NAKED register_t __cdecl internal_6dac250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db646c]
        mov dword ptr ds : [public_6dbc2c0], eax
        ret 
        UNREACHABLE_TRAP(0x6dac250)
    }
}
