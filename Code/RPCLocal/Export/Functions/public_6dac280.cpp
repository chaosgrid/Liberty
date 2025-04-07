#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dac280, internal_6dac280, public_6dac280);
extern "C" NAKED register_t __cdecl internal_6dac280()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db647c]
        mov dword ptr ds : [public_6dbc2d0], eax
        ret 
        UNREACHABLE_TRAP(0x6dac280)
    }
}
