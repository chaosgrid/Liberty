#include "FreeLancer-PCH.h"

PROC_DECLARE(0x420cf0, internal_420cf0, public_420cf0);
extern "C" NAKED register_t __cdecl internal_420cf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9688]
        mov dword ptr ds : [public_616868], eax
        ret 
        UNREACHABLE_TRAP(0x420cf0)
    }
}
