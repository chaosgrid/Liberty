#include "Alchemy-PCH.h"

PROC_DECLARE(0x620df60, internal_620df60, public_620df60);
extern "C" NAKED register_t __cdecl internal_620df60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x14]
        ret 4
        UNREACHABLE_TRAP(0x620df60)
    }
}
