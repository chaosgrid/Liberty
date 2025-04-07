#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f0c0, internal_6d8f0c0, public_6d8f0c0);
extern "C" NAKED register_t __cdecl internal_6d8f0c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3ba8]
        mov dword ptr ds : [public_6dbbd54], eax
        ret 
        UNREACHABLE_TRAP(0x6d8f0c0)
    }
}
