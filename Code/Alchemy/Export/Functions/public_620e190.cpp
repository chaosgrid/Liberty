#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e190);

PROC_DECLARE(0x620e190, internal_620e190, public_620e190);
extern "C" NAKED register_t __cdecl internal_620e190()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x9C]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e190)
    }
}
