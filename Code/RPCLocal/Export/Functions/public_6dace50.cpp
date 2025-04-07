#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dace50, internal_6dace50, public_6dace50);
extern "C" NAKED register_t __cdecl internal_6dace50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6528]
        mov dword ptr ds : [public_6dbc344], eax
        ret 
        UNREACHABLE_TRAP(0x6dace50)
    }
}
