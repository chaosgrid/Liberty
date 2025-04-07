#include "Alchemy-PCH.h"

PROC_DECLARE(0x620df80, internal_620df80, public_620df80);
extern "C" NAKED register_t __cdecl internal_620df80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x1C]
        ret 4
        UNREACHABLE_TRAP(0x620df80)
    }
}
