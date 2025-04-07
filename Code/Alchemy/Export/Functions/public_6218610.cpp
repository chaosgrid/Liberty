#include "Alchemy-PCH.h"

PROC_DECLARE(0x6218610, internal_6218610, public_6218610);
extern "C" NAKED register_t __cdecl internal_6218610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x104]
        inc ecx
        mov dword ptr ds : [eax+0x104], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6218610)
    }
}
