#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);

#define public_6d37378 _public_6d37378
#define public_6d373c6 _public_6d373c6
#define public_6d373e8 _public_6d373e8
#define public_6d3743e _public_6d3743e
#define public_6d37465 _public_6d37465
#define public_6d374b7 _public_6d374b7
#define public_6d374d9 _public_6d374d9
#define public_6d3752b _public_6d3752b
#define public_6d3755e _public_6d3755e
#define public_6d375b1 _public_6d375b1
#define public_6d375cf _public_6d375cf
#define public_6d3761c _public_6d3761c
#define public_6d37620 _public_6d37620

PROC_DECLARE(0x6d37335, internal_6d37335, public_6d37335);
extern "C" NAKED register_t __cdecl internal_6d37335()
{
    __asm
    {
        push ebp
        mov ebp, esp
        mov eax, dword ptr ds : [ecx+8]
        dec eax
        push esi
        push edi
        je public_6d3752b
        dec eax
        je public_6d3743e
        dec eax
        jne public_6d37620
        mov eax, dword ptr ds : [ecx+0x1048]
        dec eax
        je public_6d373c6
        dec eax
        jne public_6d37620
        xor esi, esi
        cmp dword ptr ds : [ecx+0x1058], esi
        jbe public_6d37620
        mov eax, dword ptr ss : [ebp+8]
        xor edx, edx
        add eax, 8
        public_6d37378 : nop
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-8]
        fstp dword ptr ds : [edx+edi]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-4]
        inc esi
        fstp dword ptr ds : [edx+edi+4]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax]
        add edx, 0x10
        fstp dword ptr ds : [edx+edi-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax+4]
        add eax, 0x10
        fadd st(0), st
        fsub dword ptr ds : [public_6d5e488]
        fstp dword ptr ds : [edx+edi-4]
        cmp esi, dword ptr ds : [ecx+0x1058]
        jb public_6d37378
        jmp public_6d37620
        public_6d373c6 : nop
        xor esi, esi
        cmp dword ptr ds : [ecx+0x1058], esi
        jbe public_6d37620
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ds : [public_6d5f5c8]
        fld dword ptr ds : [public_6d5e488]
        xor edx, edx
        add eax, 8
        public_6d373e8 : nop
        fld dword ptr ds : [eax-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fmul st, st(2)
        inc esi
        fsub st, st(1)
        fstp dword ptr ds : [edx+edi]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-4]
        add edx, 0x10
        fmul st, st(2)
        fsub st, st(1)
        fstp dword ptr ds : [edx+edi-0xC]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax]
        add eax, 0x10
        fmul st, st(2)
        fsub st, st(1)
        fstp dword ptr ds : [edx+edi-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-0xC]
        fmul st, st(2)
        fsub st, st(1)
        fstp dword ptr ds : [edx+edi-4]
        cmp esi, dword ptr ds : [ecx+0x1058]
        jb public_6d373e8
        jmp public_6d3761c
        public_6d3743e : nop
        mov eax, dword ptr ds : [ecx+0x1048]
        dec eax
        je public_6d374b7
        dec eax
        dec eax
        jne public_6d37620
        xor esi, esi
        cmp dword ptr ds : [ecx+0x1058], esi
        jbe public_6d37620
        mov eax, dword ptr ss : [ebp+8]
        xor edx, edx
        add eax, 8
        public_6d37465 : nop
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-8]
        fstp dword ptr ds : [edx+edi]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-4]
        inc esi
        fstp dword ptr ds : [edx+edi+4]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax]
        add edx, 0x10
        fstp dword ptr ds : [edx+edi-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax+4]
        add eax, 0x10
        fadd dword ptr ds : [public_6d5e488]
        fmul dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ds : [edx+edi-4]
        cmp esi, dword ptr ds : [ecx+0x1058]
        jb public_6d37465
        jmp public_6d37620
        public_6d374b7 : nop
        xor esi, esi
        cmp dword ptr ds : [ecx+0x1058], esi
        jbe public_6d37620
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ds : [public_6d5f5c8]
        fld dword ptr ds : [public_6d5e488]
        xor edx, edx
        add eax, 8
        public_6d374d9 : nop
        fld dword ptr ds : [eax-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fmul st, st(2)
        inc esi
        fsub st, st(1)
        fstp dword ptr ds : [edx+edi]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-4]
        add edx, 0x10
        fmul st, st(2)
        fsub st, st(1)
        fstp dword ptr ds : [edx+edi-0xC]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax]
        add eax, 0x10
        fmul st, st(2)
        fsub st, st(1)
        fstp dword ptr ds : [edx+edi-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-0xC]
        fstp dword ptr ds : [edx+edi-4]
        cmp esi, dword ptr ds : [ecx+0x1058]
        jb public_6d374d9
        jmp public_6d3761c
        public_6d3752b : nop
        mov eax, dword ptr ds : [ecx+0x1048]
        dec eax
        dec eax
        je public_6d375b1
        dec eax
        jne public_6d37620
        xor esi, esi
        cmp dword ptr ds : [ecx+0x1058], esi
        jbe public_6d37620
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ds : [public_6d5e488]
        fld dword ptr ds : [public_6d5f1fc]
        xor edx, edx
        add eax, 8
        public_6d3755e : nop
        fld dword ptr ds : [eax-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fadd st, st(2)
        inc esi
        fmul st, st(1)
        fstp dword ptr ds : [edx+edi]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-4]
        add edx, 0x10
        fadd st, st(2)
        fmul st, st(1)
        fstp dword ptr ds : [edx+edi-0xC]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax]
        add eax, 0x10
        fadd st, st(2)
        fmul st, st(1)
        fstp dword ptr ds : [edx+edi-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-0xC]
        fadd st, st(2)
        fmul st, st(1)
        fstp dword ptr ds : [edx+edi-4]
        cmp esi, dword ptr ds : [ecx+0x1058]
        jb public_6d3755e
        jmp public_6d3761c
        public_6d375b1 : nop
        xor esi, esi
        cmp dword ptr ds : [ecx+0x1058], esi
        jbe public_6d37620
        mov eax, dword ptr ss : [ebp+8]
        fld dword ptr ds : [public_6d5e488]
        fld dword ptr ds : [public_6d5f1fc]
        xor edx, edx
        add eax, 8
        public_6d375cf : nop
        fld dword ptr ds : [eax-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fadd st, st(2)
        inc esi
        fmul st, st(1)
        fstp dword ptr ds : [edx+edi]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-4]
        add edx, 0x10
        fadd st, st(2)
        fmul st, st(1)
        fstp dword ptr ds : [edx+edi-0xC]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax]
        add eax, 0x10
        fadd st, st(2)
        fmul st, st(1)
        fstp dword ptr ds : [edx+edi-8]
        mov edi, dword ptr ds : [ecx+0x104C]
        fld dword ptr ds : [eax-0xC]
        fstp dword ptr ds : [edx+edi-4]
        cmp esi, dword ptr ds : [ecx+0x1058]
        jb public_6d375cf
        public_6d3761c : nop
        fstp st(0)
        fstp st(0)
        public_6d37620 : nop
        mov eax, dword ptr ds : [ecx+0x104C]
        pop edi
        pop esi
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d37335)
    }
}

#undef public_6d37378
#undef public_6d373c6
#undef public_6d373e8
#undef public_6d3743e
#undef public_6d37465
#undef public_6d374b7
#undef public_6d374d9
#undef public_6d3752b
#undef public_6d3755e
#undef public_6d375b1
#undef public_6d375cf
#undef public_6d3761c
#undef public_6d37620
