#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f0e0, internal_6d8f0e0, public_6d8f0e0);
extern "C" NAKED register_t __cdecl internal_6d8f0e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3bac]
        mov dword ptr ds : [public_6dbbd4c], eax
        ret 
        UNREACHABLE_TRAP(0x6d8f0e0)
    }
}
