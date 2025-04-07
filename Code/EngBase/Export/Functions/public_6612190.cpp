#include "EngBase-PCH.h"

PROC_DECLARE(0x6612190, internal_6612190, public_6612190);
extern "C" NAKED register_t __cdecl internal_6612190()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x3C]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx], eax
        ret 4
        UNREACHABLE_TRAP(0x6612190)
    }
}
