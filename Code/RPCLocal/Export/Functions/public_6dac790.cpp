#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac790, internal_6dac790, public_6dac790);
extern "C" NAKED register_t __cdecl internal_6dac790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64f8]
        mov dword ptr ds : [public_6dbc310], eax
        ret 
        UNREACHABLE_TRAP(0x6dac790)
    }
}
