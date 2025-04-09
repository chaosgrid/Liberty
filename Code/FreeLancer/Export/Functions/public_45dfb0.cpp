#include "Freelancer-PCH.h"

PROC_DECLARE(0x45dfb0, internal_45dfb0, public_45dfb0);
extern "C" NAKED register_t __cdecl internal_45dfb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9f5]
        and eax, 0xFF1DBF3B
        or eax, 0x1DBF3B
        mov byte ptr ds : [public_66d9f4], 0
        mov dword ptr ds : [public_66d9f5], eax
        ret 
        UNREACHABLE_TRAP(0x45dfb0)
    }
}
