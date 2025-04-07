#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad76a4);
CLANG_FORWARD_PROC_SYMBOL(public_6ad77d1);

#define public_6ad77ff _public_6ad77ff
#define public_6ad7802 _public_6ad7802
#define public_6ad7806 _public_6ad7806
#define public_6ad780a _public_6ad780a
#define public_6ad7811 _public_6ad7811
#define public_6ad782c _public_6ad782c
#define public_6ad783b _public_6ad783b
#define public_6ad7856 _public_6ad7856

PROC_DECLARE(0x6ad77d1, internal_6ad77d1, public_6ad77d1);
extern "C" NAKED register_t __cdecl internal_6ad77d1()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ss : [ebp+0xE]
        mov ecx, 0x7FF0
        mov edx, eax
        and edx, ecx
        cmp dx, cx
        jne public_6ad7811
        fld qword ptr ss : [ebp+8]
        push ecx
        push ecx
        fstp qword ptr ss : [esp]
        call public_6ad76a4
        pop ecx
        dec eax
        pop ecx
        je public_6ad780a
        dec eax
        je public_6ad7806
        dec eax
        je public_6ad7802
        push 1
        public_6ad77ff : nop
        pop eax
        pop ebp
        ret 
        public_6ad7802 : nop
        push 2
        jmp public_6ad77ff
        public_6ad7806 : nop
        push 4
        jmp public_6ad77ff
        public_6ad780a : nop
        mov eax, 0x200
        pop ebp
        ret 
        public_6ad7811 : nop
        and eax, 0x8000
        test dx, dx
        mov ecx, eax
        jne public_6ad783b
        test dword ptr ss : [ebp+0xC], 0xFFFFF
        jne public_6ad782c
        cmp dword ptr ss : [ebp+8], 0
        je public_6ad783b
        public_6ad782c : nop
        mov eax, ecx
        neg eax
        sbb eax, eax
        and al, 0x90
        add eax, 0x80
        pop ebp
        ret 
        public_6ad783b : nop
        fld qword ptr ss : [ebp+8]
        fcomp qword ptr ds : [public_6ada848]
        fnstsw ax
        sahf 
        mov eax, ecx
        jne public_6ad7856
        neg eax
        sbb eax, eax
        and al, 0xE0
        add eax, 0x40
        pop ebp
        ret 
        public_6ad7856 : nop
        neg eax
        sbb eax, eax
        and al, 8
        add eax, 0x100
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad77d1)
    }
}

#undef public_6ad77ff
#undef public_6ad7802
#undef public_6ad7806
#undef public_6ad780a
#undef public_6ad7811
#undef public_6ad782c
#undef public_6ad783b
#undef public_6ad7856
