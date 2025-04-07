#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9acc0, internal_6d9acc0, public_6d9acc0);
extern "C" NAKED register_t __cdecl internal_6d9acc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db40bc]
        mov dword ptr ds : [public_6dbbf24], eax
        ret 
        UNREACHABLE_TRAP(0x6d9acc0)
    }
}
