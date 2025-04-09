#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e250, internal_45e250, public_45e250);
extern "C" NAKED register_t __cdecl internal_45e250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d94d]
        and eax, 0xFFE0C387
        or eax, 0xE0C387
        mov byte ptr ds : [public_66d94c], 1
        mov dword ptr ds : [public_66d94d], eax
        ret 
        UNREACHABLE_TRAP(0x45e250)
    }
}
