#include "Alchemy-PCH.h"

PROC_DECLARE(0x620bac0, internal_620bac0, public_620bac0);
extern "C" NAKED register_t __cdecl internal_620bac0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x100]
        inc ecx
        mov dword ptr ds : [eax+0x100], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x620bac0)
    }
}
