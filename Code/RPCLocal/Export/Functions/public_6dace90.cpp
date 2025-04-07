#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dace90, internal_6dace90, public_6dace90);
extern "C" NAKED register_t __cdecl internal_6dace90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db653c]
        mov dword ptr ds : [public_6dbc34c], eax
        ret 
        UNREACHABLE_TRAP(0x6dace90)
    }
}
