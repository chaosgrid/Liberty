#include "Common-PCH.h"

PROC_DECLARE(0x62a3060, internal_62a3060, public_62a3060);
extern "C" NAKED register_t __cdecl internal_62a3060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x50], eax
        ret 4
        UNREACHABLE_TRAP(0x62a3060)
    }
}
