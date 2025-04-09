#include "Freelancer-PCH.h"

PROC_DECLARE(0x45df30, internal_45df30, public_45df30);
extern "C" NAKED register_t __cdecl internal_45df30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66da15]
        or eax, 0xFFFFFF
        mov byte ptr ds : [public_66da14], 0x10
        mov dword ptr ds : [public_66da15], eax
        ret 
        UNREACHABLE_TRAP(0x45df30)
    }
}
