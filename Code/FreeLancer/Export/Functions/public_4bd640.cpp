#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4bd640, internal_4bd640, public_4bd640);
extern "C" NAKED register_t __cdecl internal_4bd640()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d5f6c]
        mov dword ptr ds : [public_672444], eax
        ret 
        UNREACHABLE_TRAP(0x4bd640)
    }
}
