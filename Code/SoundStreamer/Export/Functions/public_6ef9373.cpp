#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9373);

#define public_6ef9384 _public_6ef9384
#define public_6ef938b _public_6ef938b
#define public_6ef9392 _public_6ef9392
#define public_6ef9399 _public_6ef9399
#define public_6ef93a0 _public_6ef93a0
#define public_6ef93aa _public_6ef93aa
#define public_6ef93db _public_6ef93db
#define public_6ef93df _public_6ef93df
#define public_6ef93e2 _public_6ef93e2
#define public_6ef93f2 _public_6ef93f2
#define public_6ef93f7 _public_6ef93f7
#define public_6ef9404 _public_6ef9404

PROC_DECLARE(0x6ef9373, internal_6ef9373, public_6ef9373);
extern "C" NAKED register_t __cdecl internal_6ef9373()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        xor eax, eax
        push ebp
        test bl, 1
        push edi
        je public_6ef9384
        push 0x10
        pop eax
        public_6ef9384 : nop
        test bl, 4
        je public_6ef938b
        or al, 8
        public_6ef938b : nop
        test bl, 8
        je public_6ef9392
        or al, 4
        public_6ef9392 : nop
        test bl, 0x10
        je public_6ef9399
        or al, 2
        public_6ef9399 : nop
        test bl, 0x20
        je public_6ef93a0
        or al, 1
        public_6ef93a0 : nop
        test bl, 2
        je public_6ef93aa
        or eax, 0x80000
        public_6ef93aa : nop
        movzx ecx, bx
        push esi
        mov edx, ecx
        mov esi, 0xC00
        mov edi, 0x300
        and edx, esi
        mov ebp, 0x200
        je public_6ef93e2
        cmp edx, 0x400
        je public_6ef93df
        cmp edx, 0x800
        je public_6ef93db
        cmp edx, esi
        jne public_6ef93e2
        or eax, edi
        jmp public_6ef93e2
        public_6ef93db : nop
        or eax, ebp
        jmp public_6ef93e2
        public_6ef93df : nop
        or ah, 1
        public_6ef93e2 : nop
        and ecx, edi
        pop esi
        je public_6ef93f2
        cmp ecx, ebp
        jne public_6ef93f7
        or eax, 0x10000
        jmp public_6ef93f7
        public_6ef93f2 : nop
        or eax, 0x20000
        public_6ef93f7 : nop
        pop edi
        pop ebp
        test bh, 0x10
        pop ebx
        je public_6ef9404
        or eax, 0x40000
        public_6ef9404 : nop
        ret 
        UNREACHABLE_TRAP(0x6ef9373)
    }
}

#undef public_6ef9384
#undef public_6ef938b
#undef public_6ef9392
#undef public_6ef9399
#undef public_6ef93a0
#undef public_6ef93aa
#undef public_6ef93db
#undef public_6ef93df
#undef public_6ef93e2
#undef public_6ef93f2
#undef public_6ef93f7
#undef public_6ef9404
