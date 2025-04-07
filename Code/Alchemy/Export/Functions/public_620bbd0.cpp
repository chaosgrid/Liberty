#include "Alchemy-PCH.h"

PROC_DECLARE(0x620bbd0, internal_620bbd0, public_620bbd0);
extern "C" NAKED register_t __cdecl internal_620bbd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x90]
        inc ecx
        mov dword ptr ds : [eax+0x90], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x620bbd0)
    }
}
