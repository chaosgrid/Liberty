#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6da5d50, internal_6da5d50, public_6da5d50);
extern "C" NAKED register_t __cdecl internal_6da5d50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6db6164]
        mov dword ptr ds : [public_6dbbfd0], eax
        ret 
        UNREACHABLE_TRAP(0x6da5d50)
    }
}
