#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91db0, internal_6d91db0, public_6d91db0);
extern "C" NAKED register_t __cdecl internal_6d91db0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3d44]
        mov dword ptr ds : [public_6dbbde0], eax
        ret 
        UNREACHABLE_TRAP(0x6d91db0)
    }
}
