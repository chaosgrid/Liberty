#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ea90, internal_620ea90, public_620ea90);
extern "C" NAKED register_t __cdecl internal_620ea90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x620ea90)
    }
}
