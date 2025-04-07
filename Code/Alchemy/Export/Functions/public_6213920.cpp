#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213920);

PROC_DECLARE(0x6213920, internal_6213920, public_6213920);
extern "C" NAKED register_t __cdecl internal_6213920()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x90]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6213920)
    }
}
