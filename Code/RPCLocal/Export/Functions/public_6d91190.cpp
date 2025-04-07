#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d91190, internal_6d91190, public_6d91190);
extern "C" NAKED register_t __cdecl internal_6d91190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db3cc4]
        mov dword ptr ds : [public_6dbbda0], eax
        ret 
        UNREACHABLE_TRAP(0x6d91190)
    }
}
