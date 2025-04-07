#include "Alchemy-PCH.h"

PROC_DECLARE(0x620b9c0, internal_620b9c0, public_620b9c0);
extern "C" NAKED register_t __cdecl internal_620b9c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x30]
        inc ecx
        mov dword ptr ds : [eax+0x30], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x620b9c0)
    }
}
