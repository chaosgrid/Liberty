#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_558580);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_446b5e _public_446b5e
#define public_446b7c _public_446b7c
#define public_446b8b _public_446b8b
#define public_446ba6 _public_446ba6

PROC_DECLARE(0x446b40, internal_446b40, public_446b40);
extern "C" NAKED register_t __cdecl internal_446b40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x34]
        sub eax, 0
        je public_446b7c
        dec eax
        push 0x1B
        je public_446b5e
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_446ba6
        jmp public_446b8b
        public_446b5e : nop
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_446ba6
        push 0x1D
        call public_5792b0
        add esp, 4
        test eax, eax
        jne public_446b8b
        pop esi
        ret 4
        public_446b7c : nop
        push 0x19
        call public_5792b0
        add esp, 4
        cmp eax, 1
        jl public_446ba6
        public_446b8b : nop
        mov al, byte ptr ds : [esi+0x48]
        test al, al
        jne public_446ba6
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        je public_446ba6
        mov eax, dword ptr ss : [esp+8]
        push eax
        lea ecx, ds:[esi+0x74]
        call public_558580
        public_446ba6 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x446b40)
    }
}

#undef public_446b5e
#undef public_446b7c
#undef public_446b8b
#undef public_446ba6
