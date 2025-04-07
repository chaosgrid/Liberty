#include "Common-PCH.h"

PROC_DECLARE(0x6327590, internal_6327590, public_6327590);
extern "C" NAKED register_t __cdecl internal_6327590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x2C], eax
        ret 4
        UNREACHABLE_TRAP(0x6327590)
    }
}
