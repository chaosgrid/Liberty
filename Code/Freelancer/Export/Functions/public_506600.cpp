#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_506600);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_PROC_SYMBOL(public_5b806a);

#define public_506723 _public_506723
#define public_50672b _public_50672b
#define public_506740 _public_506740
#define public_506755 _public_506755
#define public_506780 _public_506780
#define public_5067b0 _public_5067b0
#define public_5067cf _public_5067cf
#define public_5067d3 _public_5067d3
#define public_506814 _public_506814
#define public_506852 _public_506852
#define public_5068f1 _public_5068f1
#define public_50690a _public_50690a
#define public_506911 _public_506911
#define public_50692f _public_50692f
#define public_506950 _public_506950
#define public_506962 _public_506962
#define public_506989 _public_506989
#define public_50698d _public_50698d
#define public_5069e0 _public_5069e0
#define public_506a40 _public_506a40
#define public_506b30 _public_506b30
#define public_506b32 _public_506b32
#define public_506b49 _public_506b49
#define public_506cab _public_506cab

PROC_DECLARE(0x506600, internal_506600, public_506600);
extern "C" NAKED register_t __cdecl internal_506600()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x68
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0xE0]
        push eax
        call public_5b7e1d
        xor ebp, ebp
        mov dword ptr ds : [edi+0xE0], ebp
        mov dword ptr ds : [edi+0xDC], ebp
        fld dword ptr ds : [public_6132dc]
        fcomp qword ptr ds : [public_5d5b58]
        add esp, 4
        fnstsw ax
        test ah, 5
        jnp public_506cab
        mov ecx, dword ptr ds : [edi+0x20]
        cmp ecx, ebp
        je public_506cab
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        fld dword ptr ds : [public_6132dc]
        fsubr qword ptr ds : [public_5c89b8]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        fld st(0)
        mov dword ptr ss : [esp+0x48], ecx
        fmulp 
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], eax
        fsubr dword ptr ds : [public_5c75dc]
        fld dword ptr ds : [public_5c75dc]
        fsub st, st(1)
        fld dword ptr ds : [public_6132e0]
        fmul st, st(1)
        fadd st, st(2)
        fmul dword ptr ds : [edi+0xA4]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [public_5c75dc]
        fsub dword ptr ds : [public_6132dc]
        fmul dword ptr ds : [public_6132e4]
        fadd dword ptr ds : [public_6132dc]
        fstp dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_6132e8]
        fadd st, st(1)
        fmul dword ptr ds : [edi+0xB4]
        fstp dword ptr ds : [edi+0xB8]
        fstp st(0)
        fild dword ptr ds : [edi+0xC4]
        fmul dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        fild dword ptr ds : [edi+0xC0]
        mov ebx, eax
        mov dword ptr ss : [esp+0x1C], ebx
        fmul dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x24], eax
        cmp dword ptr ds : [edi+0xBC], ebp
        jle public_506cab
        mov edx, dword ptr ds : [edi+0xA0]
        fld dword ptr ds : [public_5c7474]
        cmp edx, ebp
        jle public_50672b
        lea eax, ds:[edi+0x80]
        mov ecx, edx
        public_506723 : nop
        fadd dword ptr ds : [eax]
        add eax, 4
        dec ecx
        jne public_506723
        public_50672b : nop
        xor ecx, ecx
        cmp edx, ebp
        jle public_506755
        fdivr dword ptr ds : [public_5c75dc]
        lea eax, ds:[edi+0x80]
        lea ecx, ds:[ecx]
        public_506740 : nop
        fld st(0)
        inc ecx
        fmul dword ptr ds : [eax]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov edx, dword ptr ds : [edi+0xA0]
        cmp ecx, edx
        jl public_506740
        public_506755 : nop
        mov eax, dword ptr ds : [edi+0xBC]
        fstp st(0)
        lea ecx, ds:[eax-1]
        mov dword ptr ss : [esp+0x28], ecx
        fild dword ptr ss : [esp+0x28]
        xor esi, esi
        cmp eax, 1
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x10]
        jne public_506780
        mov esi, ebx
        jmp public_506814
        public_506780 : nop
        xor ebx, ebx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], ebx
        jle public_506814
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x20]
        fild dword ptr ss : [esp+0x24]
        fstp qword ptr ss : [esp+0x30]
        fild dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x28]
        lea esp, ss:[esp]
        public_5067b0 : nop
        fild dword ptr ss : [esp+0x14]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_5067cf
        fsub dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        fsubr dword ptr ds : [public_5c75dc]
        jmp public_5067d3
        public_5067cf : nop
        fmul dword ptr ss : [esp+0x20]
        public_5067d3 : nop
        fld qword ptr ds : [public_5c89b8]
        sub esp, 8
        fsub st, st(1)
        fmul qword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(2)
        faddp 
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        fstp st(0)
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        add esi, eax
        mov eax, dword ptr ds : [edi+0xBC]
        inc ebx
        cmp ebx, eax
        mov dword ptr ss : [esp+0x14], ebx
        jl public_5067b0
        public_506814 : nop
        lea eax, ds:[esi+2]
        mov dword ptr ds : [edi+0xDC], eax
        shl eax, 5
        push eax
        call public_5b7e84
        mov ecx, dword ptr ds : [edi+0xDC]
        add esp, 4
        cmp ecx, ebp
        mov dword ptr ds : [edi+0xE0], eax
        mov dword ptr ss : [esp+0x18], ebp
        jle public_50692f
        mov ebp, dword ptr ds : [public_5c71dc]
        mov dword ptr ss : [esp+0x40], 0
        lea esi, ds:[eax+0x14]
        public_506852 : nop
        mov edx, dword ptr ds : [edi+0xCC]
        mov eax, dword ptr ds : [edi+0xC8]
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x20], eax
        call ebp
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5caeec]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x20]
        fmulp 
        fadd dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x2C]
        fstp dword ptr ds : [esi-8]
        call ebp
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        mov ecx, esi
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5c97f8]
        fld st(0)
        fsin 
        fstp dword ptr ss : [esp+0x38]
        mov edx, dword ptr ss : [esp+0x38]
        fcos 
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        call ebp
        mov edx, dword ptr ds : [edi+0xA0]
        mov dword ptr ss : [esp+0x28], eax
        fild dword ptr ss : [esp+0x28]
        xor ecx, ecx
        test edx, edx
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [public_5c7474]
        jle public_506911
        lea ebx, ds:[edi+0x80]
        public_5068f1 : nop
        fadd dword ptr ds : [ebx]
        fld dword ptr ss : [esp+0x28]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_50690a
        inc ecx
        add ebx, 4
        cmp ecx, edx
        jl public_5068f1
        jmp public_506911
        public_50690a : nop
        mov eax, dword ptr ds : [edi+ecx*4+0x60]
        mov dword ptr ds : [esi-4], eax
        public_506911 : nop
        mov eax, dword ptr ss : [esp+0x18]
        fstp st(0)
        mov ecx, dword ptr ds : [edi+0xDC]
        inc eax
        add esi, 0x20
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jl public_506852
        xor ebp, ebp
        public_50692f : nop
        mov eax, dword ptr ds : [edi+0xBC]
        cmp eax, ebp
        mov esi, dword ptr ds : [edi+0xE0]
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], ebp
        jle public_506b49
        nop 
        public_506950 : nop
        cmp eax, 1
        jne public_506962
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], ebp
        jmp public_5069e0
        public_506962 : nop
        fild dword ptr ss : [esp+0x14]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_506989
        fsub dword ptr ss : [esp+0x10]
        fdiv dword ptr ss : [esp+0x10]
        fsubr dword ptr ds : [public_5c75dc]
        jmp public_50698d
        public_506989 : nop
        fdiv dword ptr ss : [esp+0x10]
        public_50698d : nop
        fld qword ptr ds : [public_5c89b8]
        sub esp, 8
        fsub st, st(1)
        fimul dword ptr ss : [esp+0x2C]
        fild dword ptr ss : [esp+0x24]
        fmul st, st(2)
        faddp 
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        fstp st(0)
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x10]
        mov ebp, eax
        mov dword ptr ss : [esp+0x20], ebp
        fnstsw ax
        test ah, 0x41
        jne public_5069e0
        fild dword ptr ss : [esp+0x20]
        fdivr dword ptr ds : [public_5c8a5c]
        fstp dword ptr ss : [esp+0x28]
        public_5069e0 : nop
        fild dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [public_5c75dc]
        fild dword ptr ds : [edi+0xBC]
        fadd dword ptr ds : [public_5c75dc]
        fdivp 
        fadd st(0), st
        fsub dword ptr ds : [public_5c75dc]
        fmul dword ptr ds : [edi+0xD0]
        call public_5b806a
        xor ebx, ebx
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], ebx
        jle public_506b30
        fild dword ptr ss : [esp+0x20]
        fstp qword ptr ss : [esp+0x38]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x20]
        fsin 
        fstp qword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x4C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x2C]
        nop 
        lea esp, ss:[esp]
        public_506a40 : nop
        fild dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x64], edx
        fmul qword ptr ds : [public_5c97f8]
        lea edx, ss:[esp+0x60]
        mov dword ptr ds : [esi+4], ecx
        push edx
        fdiv qword ptr ss : [esp+0x3C]
        lea edx, ss:[esp+0x70]
        push edx
        fadd dword ptr ss : [esp+0x30]
        fld st(0)
        fcos 
        fmul qword ptr ss : [esp+0x38]
        fst dword ptr ds : [esi]
        fxch 
        fsin 
        fmul qword ptr ss : [esp+0x38]
        fst dword ptr ss : [esp+0x20]
        fstp dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [edi+0x20]
        fld dword ptr ss : [esp+0x50]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x68]
        fstp st(0)
        fld dword ptr ss : [esp+0x58]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x44]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x50]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [eax+8], ecx
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fld st(2)
        fmulp st(3), st
        fld st(1)
        fmul st, st(2)
        faddp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fxch st(2)
        fsqrt 
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [edi+0xD4]
        fmul dword ptr ds : [edi+0xA4]
        fsubr st, st(1)
        fdivrp 
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        add esi, 0x20
        inc ebx
        cmp ebx, ebp
        fstp dword ptr ds : [esi-0x18]
        mov dword ptr ss : [esp+0x18], ebx
        jl public_506a40
        jmp public_506b32
        public_506b30 : nop
        fstp st(0)
        public_506b32 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0xBC]
        inc ecx
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        jl public_506950
        public_506b49 : nop
        fld dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [edi+0x20]
        fst dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x60]
        fstp dword ptr ss : [esp+0x60]
        push eax
        fld dword ptr ss : [esp+0x50]
        lea eax, ss:[esp+0x70]
        fadd dword ptr ds : [public_5c75dc]
        push eax
        fstp dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x58]
        fst dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x70]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x44]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x48]
        mov ecx, esi
        add esi, 0x20
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [esi-0x18]
        fld dword ptr ds : [esi-0x1C]
        mov ecx, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi-0x20]
        mov dword ptr ss : [esp+0x60], eax
        fld st(2)
        lea eax, ss:[esp+0x60]
        fmulp st(3), st
        mov dword ptr ss : [esp+0x68], ecx
        fld st(1)
        push eax
        fmul st, st(2)
        lea eax, ss:[esp+0x70]
        push eax
        faddp st(3), st
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fxch st(2)
        fsqrt 
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [edi+0xD4]
        fmul dword ptr ds : [edi+0xA4]
        fsubr st, st(1)
        fdivrp 
        fld st(0)
        fmul dword ptr ds : [esi-0x20]
        fstp dword ptr ds : [esi-0x20]
        fld st(0)
        fmul dword ptr ds : [esi-0x1C]
        fstp dword ptr ds : [esi-0x1C]
        fmul dword ptr ds : [esi-0x18]
        fstp dword ptr ds : [esi-0x18]
        mov ecx, dword ptr ds : [edi+0x20]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x6C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x44]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x48]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x54]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x50]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [ecx+8], edx
        fld dword ptr ds : [esi+8]
        fld dword ptr ds : [esi+4]
        fld dword ptr ds : [esi]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [edi+0xD4]
        fmul dword ptr ds : [edi+0xA4]
        fsubr st, st(1)
        fdivrp 
        fld st(0)
        fmul dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fld st(0)
        fmul dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        fmul dword ptr ds : [esi+8]
        fstp dword ptr ds : [esi+8]
        public_506cab : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x506600)
    }
}

#undef public_506723
#undef public_50672b
#undef public_506740
#undef public_506755
#undef public_506780
#undef public_5067b0
#undef public_5067cf
#undef public_5067d3
#undef public_506814
#undef public_506852
#undef public_5068f1
#undef public_50690a
#undef public_506911
#undef public_50692f
#undef public_506950
#undef public_506962
#undef public_506989
#undef public_50698d
#undef public_5069e0
#undef public_506a40
#undef public_506b30
#undef public_506b32
#undef public_506b49
#undef public_506cab
