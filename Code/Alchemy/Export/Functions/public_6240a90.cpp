#include "Alchemy-PCH.h"

PROC_DECLARE(0x6240a90, internal_6240a90, public_6240a90);
extern "C" NAKED register_t __cdecl internal_6240a90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6240a90)
    }
}
