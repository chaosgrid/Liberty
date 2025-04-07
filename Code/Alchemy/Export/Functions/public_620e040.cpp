#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620e040);

PROC_DECLARE(0x620e040, internal_620e040, public_620e040);
extern "C" NAKED register_t __cdecl internal_620e040()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        fstp dword ptr ds : [eax+0x98]
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e040)
    }
}
