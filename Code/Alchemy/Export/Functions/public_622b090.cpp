#include "Alchemy-PCH.h"

PROC_DECLARE(0x622b090, internal_622b090, public_622b090);
extern "C" NAKED register_t __cdecl internal_622b090()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x28]
        inc ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x622b090)
    }
}
