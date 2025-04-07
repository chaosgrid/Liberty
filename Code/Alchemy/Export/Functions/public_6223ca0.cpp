#include "Alchemy-PCH.h"

PROC_DECLARE(0x6223ca0, internal_6223ca0, public_6223ca0);
extern "C" NAKED register_t __cdecl internal_6223ca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0xB4]
        inc ecx
        mov dword ptr ds : [eax+0xB4], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6223ca0)
    }
}
