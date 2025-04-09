#include "FreeLancer-PCH.h"

PROC_DECLARE(0x45dff0, internal_45dff0, public_45dff0);
extern "C" NAKED register_t __cdecl internal_45dff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_66d9e5]
        or eax, 0xFFFFFF
        mov byte ptr ds : [public_66d9e4], 1
        mov dword ptr ds : [public_66d9e5], eax
        ret 
        UNREACHABLE_TRAP(0x45dff0)
    }
}
