#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_439540);
CLANG_FORWARD_PROC_SYMBOL(public_43b6b0);
CLANG_FORWARD_PROC_SYMBOL(public_43bab0);

#define public_43957c _public_43957c
#define public_439587 _public_439587

PROC_DECLARE(0x439540, internal_439540, public_439540);
extern "C" NAKED register_t __cdecl internal_439540()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x44]
        test ecx, 0x3FFFFFFF
        je public_439587
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+0x4C]
        fst dword ptr ds : [esi+0x4C]
        fcomp dword ptr ds : [esi+0x50]
        fnstsw ax
        test ah, 1
        jne public_439587
        push ecx
        mov ecx, esi
        call public_43b6b0
        mov al, byte ptr ds : [esi+0x48]
        test al, al
        je public_43957c
        mov eax, dword ptr ds : [esi+0x44]
        push eax
        mov ecx, esi
        call public_43bab0
        public_43957c : nop
        mov dword ptr ds : [esi+0x44], 0
        mov byte ptr ds : [esi+0x48], 0
        public_439587 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x439540)
    }
}

#undef public_43957c
#undef public_439587
