#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6dace70, internal_6dace70, public_6dace70);
extern "C" NAKED register_t __cdecl internal_6dace70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6538]
        mov dword ptr ds : [public_6dbc350], eax
        ret 
        UNREACHABLE_TRAP(0x6dace70)
    }
}
