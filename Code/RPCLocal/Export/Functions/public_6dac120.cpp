#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac120, internal_6dac120, public_6dac120);
extern "C" NAKED register_t __cdecl internal_6dac120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6400]
        mov dword ptr ds : [public_6dbc24c], eax
        ret 
        UNREACHABLE_TRAP(0x6dac120)
    }
}
