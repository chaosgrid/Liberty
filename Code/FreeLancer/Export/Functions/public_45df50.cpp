#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45df50, internal_45df50, public_45df50);
extern "C" NAKED register_t __cdecl internal_45df50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66da0d]
        and eax, 0xFF1DBF3B
        or eax, 0x1DBF3B
        mov byte ptr ds : [public_66da0c], 0x16
        mov dword ptr ds : [public_66da0d], eax
        ret 
        UNREACHABLE_TRAP(0x45df50)
    }
}
