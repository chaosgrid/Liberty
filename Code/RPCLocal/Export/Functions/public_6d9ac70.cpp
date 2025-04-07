#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9ac70, internal_6d9ac70, public_6d9ac70);
extern "C" NAKED register_t __cdecl internal_6d9ac70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db40a0]
        mov dword ptr ds : [public_6dbbf14], eax
        ret 
        UNREACHABLE_TRAP(0x6d9ac70)
    }
}
