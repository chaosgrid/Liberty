#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f7e0, internal_6d8f7e0, public_6d8f7e0);
extern "C" NAKED register_t __cdecl internal_6d8f7e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3c64]
        mov dword ptr ds : [public_6dbbd6c], eax
        ret 
        UNREACHABLE_TRAP(0x6d8f7e0)
    }
}
