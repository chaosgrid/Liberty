#include "Common-PCH.h"

PROC_DECLARE(0x6334aa0, internal_6334aa0, public_6334aa0);
extern "C" NAKED register_t __cdecl internal_6334aa0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63a4aac]
        mov dword ptr ds : [public_658a9a8], eax
        ret 
        UNREACHABLE_TRAP(0x6334aa0)
    }
}
