#include "Common-PCH.h"

PROC_DECLARE(0x6287b90, internal_6287b90, public_6287b90);
extern "C" NAKED register_t __cdecl internal_6287b90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x2C0], eax
        ret 4
        UNREACHABLE_TRAP(0x6287b90)
    }
}
