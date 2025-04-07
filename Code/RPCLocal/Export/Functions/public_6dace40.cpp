#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dace40, internal_6dace40, public_6dace40);
extern "C" NAKED register_t __cdecl internal_6dace40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6528]
        mov dword ptr ds : [public_6dbc340], eax
        ret 
        UNREACHABLE_TRAP(0x6dace40)
    }
}
