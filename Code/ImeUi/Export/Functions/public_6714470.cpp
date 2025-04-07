#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6714470);

PROC_DECLARE(0x6714470, internal_6714470, public_6714470);
extern "C" NAKED register_t __cdecl internal_6714470()
{
    __asm
    {
        push edi
        xor eax, eax
        mov ecx, 0x80
        mov edi, offset public_671b7c0
        rep stosd
        mov ecx, 0x40
        mov edi, offset public_671b410
        rep stosd
        mov dword ptr ds : [public_671cfa0], eax
        mov dword ptr ds : [public_671cfa4], eax
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6714470)
    }
}
