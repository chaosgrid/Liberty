#include "Freelancer-PCH.h"

PROC_DECLARE(0x45df00, internal_45df00, public_45df00);
extern "C" NAKED register_t __cdecl internal_45df00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66da25]
        and eax, 0xFF1DBF3B
        or eax, 0x1DBF3B
        mov byte ptr ds : [public_66da24], 0
        mov dword ptr ds : [public_66da25], eax
        ret 
        UNREACHABLE_TRAP(0x45df00)
    }
}
