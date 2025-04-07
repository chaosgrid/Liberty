#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6213a70);

PROC_DECLARE(0x6213a70, internal_6213a70, public_6213a70);
extern "C" NAKED register_t __cdecl internal_6213a70()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x94]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6213a70)
    }
}
