#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ab00, internal_620ab00, public_620ab00);
extern "C" NAKED register_t __cdecl internal_620ab00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x28]
        inc ecx
        mov dword ptr ds : [eax+0x28], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x620ab00)
    }
}
