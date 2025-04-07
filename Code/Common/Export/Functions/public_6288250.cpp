#include "Common-PCH.h"

PROC_DECLARE(0x6288250, internal_6288250, public_6288250);
extern "C" NAKED register_t __cdecl internal_6288250()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x2A0], eax
        ret 4
        UNREACHABLE_TRAP(0x6288250)
    }
}
