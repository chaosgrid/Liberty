#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee3610, internal_6ee3610, public_6ee3610);
extern "C" NAKED register_t __cdecl internal_6ee3610()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6eeaf08]
        ret 4
        UNREACHABLE_TRAP(0x6ee3610)
    }
}
