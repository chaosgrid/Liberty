#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8fae0, internal_6d8fae0, public_6d8fae0);
extern "C" NAKED register_t __cdecl internal_6d8fae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3c84]
        mov dword ptr ds : [public_6dbbd80], eax
        ret 
        UNREACHABLE_TRAP(0x6d8fae0)
    }
}
