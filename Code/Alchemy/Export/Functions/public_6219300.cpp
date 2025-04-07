#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219300);

PROC_DECLARE(0x6219300, internal_6219300, public_6219300);
extern "C" NAKED register_t __cdecl internal_6219300()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x9C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6219300)
    }
}
