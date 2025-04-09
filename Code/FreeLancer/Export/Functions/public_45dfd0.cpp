#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45dfd0, internal_45dfd0, public_45dfd0);
extern "C" NAKED register_t __cdecl internal_45dfd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9ed]
        and eax, 0xFF1DBF3B
        or eax, 0x1DBF3B
        mov byte ptr ds : [public_66d9ec], 2
        mov dword ptr ds : [public_66d9ed], eax
        ret 
        UNREACHABLE_TRAP(0x45dfd0)
    }
}
