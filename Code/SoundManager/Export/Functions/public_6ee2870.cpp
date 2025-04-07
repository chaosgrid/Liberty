#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee2870, internal_6ee2870, public_6ee2870);
extern "C" NAKED register_t __cdecl internal_6ee2870()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+0xE8]
        ret 4
        UNREACHABLE_TRAP(0x6ee2870)
    }
}
