#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6d9a7a0, internal_6d9a7a0, public_6d9a7a0);
extern "C" NAKED register_t __cdecl internal_6d9a7a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db4088]
        mov dword ptr ds : [public_6dbbefc], eax
        ret 
        UNREACHABLE_TRAP(0x6d9a7a0)
    }
}
