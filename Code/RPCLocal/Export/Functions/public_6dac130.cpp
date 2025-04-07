#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac130, internal_6dac130, public_6dac130);
extern "C" NAKED register_t __cdecl internal_6dac130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db640c]
        mov dword ptr ds : [public_6dbc260], eax
        ret 
        UNREACHABLE_TRAP(0x6dac130)
    }
}
