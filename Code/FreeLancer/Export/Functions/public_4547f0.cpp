#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4547f0, internal_4547f0, public_4547f0);
extern "C" NAKED register_t __cdecl internal_4547f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5ce050]
        mov dword ptr ds : [public_66d2fc], eax
        ret 
        UNREACHABLE_TRAP(0x4547f0)
    }
}
