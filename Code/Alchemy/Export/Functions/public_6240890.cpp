#include "Alchemy-PCH.h"

PROC_DECLARE(0x6240890, internal_6240890, public_6240890);
extern "C" NAKED register_t __cdecl internal_6240890()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+4]
        inc ecx
        mov dword ptr ds : [eax+4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6240890)
    }
}
