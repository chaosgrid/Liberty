#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8fad0, internal_6d8fad0, public_6d8fad0);
extern "C" NAKED register_t __cdecl internal_6d8fad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3c84]
        mov dword ptr ds : [public_6dbbd7c], eax
        ret 
        UNREACHABLE_TRAP(0x6d8fad0)
    }
}
