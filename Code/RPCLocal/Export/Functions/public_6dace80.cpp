#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dace80, internal_6dace80, public_6dace80);
extern "C" NAKED register_t __cdecl internal_6dace80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6538]
        mov dword ptr ds : [public_6dbc354], eax
        ret 
        UNREACHABLE_TRAP(0x6dace80)
    }
}
