#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ea70, internal_620ea70, public_620ea70);
extern "C" NAKED register_t __cdecl internal_620ea70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x10]
        ret 4
        UNREACHABLE_TRAP(0x620ea70)
    }
}
