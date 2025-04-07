#include "Alchemy-PCH.h"

PROC_DECLARE(0x6226360, internal_6226360, public_6226360);
extern "C" NAKED register_t __cdecl internal_6226360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x8C]
        inc ecx
        mov dword ptr ds : [eax+0x8C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6226360)
    }
}
