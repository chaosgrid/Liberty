#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44af60);
CLANG_FORWARD_PROC_SYMBOL(public_44b370);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_446ade _public_446ade
#define public_446afc _public_446afc
#define public_446b0b _public_446b0b
#define public_446b2c _public_446b2c
#define public_446b35 _public_446b35

PROC_DECLARE(0x446ac0, internal_446ac0, public_446ac0);
extern "C" NAKED register_t __cdecl internal_446ac0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, 0
        je public_446afc
        dec eax
        push 0x1B
        je public_446ade
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_446b35
        jmp public_446b0b
        public_446ade : nop
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_446b35
        push 0x1D
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_446b0b
        pop esi
        ret 4
        public_446afc : nop
        push 0x19
        call public_5792b0
        add esp, 4
        cmp eax, 1
        jl public_446b35
        public_446b0b : nop
        mov al, byte ptr ds : [esi+0x48]
        test al, al
        jne public_446b35
        cmp dword ptr ds : [esi+0x34], 5
        jne public_446b2c
        mov eax, dword ptr ds : [esi]
        push 0
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        call public_44b370
        public_446b2c : nop
        mov ecx, dword ptr ds : [esi+8]
        push esi
        call public_44af60
        public_446b35 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x446ac0)
    }
}

#undef public_446ade
#undef public_446afc
#undef public_446b0b
#undef public_446b2c
#undef public_446b35
