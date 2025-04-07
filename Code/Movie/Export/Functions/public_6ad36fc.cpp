#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad36fc);

#define public_6ad370d _public_6ad370d
#define public_6ad3714 _public_6ad3714
#define public_6ad371b _public_6ad371b
#define public_6ad3722 _public_6ad3722
#define public_6ad3729 _public_6ad3729
#define public_6ad3733 _public_6ad3733
#define public_6ad3764 _public_6ad3764
#define public_6ad3768 _public_6ad3768
#define public_6ad376b _public_6ad376b
#define public_6ad377b _public_6ad377b
#define public_6ad3780 _public_6ad3780
#define public_6ad378d _public_6ad378d

PROC_DECLARE(0x6ad36fc, internal_6ad36fc, public_6ad36fc);
extern "C" NAKED register_t __cdecl internal_6ad36fc()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        xor eax, eax
        push ebp
        test bl, 1
        push edi
        je public_6ad370d
        push 0x10
        pop eax
        public_6ad370d : nop
        test bl, 4
        je public_6ad3714
        or al, 8
        public_6ad3714 : nop
        test bl, 8
        je public_6ad371b
        or al, 4
        public_6ad371b : nop
        test bl, 0x10
        je public_6ad3722
        or al, 2
        public_6ad3722 : nop
        test bl, 0x20
        je public_6ad3729
        or al, 1
        public_6ad3729 : nop
        test bl, 2
        je public_6ad3733
        or eax, 0x80000
        public_6ad3733 : nop
        movzx ecx, bx
        push esi
        mov edx, ecx
        mov esi, 0xC00
        mov edi, 0x300
        and edx, esi
        mov ebp, 0x200
        je public_6ad376b
        cmp edx, 0x400
        je public_6ad3768
        cmp edx, 0x800
        je public_6ad3764
        cmp edx, esi
        jne public_6ad376b
        or eax, edi
        jmp public_6ad376b
        public_6ad3764 : nop
        or eax, ebp
        jmp public_6ad376b
        public_6ad3768 : nop
        or ah, 1
        public_6ad376b : nop
        and ecx, edi
        pop esi
        je public_6ad377b
        cmp ecx, ebp
        jne public_6ad3780
        or eax, 0x10000
        jmp public_6ad3780
        public_6ad377b : nop
        or eax, 0x20000
        public_6ad3780 : nop
        pop edi
        pop ebp
        test bh, 0x10
        pop ebx
        je public_6ad378d
        or eax, 0x40000
        public_6ad378d : nop
        ret 
        UNREACHABLE_TRAP(0x6ad36fc)
    }
}

#undef public_6ad370d
#undef public_6ad3714
#undef public_6ad371b
#undef public_6ad3722
#undef public_6ad3729
#undef public_6ad3733
#undef public_6ad3764
#undef public_6ad3768
#undef public_6ad376b
#undef public_6ad377b
#undef public_6ad3780
#undef public_6ad378d
