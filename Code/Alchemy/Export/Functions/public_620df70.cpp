#include "Alchemy-PCH.h"

PROC_DECLARE(0x620df70, internal_620df70, public_620df70);
extern "C" NAKED register_t __cdecl internal_620df70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x18]
        ret 4
        UNREACHABLE_TRAP(0x620df70)
    }
}
