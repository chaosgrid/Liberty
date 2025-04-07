#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279bf0);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6279c1f _public_6279c1f

PROC_DECLARE(0x6279bf0, internal_6279bf0, public_6279bf0);
extern "C" NAKED register_t __cdecl internal_6279bf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push esi
        call public_6334430
        lea eax, ds:[esi+4]
        push eax
        call public_6334430
        lea ecx, ds:[esi+0x48]
        push ecx
        call public_6334430
        mov al, byte ptr ss : [esp+0x14]
        add esp, 0xC
        test al, 1
        je public_6279c1f
        push esi
        call public_6391d5a
        add esp, 4
        public_6279c1f : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6279bf0)
    }
}

#undef public_6279c1f
