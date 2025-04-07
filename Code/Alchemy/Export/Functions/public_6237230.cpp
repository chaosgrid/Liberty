#include "Alchemy-PCH.h"

PROC_DECLARE(0x6237230, internal_6237230, public_6237230);
extern "C" NAKED register_t __cdecl internal_6237230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x60]
        inc ecx
        mov dword ptr ds : [eax+0x60], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6237230)
    }
}
