#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45e230, internal_45e230, public_45e230);
extern "C" NAKED register_t __cdecl internal_45e230()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d955]
        and eax, 0xFFE0C387
        or eax, 0xE0C387
        mov byte ptr ds : [public_66d954], 0x28
        mov dword ptr ds : [public_66d955], eax
        ret 
        UNREACHABLE_TRAP(0x45e230)
    }
}
