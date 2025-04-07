#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6289c20);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62a33e0);
CLANG_FORWARD_PROC_SYMBOL(public_62c47c0);
CLANG_FORWARD_PROC_SYMBOL(public_62c9810);
CLANG_FORWARD_PROC_SYMBOL(public_62ca1b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d4e50);
CLANG_FORWARD_PROC_SYMBOL(public_62e1aa0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6010);
CLANG_FORWARD_PROC_SYMBOL(public_62e6200);
CLANG_FORWARD_PROC_SYMBOL(public_62ed5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62c9db6 _public_62c9db6
#define public_62c9dcc _public_62c9dcc
#define public_62c9e0d _public_62c9e0d
#define public_62c9f31 _public_62c9f31
#define public_62c9f51 _public_62c9f51
#define public_62c9f55 _public_62c9f55
#define public_62c9fa4 _public_62c9fa4
#define public_62ca0e3 _public_62ca0e3
#define public_62ca12b _public_62ca12b
#define public_62ca172 _public_62ca172
#define public_62ca17a _public_62ca17a
#define public_62ca19f _public_62ca19f

PROC_DECLARE(0x62c9d20, internal_62c9d20, public_62c9d20);
extern "C" NAKED register_t __cdecl internal_62c9d20()
{
    __asm
    {
        sub esp, 0x94
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x24]
        push edi
        add ecx, 0x142C
        mov ebx, 3
        call public_62ed5a0
        mov edi, eax
        test edi, edi
        je public_62ca19f
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        lea ebx, ds:[esi+0x70]
        call dword ptr ds : [eax+0x20]
        push eax
        mov ecx, ebx
        call public_62d4e50
        push edi
        call public_62e6200
        add esp, 4
        test eax, 0x70000
        jne public_62c9db6
        mov ecx, dword ptr ds : [esi+0x24]
        add ecx, 0x14FC
        call public_62ca1b0
        test eax, 0x70000
        je public_62c9db6
        mov edx, dword ptr ds : [edi]
        lea eax, ss:[esp+0x68]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+4]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_639fa48]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_62c9dcc
        public_62c9db6 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], 3
        pop esi
        mov eax, 3
        pop ebx
        add esp, 0x94
        ret 
        public_62c9dcc : nop
        mov ebx, dword ptr ds : [esi+0x24]
        add ebx, 0x14FC
        push ebp
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], 1
        call public_62c47c0
        mov eax, dword ptr ds : [esi+0x48]
        sub eax, 0
        lea ebp, ds:[ebx+0xC]
        je public_62c9f31
        dec eax
        je public_62c9e0d
        dec eax
        jne public_62ca17a
        push edi
        push 0
        mov ecx, esi
        call public_62c9810
        jmp public_62ca17a
        public_62c9e0d : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        push ebp
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6288800
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        mov edx, 0x5F3759DF
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x24]
        fmul dword ptr ss : [esp+0x24]
        add eax, 0x14FC
        add esp, 0xC
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fst dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        fdiv dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        fstp st(0)
        call dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x48]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 5
        jp public_62ca17a
        push edi
        call public_62e6010
        fadd dword ptr ds : [esi+0x34]
        fcomp dword ptr ss : [esp+0x14]
        add esp, 4
        fnstsw ax
        test ah, 5
        jp public_62ca17a
        push edi
        push 0
        mov ecx, esi
        call public_62c9810
        jmp public_62ca17a
        public_62c9f31 : nop
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        push eax
        call public_62e1aa0
        fcomp qword ptr ds : [public_639e5c0]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_62c9f51
        mov ecx, dword ptr ds : [esi+0x58]
        push ecx
        jmp public_62c9f55
        public_62c9f51 : nop
        mov edx, dword ptr ds : [esi+0x5C]
        push edx
        public_62c9f55 : nop
        lea ecx, ds:[esi+0x70]
        call public_62a33e0
        fld dword ptr ds : [esi+0x44]
        fmul qword ptr ds : [public_639fa60]
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x54], 0
        mov dword ptr ss : [esp+0x58], 0
        add eax, 0x14FC
        fstp dword ptr ss : [esp+0x5C]
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        mov ebx, eax
        mov eax, dword ptr ds : [public_63fc538]
        test eax, eax
        jne public_62c9fa4
        call public_6391cf0
        mov dword ptr ds : [public_63fc538], eax
        public_62c9fa4 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        push ebx
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [esi+0x24]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+8]
        fld dword ptr ds : [eax+0x14]
        sub esp, 0xC
        fld dword ptr ds : [eax+0x20]
        lea ecx, ss:[esp+0x54]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x50]
        sub esp, 0xC
        fmul dword ptr ds : [public_639f7a4]
        lea ecx, ss:[esp+0x84]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_639f7a4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [public_639f7a4]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea eax, ss:[esp+0x78]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        call public_62887d0
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+0xEC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        call dword ptr ds : [edx+8]
        push 1
        lea ecx, ss:[esp+0x88]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx]
        push eax
        call public_6289c20
        add esp, 0x14
        test eax, eax
        jle public_62ca0e3
        fld dword ptr ss : [esp+0x1C]
        sub esp, 0xC
        fsub dword ptr ss : [esp+0x9C]
        lea ecx, ss:[esp+0x30]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x94]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        jmp public_62ca12b
        public_62ca0e3 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx]
        fld dword ptr ss : [ebp+8]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        public_62ca12b : nop
        faddp 
        mov ecx, 0x5F3759DF
        fst dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x10]
        fmulp 
        fcomp dword ptr ds : [esi+0x2C]
        fnstsw ax
        test ah, 5
        jp public_62ca172
        push edi
        push 1
        mov ecx, esi
        call public_62c9810
        public_62ca172 : nop
        mov dword ptr ss : [esp+0x20], 0
        public_62ca17a : nop
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x70]
        lea ecx, ds:[esi+0x70]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0xE8]
        lea ecx, ds:[esi+0xE8]
        push eax
        call dword ptr ds : [edx+4]
        mov ebx, dword ptr ss : [esp+0x20]
        pop ebp
        public_62ca19f : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        mov eax, ebx
        pop ebx
        add esp, 0x94
        ret 
        UNREACHABLE_TRAP(0x62c9d20)
    }
}

#undef public_62c9db6
#undef public_62c9dcc
#undef public_62c9e0d
#undef public_62c9f31
#undef public_62c9f51
#undef public_62c9f55
#undef public_62c9fa4
#undef public_62ca0e3
#undef public_62ca12b
#undef public_62ca172
#undef public_62ca17a
#undef public_62ca19f
