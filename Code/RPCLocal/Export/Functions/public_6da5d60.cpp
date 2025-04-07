#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5d60, internal_6da5d60, public_6da5d60);
extern "C" NAKED register_t __cdecl internal_6da5d60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6164]
        mov dword ptr ds : [public_6dbbfd4], eax
        ret 
        UNREACHABLE_TRAP(0x6da5d60)
    }
}
