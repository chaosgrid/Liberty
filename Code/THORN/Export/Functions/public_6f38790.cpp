#include "THORN-PCH.h"

PROC_DECLARE(0x6f38790, internal_6f38790, public_6f38790);
extern "C" NAKED register_t __cdecl internal_6f38790()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xB4]
        ret 4
        UNREACHABLE_TRAP(0x6f38790)
    }
}
