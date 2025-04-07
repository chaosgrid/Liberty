#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d998f0, internal_6d998f0, public_6d998f0);
extern "C" NAKED register_t __cdecl internal_6d998f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db4030]
        mov dword ptr ds : [public_6dbbecc], eax
        ret 
        UNREACHABLE_TRAP(0x6d998f0)
    }
}
