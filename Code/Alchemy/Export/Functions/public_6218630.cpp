#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219070);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6218646 _public_6218646
#define public_621866c _public_621866c

PROC_DECLARE(0x6218630, internal_6218630, public_6218630);
extern "C" NAKED register_t __cdecl internal_6218630()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x104]
        test eax, eax
        jbe public_6218646
        dec eax
        mov dword ptr ds : [esi+0x104], eax
        public_6218646 : nop
        mov eax, dword ptr ds : [esi+0x104]
        test eax, eax
        jne public_621866c
        mov ecx, esi
        mov dword ptr ds : [esi+0x104], 1
        call public_6219070
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_621866c : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6218630)
    }
}

#undef public_6218646
#undef public_621866c
