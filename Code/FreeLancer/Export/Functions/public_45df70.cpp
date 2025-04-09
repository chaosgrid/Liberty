#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45df70, internal_45df70, public_45df70);
extern "C" NAKED register_t __cdecl internal_45df70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66da05]
        or eax, 0xFFFFFF
        mov byte ptr ds : [public_66da04], 0
        mov dword ptr ds : [public_66da05], eax
        ret 
        UNREACHABLE_TRAP(0x45df70)
    }
}
