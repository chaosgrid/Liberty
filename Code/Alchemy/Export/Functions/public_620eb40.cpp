#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620eb40);

PROC_DECLARE(0x620eb40, internal_620eb40, public_620eb40);
extern "C" NAKED register_t __cdecl internal_620eb40()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x90]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620eb40)
    }
}
