#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ea00, internal_620ea00, public_620ea00);
extern "C" NAKED register_t __cdecl internal_620ea00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+8]
        shr eax, 0x1F
        ret 4
        UNREACHABLE_TRAP(0x620ea00)
    }
}
