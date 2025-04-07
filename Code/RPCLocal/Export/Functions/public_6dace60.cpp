#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dace60, internal_6dace60, public_6dace60);
extern "C" NAKED register_t __cdecl internal_6dace60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db652c]
        mov dword ptr ds : [public_6dbc33c], eax
        ret 
        UNREACHABLE_TRAP(0x6dace60)
    }
}
