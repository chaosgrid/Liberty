#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91660, internal_6d91660, public_6d91660);
extern "C" NAKED register_t __cdecl internal_6d91660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3d08]
        mov dword ptr ds : [public_6dbbdb8], eax
        ret 
        UNREACHABLE_TRAP(0x6d91660)
    }
}
