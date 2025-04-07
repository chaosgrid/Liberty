#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac360, internal_6dac360, public_6dac360);
extern "C" NAKED register_t __cdecl internal_6dac360()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64d8]
        mov dword ptr ds : [public_6dbc2f0], eax
        ret 
        UNREACHABLE_TRAP(0x6dac360)
    }
}
