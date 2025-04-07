#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ac00, internal_620ac00, public_620ac00);
extern "C" NAKED register_t __cdecl internal_620ac00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xC]
        inc ecx
        mov dword ptr ds : [eax+0xC], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x620ac00)
    }
}
