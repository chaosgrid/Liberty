#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67126a0);
CLANG_FORWARD_PROC_SYMBOL(public_6712bf0);
CLANG_FORWARD_PROC_SYMBOL(public_67155a0);

PROC_DECLARE(0x6712f20, internal_6712f20, public_6712f20);
extern "C" NAKED register_t __cdecl internal_6712f20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6712bf0
        mov al, byte ptr ds : [esi+0x8C]
        push eax
        call public_67155a0
        mov cl, byte ptr ds : [esi+0x8C]
        add esp, 4
        push ecx
        lea ecx, ds:[esi+4]
        call public_67126a0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6712f20)
    }
}
