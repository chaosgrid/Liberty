#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4443b);
CLANG_FORWARD_PROC_SYMBOL(public_6d44558);

#define public_6d44577 _public_6d44577
#define public_6d44583 _public_6d44583
#define public_6d44594 _public_6d44594
#define public_6d445ab _public_6d445ab
#define public_6d445bc _public_6d445bc
#define public_6d445c4 _public_6d445c4
#define public_6d445ea _public_6d445ea
#define public_6d4460a _public_6d4460a
#define public_6d44610 _public_6d44610
#define public_6d44623 _public_6d44623
#define public_6d4462f _public_6d4462f
#define public_6d44660 _public_6d44660
#define public_6d44679 _public_6d44679
#define public_6d44688 _public_6d44688
#define public_6d4469e _public_6d4469e
#define public_6d446d6 _public_6d446d6
#define public_6d446da _public_6d446da
#define public_6d44703 _public_6d44703
#define public_6d44707 _public_6d44707
#define public_6d44719 _public_6d44719
#define public_6d4475b _public_6d4475b
#define public_6d44781 _public_6d44781
#define public_6d4479d _public_6d4479d
#define public_6d447b6 _public_6d447b6
#define public_6d447dc _public_6d447dc
#define public_6d447eb _public_6d447eb
#define public_6d447ed _public_6d447ed
#define public_6d4480f _public_6d4480f
#define public_6d44823 _public_6d44823
#define public_6d44826 _public_6d44826
#define public_6d4483f _public_6d4483f
#define public_6d44853 _public_6d44853
#define public_6d44856 _public_6d44856

PROC_DECLARE(0x6d44558, internal_6d44558, public_6d44558);
extern "C" NAKED register_t __cdecl internal_6d44558()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x50
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0x14]
        cmp esi, 6
        push edi
        jne public_6d44577
        mov ebx, offset public_6d610ac
        mov dword ptr ss : [ebp-0x1C], offset public_6d61094
        jmp public_6d44583
        public_6d44577 : nop
        mov ebx, offset public_6d61074
        mov dword ptr ss : [ebp-0x1C], offset public_6d61054
        public_6d44583 : nop
        fld1 
        xor edx, edx
        cmp esi, 8
        fstp dword ptr ss : [ebp-4]
        fldz 
        fstp dword ptr ss : [ebp-8]
        jne public_6d445c4
        public_6d44594 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        lea ecx, ds:[eax+edx*4]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [ebp-4]
        fnstsw ax
        test ah, 5
        jp public_6d445ab
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-4], eax
        public_6d445ab : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [ebp-8]
        fnstsw ax
        test ah, 0x41
        jne public_6d445bc
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], eax
        public_6d445bc : nop
        inc edx
        cmp edx, 0x10
        jb public_6d44594
        jmp public_6d44610
        public_6d445c4 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        lea ecx, ds:[eax+edx*4]
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [ebp-4]
        fnstsw ax
        test ah, 5
        jp public_6d445ea
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x41
        jne public_6d445ea
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-4], eax
        public_6d445ea : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ss : [ebp-8]
        fnstsw ax
        test ah, 0x41
        jne public_6d4460a
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6d5e488]
        fnstsw ax
        test ah, 5
        jp public_6d4460a
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-8], eax
        public_6d4460a : nop
        inc edx
        cmp edx, 0x10
        jb public_6d445c4
        public_6d44610 : nop
        lea edi, ds:[esi-1]
        test edi, edi
        mov dword ptr ss : [ebp-0x30], edi
        fild dword ptr ss : [ebp-0x30]
        jge public_6d44623
        fadd dword ptr ds : [public_6d5f200]
        public_6d44623 : nop
        fstp dword ptr ss : [ebp-0x24]
        call public_6d4443b
        and dword ptr ss : [ebp-0x20], 0
        public_6d4462f : nop
        fld dword ptr ss : [ebp-8]
        fsub dword ptr ss : [ebp-4]
        fcom dword ptr ds : [public_6d61050]
        fnstsw ax
        test ah, 5
        jnp public_6d447eb
        test esi, esi
        fld dword ptr ss : [ebp-0x24]
        fdiv st, st(1)
        fstp dword ptr ss : [ebp-0x28]
        fstp st(0)
        jbe public_6d44679
        mov edx, dword ptr ss : [ebp-0x1C]
        lea ecx, ss:[ebp-0x50]
        sub edx, ebx
        mov eax, ebx
        sub ecx, ebx
        public_6d44660 : nop
        fld dword ptr ss : [ebp-8]
        fmul dword ptr ds : [edx+eax]
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [eax]
        faddp 
        fstp dword ptr ds : [ecx+eax]
        add eax, 4
        dec esi
        jne public_6d44660
        mov esi, dword ptr ss : [ebp+0x14]
        public_6d44679 : nop
        cmp esi, 6
        jne public_6d44688
        fldz 
        fstp dword ptr ss : [ebp-0x38]
        fld1 
        fstp dword ptr ss : [ebp-0x34]
        public_6d44688 : nop
        fldz 
        xor edx, edx
        fstp dword ptr ss : [ebp-0xC]
        fldz 
        fstp dword ptr ss : [ebp-0x10]
        fldz 
        fstp dword ptr ss : [ebp-0x14]
        fldz 
        fstp dword ptr ss : [ebp-0x18]
        public_6d4469e : nop
        mov eax, dword ptr ss : [ebp+0x10]
        lea ecx, ds:[eax+edx*4]
        fld dword ptr ds : [ecx]
        fsub dword ptr ss : [ebp-4]
        fmul dword ptr ss : [ebp-0x28]
        fcom dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x41
        jp public_6d446da
        cmp esi, 6
        fstp st(0)
        jne public_6d446d6
        fld dword ptr ss : [ebp-4]
        fmul dword ptr ds : [public_6d5f1fc]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 1
        je public_6d4475b
        public_6d446d6 : nop
        xor eax, eax
        jmp public_6d44719
        public_6d446da : nop
        fcom dword ptr ss : [ebp-0x24]
        fnstsw ax
        test ah, 1
        jne public_6d44707
        cmp esi, 6
        fstp st(0)
        jne public_6d44703
        fld dword ptr ss : [ebp-8]
        fadd dword ptr ds : [public_6d5e488]
        fmul dword ptr ds : [public_6d5f1fc]
        fcomp dword ptr ds : [ecx]
        fnstsw ax
        test ah, 0x41
        jnp public_6d4475b
        public_6d44703 : nop
        mov eax, edi
        jmp public_6d44719
        public_6d44707 : nop
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp-0x2C]
        fld dword ptr ss : [ebp-0x2C]
        fistp dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ss : [ebp-0x30]
        public_6d44719 : nop
        cmp eax, esi
        jae public_6d4475b
        fld dword ptr ds : [ecx]
        shl eax, 2
        fsub dword ptr ss : [ebp+eax-0x50]
        mov ecx, dword ptr ss : [ebp-0x1C]
        fld st(0)
        fmul dword ptr ds : [eax+ebx]
        fadd dword ptr ss : [ebp-0xC]
        fstp dword ptr ss : [ebp-0xC]
        fld dword ptr ds : [eax+ebx]
        add eax, ecx
        fld st(0)
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x14]
        fstp dword ptr ss : [ebp-0x14]
        fstp st(0)
        fmul dword ptr ds : [eax]
        fadd dword ptr ss : [ebp-0x10]
        fstp dword ptr ss : [ebp-0x10]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x18]
        fstp dword ptr ss : [ebp-0x18]
        fstp st(0)
        public_6d4475b : nop
        inc edx
        cmp edx, 0x10
        jb public_6d4469e
        fld dword ptr ss : [ebp-0x14]
        fcomp dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x41
        jne public_6d44781
        fld dword ptr ss : [ebp-0xC]
        fdiv dword ptr ss : [ebp-0x14]
        fsubr dword ptr ss : [ebp-4]
        fstp dword ptr ss : [ebp-4]
        public_6d44781 : nop
        fld dword ptr ss : [ebp-0x18]
        fcomp dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x41
        jne public_6d4479d
        fld dword ptr ss : [ebp-0x10]
        fdiv dword ptr ss : [ebp-0x18]
        fsubr dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-8]
        public_6d4479d : nop
        fld dword ptr ss : [ebp-4]
        fcomp dword ptr ss : [ebp-8]
        fnstsw ax
        test ah, 0x41
        jne public_6d447b6
        fld dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-8]
        fstp dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-4], eax
        public_6d447b6 : nop
        fld dword ptr ss : [ebp-0xC]
        fmul dword ptr ss : [ebp-0xC]
        fcomp dword ptr ds : [public_6d6104c]
        fnstsw ax
        test ah, 5
        jp public_6d447dc
        fld dword ptr ss : [ebp-0x10]
        fmul dword ptr ss : [ebp-0x10]
        fcomp dword ptr ds : [public_6d6104c]
        fnstsw ax
        test ah, 5
        jnp public_6d447ed
        public_6d447dc : nop
        inc dword ptr ss : [ebp-0x20]
        cmp dword ptr ss : [ebp-0x20], 8
        jb public_6d4462f
        jmp public_6d447ed
        public_6d447eb : nop
        fstp st(0)
        public_6d447ed : nop
        mov eax, dword ptr ds : [public_6d73504]
        mov dword ptr ss : [ebp+0x14], eax
        fldcw word ptr ss : [ebp+0x14]
        fld dword ptr ss : [ebp-4]
        fcomp dword ptr ds : [public_6d5e48c]
        pop edi
        pop esi
        pop ebx
        fnstsw ax
        test ah, 5
        jp public_6d4480f
        fldz 
        jmp public_6d44826
        public_6d4480f : nop
        fld dword ptr ss : [ebp-4]
        fcomp dword ptr ds : [public_6d5e488]
        fnstsw ax
        test ah, 0x41
        jne public_6d44823
        fld1 
        jmp public_6d44826
        public_6d44823 : nop
        fld dword ptr ss : [ebp-4]
        public_6d44826 : nop
        mov eax, dword ptr ss : [ebp+8]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp-8]
        fcomp dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 5
        jp public_6d4483f
        fldz 
        jmp public_6d44856
        public_6d4483f : nop
        fld dword ptr ss : [ebp-8]
        fcomp dword ptr ds : [public_6d5e488]
        fnstsw ax
        test ah, 0x41
        jne public_6d44853
        fld1 
        jmp public_6d44856
        public_6d44853 : nop
        fld dword ptr ss : [ebp-8]
        public_6d44856 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        fstp dword ptr ds : [eax]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d44558)
    }
}

#undef public_6d44577
#undef public_6d44583
#undef public_6d44594
#undef public_6d445ab
#undef public_6d445bc
#undef public_6d445c4
#undef public_6d445ea
#undef public_6d4460a
#undef public_6d44610
#undef public_6d44623
#undef public_6d4462f
#undef public_6d44660
#undef public_6d44679
#undef public_6d44688
#undef public_6d4469e
#undef public_6d446d6
#undef public_6d446da
#undef public_6d44703
#undef public_6d44707
#undef public_6d44719
#undef public_6d4475b
#undef public_6d44781
#undef public_6d4479d
#undef public_6d447b6
#undef public_6d447dc
#undef public_6d447eb
#undef public_6d447ed
#undef public_6d4480f
#undef public_6d44823
#undef public_6d44826
#undef public_6d4483f
#undef public_6d44853
#undef public_6d44856
