#include "FreeLancer-PCH.h"

PROC_DECLARE(0x58c320, internal_58c320, public_58c320);
extern "C" NAKED register_t __cdecl internal_58c320()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e50e8]
        mov dword ptr ds : [public_67d8d0], eax
        ret 
        UNREACHABLE_TRAP(0x58c320)
    }
}
