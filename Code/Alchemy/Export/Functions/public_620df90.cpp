#include "Alchemy-PCH.h"

PROC_DECLARE(0x620df90, internal_620df90, public_620df90);
extern "C" NAKED register_t __cdecl internal_620df90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x20]
        ret 4
        UNREACHABLE_TRAP(0x620df90)
    }
}
