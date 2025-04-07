#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac350, internal_6dac350, public_6dac350);
extern "C" NAKED register_t __cdecl internal_6dac350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64cc]
        mov dword ptr ds : [public_6dbc2dc], eax
        ret 
        UNREACHABLE_TRAP(0x6dac350)
    }
}
