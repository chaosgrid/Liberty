#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f7f0, internal_6d8f7f0, public_6d8f7f0);
extern "C" NAKED register_t __cdecl internal_6d8f7f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3c64]
        mov dword ptr ds : [public_6dbbd70], eax
        ret 
        UNREACHABLE_TRAP(0x6d8f7f0)
    }
}
