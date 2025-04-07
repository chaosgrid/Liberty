#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db12a0, internal_6db12a0, public_6db12a0);
extern "C" NAKED register_t __cdecl internal_6db12a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6780]
        mov dword ptr ds : [public_6dbc594], eax
        ret 
        UNREACHABLE_TRAP(0x6db12a0)
    }
}
