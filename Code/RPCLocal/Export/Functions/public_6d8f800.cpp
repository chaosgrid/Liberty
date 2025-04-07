#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d8f800, internal_6d8f800, public_6d8f800);
extern "C" NAKED register_t __cdecl internal_6d8f800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3c68]
        mov dword ptr ds : [public_6dbbd68], eax
        ret 
        UNREACHABLE_TRAP(0x6d8f800)
    }
}
