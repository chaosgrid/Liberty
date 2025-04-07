#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db0130, internal_6db0130, public_6db0130);
extern "C" NAKED register_t __cdecl internal_6db0130()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db672c]
        mov dword ptr ds : [public_6dbc520], eax
        ret 
        UNREACHABLE_TRAP(0x6db0130)
    }
}
