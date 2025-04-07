#include "Common-PCH.h"

PROC_DECLARE(0x633ada0, internal_633ada0, public_633ada0);
extern "C" NAKED register_t __cdecl internal_633ada0()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 4
        UNREACHABLE_TRAP(0x633ada0)
    }
}
