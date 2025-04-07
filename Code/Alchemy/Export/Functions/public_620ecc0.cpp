#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620ecc0);

PROC_DECLARE(0x620ecc0, internal_620ecc0, public_620ecc0);
extern "C" NAKED register_t __cdecl internal_620ecc0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov cl, byte ptr ds : [eax+0x98]
        xor eax, eax
        mov byte ptr ds : [edx], cl
        ret 8
        UNREACHABLE_TRAP(0x620ecc0)
    }
}
