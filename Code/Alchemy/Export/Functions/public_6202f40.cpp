#include "Alchemy-PCH.h"

PROC_DECLARE(0x6202f40, internal_6202f40, public_6202f40);
extern "C" NAKED register_t __cdecl internal_6202f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x9C]
        inc ecx
        mov dword ptr ds : [eax+0x9C], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6202f40)
    }
}
