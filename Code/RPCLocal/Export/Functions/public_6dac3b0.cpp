#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac3b0, internal_6dac3b0, public_6dac3b0);
extern "C" NAKED register_t __cdecl internal_6dac3b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64ec]
        mov dword ptr ds : [public_6dbc2fc], eax
        ret 
        UNREACHABLE_TRAP(0x6dac3b0)
    }
}
