#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6daf810, internal_6daf810, public_6daf810);
extern "C" NAKED register_t __cdecl internal_6daf810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db66e8]
        mov dword ptr ds : [public_6dbc4f4], eax
        ret 
        UNREACHABLE_TRAP(0x6daf810)
    }
}
