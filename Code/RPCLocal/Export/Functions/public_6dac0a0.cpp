#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac0a0, internal_6dac0a0, public_6dac0a0);
extern "C" NAKED register_t __cdecl internal_6dac0a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63dc]
        mov dword ptr ds : [public_6dbc230], eax
        ret 
        UNREACHABLE_TRAP(0x6dac0a0)
    }
}
