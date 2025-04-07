#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad378e);

#define public_6ad379e _public_6ad379e
#define public_6ad37a5 _public_6ad37a5
#define public_6ad37ac _public_6ad37ac
#define public_6ad37b3 _public_6ad37b3
#define public_6ad37ba _public_6ad37ba
#define public_6ad37c4 _public_6ad37c4
#define public_6ad37e9 _public_6ad37e9
#define public_6ad37ee _public_6ad37ee
#define public_6ad37f1 _public_6ad37f1
#define public_6ad3807 _public_6ad3807
#define public_6ad3809 _public_6ad3809
#define public_6ad3816 _public_6ad3816

PROC_DECLARE(0x6ad378e, internal_6ad378e, public_6ad378e);
extern "C" NAKED register_t __cdecl internal_6ad378e()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        xor eax, eax
        push esi
        test bl, 0x10
        je public_6ad379e
        push 1
        pop eax
        public_6ad379e : nop
        test bl, 8
        je public_6ad37a5
        or al, 4
        public_6ad37a5 : nop
        test bl, 4
        je public_6ad37ac
        or al, 8
        public_6ad37ac : nop
        test bl, 2
        je public_6ad37b3
        or al, 0x10
        public_6ad37b3 : nop
        test bl, 1
        je public_6ad37ba
        or al, 0x20
        public_6ad37ba : nop
        test ebx, 0x80000
        je public_6ad37c4
        or al, 2
        public_6ad37c4 : nop
        mov ecx, ebx
        mov edx, 0x300
        and ecx, edx
        mov esi, 0x200
        je public_6ad37f1
        cmp ecx, 0x100
        je public_6ad37ee
        cmp ecx, esi
        je public_6ad37e9
        cmp ecx, edx
        jne public_6ad37f1
        or ah, 0xC
        jmp public_6ad37f1
        public_6ad37e9 : nop
        or ah, 8
        jmp public_6ad37f1
        public_6ad37ee : nop
        or ah, 4
        public_6ad37f1 : nop
        mov ecx, ebx
        and ecx, 0x30000
        je public_6ad3807
        cmp ecx, 0x10000
        jne public_6ad3809
        or eax, esi
        jmp public_6ad3809
        public_6ad3807 : nop
        or eax, edx
        public_6ad3809 : nop
        pop esi
        test ebx, 0x40000
        pop ebx
        je public_6ad3816
        or ah, 0x10
        public_6ad3816 : nop
        ret 
        UNREACHABLE_TRAP(0x6ad378e)
    }
}

#undef public_6ad379e
#undef public_6ad37a5
#undef public_6ad37ac
#undef public_6ad37b3
#undef public_6ad37ba
#undef public_6ad37c4
#undef public_6ad37e9
#undef public_6ad37ee
#undef public_6ad37f1
#undef public_6ad3807
#undef public_6ad3809
#undef public_6ad3816
