#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d911a0, internal_6d911a0, public_6d911a0);
extern "C" NAKED register_t __cdecl internal_6d911a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3cc8]
        mov dword ptr ds : [public_6dbbd98], eax
        ret 
        UNREACHABLE_TRAP(0x6d911a0)
    }
}
