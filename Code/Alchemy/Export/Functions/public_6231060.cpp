#include "Alchemy-PCH.h"

PROC_DECLARE(0x6231060, internal_6231060, public_6231060);
extern "C" NAKED register_t __cdecl internal_6231060()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xD0]
        inc ecx
        mov dword ptr ds : [eax+0xD0], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6231060)
    }
}
