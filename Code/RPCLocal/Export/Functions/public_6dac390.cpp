#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac390, internal_6dac390, public_6dac390);
extern "C" NAKED register_t __cdecl internal_6dac390()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db64e8]
        mov dword ptr ds : [public_6dbc300], eax
        ret 
        UNREACHABLE_TRAP(0x6dac390)
    }
}
