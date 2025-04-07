#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daa0b0, internal_6daa0b0, public_6daa0b0);
extern "C" NAKED register_t __cdecl internal_6daa0b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db630c]
        mov dword ptr ds : [public_6dbc18c], eax
        ret 
        UNREACHABLE_TRAP(0x6daa0b0)
    }
}
