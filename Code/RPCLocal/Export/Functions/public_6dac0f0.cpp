#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac0f0, internal_6dac0f0, public_6dac0f0);
extern "C" NAKED register_t __cdecl internal_6dac0f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db63f0]
        mov dword ptr ds : [public_6dbc23c], eax
        ret 
        UNREACHABLE_TRAP(0x6dac0f0)
    }
}
