#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4443b);
CLANG_FORWARD_PROC_SYMBOL(public_6d4485d);

#define public_6d4487e _public_6d4487e
#define public_6d4488c _public_6d4488c
#define public_6d448b9 _public_6d448b9
#define public_6d448cc _public_6d448cc
#define public_6d448df _public_6d448df
#define public_6d448f0 _public_6d448f0
#define public_6d44903 _public_6d44903
#define public_6d44912 _public_6d44912
#define public_6d44923 _public_6d44923
#define public_6d4498e _public_6d4498e
#define public_6d449e6 _public_6d449e6
#define public_6d44a5c _public_6d44a5c
#define public_6d44a6f _public_6d44a6f
#define public_6d44a8b _public_6d44a8b
#define public_6d44a9c _public_6d44a9c
#define public_6d44ad0 _public_6d44ad0
#define public_6d44ae8 _public_6d44ae8
#define public_6d44afa _public_6d44afa
#define public_6d44b0b _public_6d44b0b
#define public_6d44b42 _public_6d44b42
#define public_6d44bc2 _public_6d44bc2
#define public_6d44bf2 _public_6d44bf2
#define public_6d44c0f _public_6d44c0f
#define public_6d44ce4 _public_6d44ce4
#define public_6d44d1c _public_6d44d1c
#define public_6d44d76 _public_6d44d76
#define public_6d44d85 _public_6d44d85
#define public_6d44d8b _public_6d44d8b
#define public_6d44dba _public_6d44dba
#define public_6d44dbb _public_6d44dbb

PROC_DECLARE(0x6d4485d, internal_6d4485d, public_6d4485d);
extern "C" NAKED register_t __cdecl internal_6d4485d()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x68]
        sub esp, 0xC0
        cmp dword ptr ss : [ebp+0x7C], 3
        jne public_6d4487e
        mov dword ptr ss : [ebp], offset public_6d610f8
        mov dword ptr ss : [ebp+4], offset public_6d610ec
        jmp public_6d4488c
        public_6d4487e : nop
        mov dword ptr ss : [ebp], offset public_6d610dc
        mov dword ptr ss : [ebp+4], offset public_6d610cc
        public_6d4488c : nop
        push esi
        fldz 
        push edi
        fstp dword ptr ss : [ebp+0x48]
        mov esi, offset public_6d6d3e0
        fldz 
        lea edi, ss:[ebp+0x58]
        fst dword ptr ss : [ebp+0x4C]
        movsd 
        fldz 
        movsd 
        fstp dword ptr ss : [ebp+0x50]
        movsd 
        movsd 
        mov esi, dword ptr ss : [ebp+0x78]
        push 0x10
        add esi, 8
        pop edi
        mov dword ptr ss : [ebp-0x18], esi
        mov ecx, esi
        mov edx, edi
        public_6d448b9 : nop
        fld dword ptr ds : [ecx-8]
        fcomp dword ptr ss : [ebp+0x58]
        fnstsw ax
        test ah, 5
        jp public_6d448cc
        mov eax, dword ptr ds : [ecx-8]
        mov dword ptr ss : [ebp+0x58], eax
        public_6d448cc : nop
        fld dword ptr ds : [ecx-4]
        fcomp dword ptr ss : [ebp+0x5C]
        fnstsw ax
        test ah, 5
        jp public_6d448df
        mov eax, dword ptr ds : [ecx-4]
        mov dword ptr ss : [ebp+0x5C], eax
        public_6d448df : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [ebp+0x60]
        fnstsw ax
        test ah, 5
        jp public_6d448f0
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+0x60], eax
        public_6d448f0 : nop
        fld dword ptr ds : [ecx-8]
        fcomp dword ptr ss : [ebp+0x48]
        fnstsw ax
        test ah, 0x41
        jne public_6d44903
        mov eax, dword ptr ds : [ecx-8]
        mov dword ptr ss : [ebp+0x48], eax
        public_6d44903 : nop
        fcom dword ptr ds : [ecx-4]
        fnstsw ax
        test ah, 5
        jp public_6d44912
        fstp st(0)
        fld dword ptr ds : [ecx-4]
        public_6d44912 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [ebp+0x50]
        fnstsw ax
        test ah, 0x41
        jne public_6d44923
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp+0x50], eax
        public_6d44923 : nop
        add ecx, edi
        dec edx
        jne public_6d448b9
        fst dword ptr ss : [ebp+0x4C]
        fld dword ptr ss : [ebp+0x48]
        fsub dword ptr ss : [ebp+0x58]
        fstp dword ptr ss : [ebp+0x28]
        fld dword ptr ss : [ebp+0x5C]
        fsubr st, st(1)
        fstp dword ptr ss : [ebp+0x2C]
        fld dword ptr ss : [ebp+0x50]
        fsub dword ptr ss : [ebp+0x60]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [ebp+0x2C]
        fmul dword ptr ss : [ebp+0x2C]
        faddp 
        fld dword ptr ss : [ebp+0x28]
        fmul dword ptr ss : [ebp+0x28]
        faddp 
        fcom dword ptr ds : [public_6d5f8ec]
        fst dword ptr ss : [ebp+0x24]
        fnstsw ax
        test ah, 5
        jp public_6d4498e
        mov eax, dword ptr ss : [ebp+0x70]
        fstp st(0)
        mov ecx, dword ptr ss : [ebp+0x58]
        fstp st(0)
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [ebp+0x74]
        mov ecx, dword ptr ss : [ebp+0x48]
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], ecx
        jmp public_6d44dbb
        public_6d4498e : nop
        fld1 
        mov eax, esi
        fdivrp 
        mov ecx, edi
        fld dword ptr ss : [ebp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ss : [ebp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0xC]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-8]
        fstp st(0)
        fld dword ptr ds : [public_6d5f1fc]
        fld dword ptr ss : [ebp+0x48]
        fadd dword ptr ss : [ebp+0x58]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x14]
        fld st(1)
        fadd dword ptr ss : [ebp+0x5C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x18]
        fld dword ptr ss : [ebp+0x50]
        fadd dword ptr ss : [ebp+0x60]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x1C]
        fstp st(0)
        fldz 
        fstp dword ptr ss : [ebp+0x44]
        fldz 
        fstp dword ptr ss : [ebp+0x40]
        fldz 
        fstp dword ptr ss : [ebp+0x3C]
        fldz 
        public_6d449e6 : nop
        fld dword ptr ds : [eax-8]
        fsub dword ptr ss : [ebp+0x14]
        fmul dword ptr ss : [ebp-0x10]
        fstp dword ptr ss : [ebp+0x28]
        fld dword ptr ds : [eax-4]
        fsub dword ptr ss : [ebp+0x18]
        fmul dword ptr ss : [ebp-0xC]
        fstp dword ptr ss : [ebp+0x2C]
        fld dword ptr ds : [eax]
        add eax, edi
        dec ecx
        fsub dword ptr ss : [ebp+0x1C]
        fmul dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp+0x2C]
        fadd st, st(1)
        fadd dword ptr ss : [ebp+0x28]
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fstp st(0)
        fld dword ptr ss : [ebp+0x2C]
        fadd dword ptr ss : [ebp+0x28]
        fsub st, st(1)
        fld st(0)
        fmul st, st(1)
        fadd dword ptr ss : [ebp+0x3C]
        fstp dword ptr ss : [ebp+0x3C]
        fstp st(0)
        fld dword ptr ss : [ebp+0x28]
        fsub dword ptr ss : [ebp+0x2C]
        fld st(0)
        fadd st, st(2)
        fld st(0)
        fmul st, st(1)
        fadd dword ptr ss : [ebp+0x40]
        fstp dword ptr ss : [ebp+0x40]
        fstp st(0)
        fsubrp 
        fld st(0)
        fmul st, st(1)
        fadd dword ptr ss : [ebp+0x44]
        fstp dword ptr ss : [ebp+0x44]
        fstp st(0)
        jne public_6d449e6
        push ebx
        fst dword ptr ss : [ebp+0x38]
        xor edx, edx
        xor ebx, ebx
        inc edx
        public_6d44a5c : nop
        lea ecx, ss:[ebp+edx*4+0x38]
        fcom dword ptr ds : [ecx]
        fnstsw ax
        test ah, 5
        jp public_6d44a6f
        fstp st(0)
        mov ebx, edx
        fld dword ptr ds : [ecx]
        public_6d44a6f : nop
        inc edx
        cmp edx, 4
        jb public_6d44a5c
        test bl, 2
        fstp st(0)
        je public_6d44a8b
        mov eax, dword ptr ss : [ebp+0x5C]
        fstp dword ptr ss : [ebp+0x5C]
        mov dword ptr ss : [ebp+0xC], eax
        fld dword ptr ss : [ebp+0xC]
        fst dword ptr ss : [ebp+0x4C]
        public_6d44a8b : nop
        test bl, 1
        je public_6d44a9c
        fld dword ptr ss : [ebp+0x60]
        mov eax, dword ptr ss : [ebp+0x50]
        fstp dword ptr ss : [ebp+0x50]
        mov dword ptr ss : [ebp+0x60], eax
        public_6d44a9c : nop
        fld dword ptr ss : [ebp+0x24]
        fcomp dword ptr ds : [public_6d610c8]
        fnstsw ax
        test ah, 5
        jp public_6d44ad0
        mov eax, dword ptr ss : [ebp+0x70]
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [ebp+0x74]
        mov ecx, dword ptr ss : [ebp+0x48]
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], ecx
        jmp public_6d44dba
        public_6d44ad0 : nop
        mov ebx, dword ptr ss : [ebp+0x7C]
        fstp st(0)
        lea eax, ds:[ebx-1]
        test eax, eax
        mov dword ptr ss : [ebp+0x7C], eax
        fild dword ptr ss : [ebp+0x7C]
        jge public_6d44ae8
        fadd dword ptr ds : [public_6d5f200]
        public_6d44ae8 : nop
        fstp dword ptr ss : [ebp+0xC]
        call public_6d4443b
        and dword ptr ss : [ebp+0x24], 0
        fld dword ptr ds : [public_6d610c4]
        public_6d44afa : nop
        test ebx, ebx
        jbe public_6d44b42
        mov eax, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [ebp+4]
        lea ecx, ss:[ebp-0x54]
        sub edx, eax
        mov esi, ebx
        public_6d44b0b : nop
        fld dword ptr ss : [ebp+0x58]
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [ebp+0x48]
        fmul dword ptr ds : [edx+eax]
        faddp 
        fstp dword ptr ds : [ecx-4]
        fld dword ptr ss : [ebp+0x5C]
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [ebp+0x4C]
        fmul dword ptr ds : [edx+eax]
        faddp 
        fstp dword ptr ds : [ecx]
        fld dword ptr ss : [ebp+0x60]
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [ebp+0x50]
        fmul dword ptr ds : [edx+eax]
        add eax, 4
        faddp 
        fstp dword ptr ds : [ecx+4]
        add ecx, edi
        dec esi
        jne public_6d44b0b
        public_6d44b42 : nop
        fld dword ptr ss : [ebp+0x48]
        fsub dword ptr ss : [ebp+0x58]
        fld dword ptr ss : [ebp+0x4C]
        fsub dword ptr ss : [ebp+0x5C]
        fstp dword ptr ss : [ebp+0x2C]
        fld dword ptr ss : [ebp+0x50]
        fsub dword ptr ss : [ebp+0x60]
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [ebp+0x2C]
        fmul dword ptr ss : [ebp+0x2C]
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fcom dword ptr ds : [public_6d610c8]
        fnstsw ax
        test ah, 5
        jnp public_6d44d85
        fdivr dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp-0x18]
        mov esi, edi
        fld st(0)
        fmul st, st(3)
        fstp dword ptr ss : [ebp+0x28]
        fld dword ptr ss : [ebp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x30]
        fstp st(0)
        fstp st(0)
        fldz 
        fstp dword ptr ss : [ebp+0x40]
        fldz 
        fstp dword ptr ss : [ebp+0x3C]
        fldz 
        fstp dword ptr ss : [ebp+0x38]
        fldz 
        fstp dword ptr ss : [ebp+0x1C]
        fldz 
        fstp dword ptr ss : [ebp+0x18]
        fldz 
        fstp dword ptr ss : [ebp+0x14]
        fldz 
        fstp dword ptr ss : [ebp+0x10]
        fldz 
        fstp dword ptr ss : [ebp+0x7C]
        public_6d44bc2 : nop
        fld dword ptr ds : [ecx-4]
        fsub dword ptr ss : [ebp+0x5C]
        fmul dword ptr ss : [ebp+0x2C]
        fld dword ptr ds : [ecx-8]
        fsub dword ptr ss : [ebp+0x58]
        fmul dword ptr ss : [ebp+0x28]
        faddp 
        fld dword ptr ds : [ecx]
        fsub dword ptr ss : [ebp+0x60]
        fmul dword ptr ss : [ebp+0x30]
        faddp 
        fst dword ptr ss : [ebp+8]
        fcomp dword ptr ss : [ebp+0xC]
        fnstsw ax
        test ah, 1
        jne public_6d44bf2
        lea edx, ds:[ebx-1]
        jmp public_6d44c0f
        public_6d44bf2 : nop
        fstp st(0)
        fld dword ptr ss : [ebp+8]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp+8]
        fld dword ptr ss : [ebp+8]
        fistp dword ptr ss : [ebp-0x14]
        mov edx, dword ptr ss : [ebp-0x14]
        fld dword ptr ds : [public_6d610c4]
        public_6d44c0f : nop
        mov edi, dword ptr ss : [ebp+4]
        mov eax, edx
        shl eax, 4
        fld dword ptr ss : [ebp+eax-0x58]
        push 0x10
        fsub dword ptr ds : [ecx-8]
        fld dword ptr ss : [ebp+eax-0x54]
        fsub dword ptr ds : [ecx-4]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ss : [ebp+eax-0x50]
        mov eax, edx
        fsub dword ptr ds : [ecx]
        mov edx, dword ptr ss : [ebp]
        shl eax, 2
        add edx, eax
        fld dword ptr ds : [edx]
        add eax, edi
        fmul dword ptr ds : [public_6d5f210]
        pop edi
        fld dword ptr ds : [eax]
        add ecx, edi
        dec esi
        fmul dword ptr ds : [public_6d5f210]
        fld st(1)
        fmul dword ptr ds : [edx]
        fadd dword ptr ss : [ebp+0x7C]
        fstp dword ptr ss : [ebp+0x7C]
        fld st(1)
        fmul st, st(4)
        fadd dword ptr ss : [ebp+0x14]
        fstp dword ptr ss : [ebp+0x14]
        fld st(1)
        fmul dword ptr ss : [ebp-0xC]
        fadd dword ptr ss : [ebp+0x18]
        fstp dword ptr ss : [ebp+0x18]
        fld st(1)
        fmul st, st(3)
        fadd dword ptr ss : [ebp+0x1C]
        fstp dword ptr ss : [ebp+0x1C]
        fld st(0)
        fmul dword ptr ds : [eax]
        fadd dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [ebp+0x10]
        fld st(0)
        fmul st, st(4)
        fadd dword ptr ss : [ebp+0x38]
        fstp dword ptr ss : [ebp+0x38]
        fld dword ptr ss : [ebp-0xC]
        fmul st, st(1)
        fadd dword ptr ss : [ebp+0x3C]
        fstp dword ptr ss : [ebp+0x3C]
        fmul st, st(2)
        fadd dword ptr ss : [ebp+0x40]
        fstp dword ptr ss : [ebp+0x40]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        jne public_6d44bc2
        fld dword ptr ss : [ebp+0x7C]
        fcomp dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x41
        jne public_6d44ce4
        fld dword ptr ds : [public_6d5e484]
        fdiv dword ptr ss : [ebp+0x7C]
        fld dword ptr ss : [ebp+0x14]
        fmul st, st(1)
        fadd dword ptr ss : [ebp+0x58]
        fstp dword ptr ss : [ebp+0x58]
        fld dword ptr ss : [ebp+0x18]
        fmul st, st(1)
        fadd dword ptr ss : [ebp+0x5C]
        fstp dword ptr ss : [ebp+0x5C]
        fmul dword ptr ss : [ebp+0x1C]
        fadd dword ptr ss : [ebp+0x60]
        fstp dword ptr ss : [ebp+0x60]
        public_6d44ce4 : nop
        fld dword ptr ss : [ebp+0x10]
        fcomp dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x41
        jne public_6d44d1c
        fld dword ptr ds : [public_6d5e484]
        fdiv dword ptr ss : [ebp+0x10]
        fld dword ptr ss : [ebp+0x38]
        fmul st, st(1)
        fadd dword ptr ss : [ebp+0x48]
        fstp dword ptr ss : [ebp+0x48]
        fld dword ptr ss : [ebp+0x3C]
        fmul st, st(1)
        fadd dword ptr ss : [ebp+0x4C]
        fstp dword ptr ss : [ebp+0x4C]
        fmul dword ptr ss : [ebp+0x40]
        fadd dword ptr ss : [ebp+0x50]
        fstp dword ptr ss : [ebp+0x50]
        public_6d44d1c : nop
        fld dword ptr ss : [ebp+0x14]
        fmul dword ptr ss : [ebp+0x14]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_6d44d76
        fld dword ptr ss : [ebp+0x18]
        fmul dword ptr ss : [ebp+0x18]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_6d44d76
        fld dword ptr ss : [ebp+0x1C]
        fmul dword ptr ss : [ebp+0x1C]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_6d44d76
        fld dword ptr ss : [ebp+0x38]
        fmul dword ptr ss : [ebp+0x38]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_6d44d76
        fld dword ptr ss : [ebp+0x3C]
        fmul dword ptr ss : [ebp+0x3C]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_6d44d76
        fld dword ptr ss : [ebp+0x40]
        fmul dword ptr ss : [ebp+0x40]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_6d44d8b
        public_6d44d76 : nop
        inc dword ptr ss : [ebp+0x24]
        cmp dword ptr ss : [ebp+0x24], 8
        jb public_6d44afa
        jmp public_6d44d8b
        public_6d44d85 : nop
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_6d44d8b : nop
        mov eax, dword ptr ds : [public_6d73504]
        fstp st(0)
        mov dword ptr ss : [ebp+0x7C], eax
        fldcw word ptr ss : [ebp+0x7C]
        mov eax, dword ptr ss : [ebp+0x70]
        mov ecx, dword ptr ss : [ebp+0x58]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp+0x5C]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ss : [ebp+0x60]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, dword ptr ss : [ebp+0x48]
        mov eax, dword ptr ss : [ebp+0x74]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov dword ptr ds : [eax+4], ecx
        public_6d44dba : nop
        pop ebx
        public_6d44dbb : nop
        mov ecx, dword ptr ss : [ebp+0x50]
        pop edi
        mov dword ptr ds : [eax+8], ecx
        pop esi
        add ebp, 0x68
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d4485d)
    }
}

#undef public_6d4487e
#undef public_6d4488c
#undef public_6d448b9
#undef public_6d448cc
#undef public_6d448df
#undef public_6d448f0
#undef public_6d44903
#undef public_6d44912
#undef public_6d44923
#undef public_6d4498e
#undef public_6d449e6
#undef public_6d44a5c
#undef public_6d44a6f
#undef public_6d44a8b
#undef public_6d44a9c
#undef public_6d44ad0
#undef public_6d44ae8
#undef public_6d44afa
#undef public_6d44b0b
#undef public_6d44b42
#undef public_6d44bc2
#undef public_6d44bf2
#undef public_6d44c0f
#undef public_6d44ce4
#undef public_6d44d1c
#undef public_6d44d76
#undef public_6d44d85
#undef public_6d44d8b
#undef public_6d44dba
#undef public_6d44dbb
