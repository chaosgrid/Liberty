#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_634d970);
CLANG_FORWARD_PROC_SYMBOL(public_634d9d0);
CLANG_FORWARD_PROC_SYMBOL(public_6352a90);
CLANG_FORWARD_PROC_SYMBOL(public_635ae60);
CLANG_FORWARD_PROC_SYMBOL(public_635b210);
CLANG_FORWARD_PROC_SYMBOL(public_635b940);
CLANG_FORWARD_PROC_SYMBOL(public_635bdd0);
CLANG_FORWARD_PROC_SYMBOL(public_6363620);
CLANG_FORWARD_PROC_SYMBOL(public_6363ab0);

#define public_6363658 _public_6363658
#define public_636365c _public_636365c
#define public_636375b _public_636375b
#define public_63637db _public_63637db
#define public_636386d _public_636386d
#define public_6363875 _public_6363875
#define public_6363879 _public_6363879
#define public_6363897 _public_6363897
#define public_6363916 _public_6363916
#define public_6363925 _public_6363925
#define public_63639a5 _public_63639a5
#define public_63639ae _public_63639ae
#define public_63639be _public_63639be
#define public_63639d1 _public_63639d1
#define public_63639f4 _public_63639f4
#define public_6363a0d _public_6363a0d
#define public_6363a4f _public_6363a4f
#define public_6363a6c _public_6363a6c
#define public_6363a6e _public_6363a6e

PROC_DECLARE(0x6363620, internal_6363620, public_6363620);
extern "C" NAKED register_t __cdecl internal_6363620()
{
    __asm
    {
        sub esp, 0x5C
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        push esi
        dec eax
        push edi
        mov dword ptr ss : [ebp+4], eax
        jns public_6363658
        mov eax, dword ptr ss : [esp+0x78]
        mov edi, dword ptr ss : [esp+0x70]
        push eax
        push 2
        push edi
        push 0
        call public_6352a90
        test eax, eax
        je public_636365c
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x5C
        ret 0x14
        public_6363658 : nop
        mov edi, dword ptr ss : [esp+0x70]
        public_636365c : nop
        mov esi, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x78]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        push eax
        call public_635b940
        add esp, 0xC
        lea ecx, ss:[esp+0x2C]
        call public_6347ef0
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ss:[esp+0x30]
        push edx
        call public_634d9d0
        mov ebx, dword ptr ss : [esp+0x7C]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, dword ptr ds : [ebx+8]
        call public_634d970
        fld dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi]
        and eax, 0xFFFF
        shl eax, 4
        add eax, edx
        mov edx, dword ptr ss : [esp+0x74]
        fmul dword ptr ds : [edx+8]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [edx]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [edx+4]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ds : [eax+8]
        faddp 
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp]
        faddp 
        fsubp 
        fstp dword ptr ds : [eax+0x54]
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x4C]
        add eax, 0x60
        fstp dword ptr ds : [eax]
        mov dword ptr ds : [eax+8], ecx
        fstp dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ss : [ebp]
        fld dword ptr ds : [ecx+0x54]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_636375b
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_63a5498]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_63a5498]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x24], eax
        fstp dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        public_636375b : nop
        fld dword ptr ds : [ecx+0x54]
        mov dword ptr ss : [esp+0x14], 0
        fsub dword ptr ds : [ecx+0x50]
        mov dword ptr ss : [esp+0x10], 0
        fstp dword ptr ds : [ecx+0x54]
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [ebx+8]
        fld dword ptr ds : [ecx+0x5C]
        add eax, 0x5C
        fsub dword ptr ds : [eax]
        add ecx, 0x5C
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        mov ecx, edi
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [ebp]
        fxch 
        and ecx, 0xC
        fmul dword ptr ds : [eax+0x64]
        fxch 
        fmul dword ptr ds : [eax+0x68]
        faddp 
        fxch 
        fmul dword ptr ds : [eax+0x60]
        faddp 
        fstp dword ptr ds : [eax+0x58]
        mov esi, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ebx]
        mov ebx, dword ptr ds : [ecx+public_63ee4f0]
        and esi, 0xFFFF
        add ebx, edi
        shl esi, 4
        add esi, eax
        mov eax, dword ptr ds : [ebx]
        shl eax, 1
        sar eax, 0x11
        lea eax, ds:[ebx+eax*4]
        mov ecx, eax
        and ecx, 0xC
        mov edi, dword ptr ds : [ecx+public_63ee4f0]
        public_63637db : nop
        mov ecx, dword ptr ss : [esp+0x7C]
        add edi, eax
        mov eax, dword ptr ds : [edi]
        and eax, 0xFFFF
        shl eax, 4
        add eax, dword ptr ds : [ecx]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fld st(2)
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6363875
        fld dword ptr ss : [esp+0x50]
        push ecx
        fld st(2)
        fmul st, st(3)
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        call public_6347df0
        fmul dword ptr ss : [esp+0x1C]
        add esp, 4
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        je public_636386d
        mov edx, dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], edi
        jmp public_6363879
        public_636386d : nop
        mov edx, dword ptr ss : [esp+0x74]
        fstp st(0)
        jmp public_6363879
        public_6363875 : nop
        fstp st(0)
        fstp st(0)
        public_6363879 : nop
        cmp edi, ebx
        je public_6363897
        mov eax, dword ptr ds : [edi]
        shl eax, 1
        sar eax, 0x11
        lea edi, ds:[edi+eax*4]
        mov ecx, edi
        and ecx, 0xC
        mov eax, dword ptr ds : [ecx+public_63ee4f0]
        jmp public_63637db
        public_6363897 : nop
        mov eax, dword ptr ss : [esp+0x10]
        xor edi, edi
        cmp eax, edi
        jne public_6363925
        mov ecx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x70]
        mov esi, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [eax+0x14], ecx
        mov ecx, dword ptr ss : [esp+0x80]
        mov word ptr ds : [eax+0x1A], di
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x14], esi
        mov word ptr ds : [eax+0x1A], 2
        mov eax, dword ptr ss : [ebp]
        fld dword ptr ds : [eax+0x54]
        fadd dword ptr ds : [eax+0x50]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6363916
        fld dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edx+8]
        fld dword ptr ds : [edx]
        mov edx, eax
        fstp dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp+0x10], edx
        fstp dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x7C], eax
        mov eax, dword ptr ds : [ecx+0x10]
        pop edi
        mov dword ptr ds : [eax+0x14], esi
        pop esi
        pop ebp
        mov word ptr ds : [eax+0x1A], 5
        mov eax, 3
        pop ebx
        add esp, 0x5C
        ret 0x14
        public_6363916 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x5C
        ret 0x14
        public_6363925 : nop
        mov ebx, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ss : [esp+0x7C]
        lea ecx, ss:[esp+0x5C]
        push ecx
        push ebx
        push edx
        push eax
        call public_635ae60
        mov esi, dword ptr ss : [esp+0x88]
        mov eax, esi
        and eax, 0xFFFFFFF0
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        lea edx, ss:[esp+0x70]
        inc ecx
        push edx
        shl ecx, 4
        sub eax, ecx
        push esi
        push eax
        call public_635b210
        mov edx, dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x5C]
        or edx, eax
        or edx, ecx
        add esp, 0x20
        test edx, 0x80000000
        jne public_63639a5
        mov eax, dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ss : [esp+0x10]
        push ebx
        push eax
        push esi
        lea ecx, ss:[esp+0x68]
        push ecx
        push edx
        mov ecx, ebp
        call public_6363620
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x5C
        ret 0x14
        public_63639a5 : nop
        lea ecx, ss:[esp+0x3C]
        mov edx, 3
        public_63639ae : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_63639be
        inc edi
        public_63639be : nop
        add ecx, 4
        dec edx
        jne public_63639ae
        cmp edi, 1
        jne public_63639f4
        mov ecx, esi
        xor edx, edx
        lea edi, ss:[esp+0x3C]
        public_63639d1 : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6363a4f
        mov eax, ecx
        and eax, 0xC
        add ecx, dword ptr ds : [eax+public_63ee4e0]
        inc edx
        add edi, 4
        cmp edx, 3
        jl public_63639d1
        public_63639f4 : nop
        mov dword ptr ss : [esp+0x74], 0
        mov dword ptr ss : [esp+0x78], 0x60AD78EC
        lea edi, ss:[esp+0x3C]
        mov ebx, 3
        public_6363a0d : nop
        fld dword ptr ds : [edi]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        je public_6363a6e
        mov ecx, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        push esi
        push eax
        call public_635bdd0
        fcom dword ptr ss : [esp+0x88]
        add esp, 0x10
        fnstsw ax
        test ah, 1
        je public_6363a6c
        fstp dword ptr ss : [esp+0x78]
        mov dword ptr ss : [esp+0x74], esi
        jmp public_6363a6e
        public_6363a4f : nop
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x10]
        push ebx
        push edx
        push ecx
        push eax
        mov ecx, ebp
        call public_6363ab0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x5C
        ret 0x14
        public_6363a6c : nop
        fstp st(0)
        public_6363a6e : nop
        mov ecx, esi
        and ecx, 0xC
        add esi, dword ptr ds : [ecx+public_63ee4e0]
        add edi, 4
        dec ebx
        jne public_6363a0d
        mov edx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x74]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        push edx
        mov ecx, ebp
        call public_6363ab0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x5C
        ret 0x14
        UNREACHABLE_TRAP(0x6363620)
    }
}

#undef public_6363658
#undef public_636365c
#undef public_636375b
#undef public_63637db
#undef public_636386d
#undef public_6363875
#undef public_6363879
#undef public_6363897
#undef public_6363916
#undef public_6363925
#undef public_63639a5
#undef public_63639ae
#undef public_63639be
#undef public_63639d1
#undef public_63639f4
#undef public_6363a0d
#undef public_6363a4f
#undef public_6363a6c
#undef public_6363a6e
