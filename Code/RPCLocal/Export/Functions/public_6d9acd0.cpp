#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9acd0, internal_6d9acd0, public_6d9acd0);
extern "C" NAKED register_t __cdecl internal_6d9acd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db40c0]
        mov dword ptr ds : [public_6dbbf1c], eax
        ret 
        UNREACHABLE_TRAP(0x6d9acd0)
    }
}
