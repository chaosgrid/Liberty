#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4a9260, internal_4a9260, public_4a9260);
extern "C" NAKED register_t __cdecl internal_4a9260()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d49e4]
        mov dword ptr ds : [public_6721fc], eax
        ret 
        UNREACHABLE_TRAP(0x4a9260)
    }
}
