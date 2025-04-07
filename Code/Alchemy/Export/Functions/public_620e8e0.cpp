#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e8e0, internal_620e8e0, public_620e8e0);
extern "C" NAKED register_t __cdecl internal_620e8e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xA0]
        inc ecx
        mov dword ptr ds : [eax+0xA0], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x620e8e0)
    }
}
