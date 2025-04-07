#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f0d0, internal_6d8f0d0, public_6d8f0d0);
extern "C" NAKED register_t __cdecl internal_6d8f0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ba8]
        mov dword ptr ds : [public_6dbbd50], eax
        ret 
        UNREACHABLE_TRAP(0x6d8f0d0)
    }
}
