#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_51ba20);
CLANG_FORWARD_PROC_SYMBOL(public_51ec80);
CLANG_FORWARD_PROC_SYMBOL(public_51efc0);
CLANG_FORWARD_PROC_SYMBOL(public_51f140);
CLANG_FORWARD_PROC_SYMBOL(public_5201d0);
CLANG_FORWARD_PROC_SYMBOL(public_524730);
CLANG_FORWARD_PROC_SYMBOL(public_524740);
CLANG_FORWARD_PROC_SYMBOL(public_5247f0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_51ba95 _public_51ba95
#define public_51baa0 _public_51baa0
#define public_51bba8 _public_51bba8
#define public_51bbb4 _public_51bbb4
#define public_51bbcd _public_51bbcd
#define public_51bc11 _public_51bc11
#define public_51bc23 _public_51bc23
#define public_51bc56 _public_51bc56
#define public_51bc68 _public_51bc68
#define public_51bc86 _public_51bc86
#define public_51bca6 _public_51bca6
#define public_51bd63 _public_51bd63
#define public_51bd72 _public_51bd72
#define public_51bd97 _public_51bd97
#define public_51bdba _public_51bdba
#define public_51bdbc _public_51bdbc
#define public_51bdc7 _public_51bdc7
#define public_51bdd4 _public_51bdd4
#define public_51bde8 _public_51bde8

PROC_DECLARE(0x51ba20, internal_51ba20, public_51ba20);
extern "C" NAKED register_t __cdecl internal_51ba20()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x68
        fld dword ptr ds : [public_6164d0]
        push ebx
        fmul dword ptr ds : [public_6164d0]
        push ebp
        push esi
        push edi
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [public_6164d0]
        push 0x25
        fmul qword ptr ds : [public_5cbf58]
        mov ebx, ecx
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51bde8
        push 0x2C
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_51bde8
        call public_5201d0
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_51bde8
        jmp public_51baa0
        public_51ba95 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea esp, ss:[esp]
        public_51baa0 : nop
        mov esi, dword ptr ds : [eax+8]
        mov edi, dword ptr ds : [esi+0x1C]
        mov ecx, esi
        call public_524730
        mov ebp, eax
        cmp ebp, 1
        mov dword ptr ss : [esp+0x28], ebp
        jne public_51bc68
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [esp+0x50], edx
        mov dword ptr ss : [esp+0x54], eax
        call dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [eax+8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x40]
        mov eax, 0x5F3759DF
        fmul dword ptr ss : [esp+0x40]
        mov ecx, edi
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        faddp 
        fst dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edi]
        fmul dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x3C]
        push eax
        fmul st, st(1)
        fmul dword ptr ds : [public_5c75e0]
        fsubr dword ptr ds : [public_5ca220]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        fdiv dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        call dword ptr ds : [edx+0x40]
        fld dword ptr ss : [esp+0x18]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jp public_51bba8
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_51bbb4
        public_51bba8 : nop
        fsubr dword ptr ss : [esp+0x18]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        public_51bbb4 : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_51bbcd
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], edx
        public_51bbcd : nop
        fld dword ptr ss : [esp+0x10]
        push 0x10
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 5
        jp public_51bc23
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51bc11
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ecx
        push eax
        mov ecx, offset public_675360
        mov dword ptr ds : [eax], offset public_5dc034
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0xC], 0
        call public_51efc0
        jmp public_51bdd4
        public_51bc11 : nop
        xor eax, eax
        push eax
        mov ecx, offset public_675360
        call public_51efc0
        jmp public_51bdd4
        public_51bc23 : nop
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51bc56
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        mov ecx, offset public_675360
        mov dword ptr ds : [eax], offset public_5dc034
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+0xC], 0
        call public_51f140
        jmp public_51bdd4
        public_51bc56 : nop
        xor eax, eax
        push eax
        mov ecx, offset public_675360
        call public_51f140
        jmp public_51bdd4
        public_51bc68 : nop
        mov eax, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ds : [ebx]
        push ebx
        mov dword ptr ss : [esp+0x28], eax
        call dword ptr ds : [ecx+0x40]
        xor edi, edi
        test ebp, ebp
        mov dword ptr ss : [esp+0x18], eax
        jle public_51bdd4
        public_51bc86 : nop
        push edi
        lea edx, ss:[esp+0x58]
        push edx
        mov ecx, esi
        call public_524740
        mov eax, dword ptr ds : [public_675240]
        test eax, eax
        jne public_51bca6
        call public_5b73e0
        mov dword ptr ds : [public_675240], eax
        public_51bca6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x54]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        lea edx, ss:[esp+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov ecx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [esp+0x68]
        mov ebp, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x70], ecx
        push edi
        mov ecx, esi
        mov dword ptr ss : [esp+0x70], eax
        mov dword ptr ss : [esp+0x78], edx
        call public_5247f0
        push ecx
        fstp dword ptr ss : [esp]
        lea eax, ss:[esp+0x70]
        push eax
        push ebx
        call dword ptr ss : [ebp+0x3C]
        cmp ax, 3
        jb public_51bdc7
        mov eax, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x54]
        fsub dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x58]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x5C]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp qword ptr ss : [esp+0x30]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fcomp qword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 5
        jp public_51bd72
        push 0x10
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51bd63
        fld qword ptr ss : [esp+0x30]
        push eax
        mov ecx, offset public_675360
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax], offset public_5dc034
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0xC], edi
        call public_51f140
        jmp public_51bdc7
        public_51bd63 : nop
        xor eax, eax
        push eax
        mov ecx, offset public_675360
        call public_51f140
        jmp public_51bdc7
        public_51bd72 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_51bd97
        fld dword ptr ss : [esp+0x14]
        fsub qword ptr ss : [esp+0x30]
        fmul qword ptr ds : [public_5dc028]
        fadd dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp+0x30]
        public_51bd97 : nop
        push 0x10
        call public_51ec80
        add esp, 4
        test eax, eax
        je public_51bdba
        fld qword ptr ss : [esp+0x30]
        mov dword ptr ds : [eax], offset public_5dc034
        fstp dword ptr ds : [eax+4]
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ds : [eax+0xC], edi
        jmp public_51bdbc
        public_51bdba : nop
        xor eax, eax
        public_51bdbc : nop
        push eax
        mov ecx, offset public_675360
        call public_51efc0
        public_51bdc7 : nop
        mov eax, dword ptr ss : [esp+0x28]
        inc edi
        cmp edi, eax
        jl public_51bc86
        public_51bdd4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], eax
        jne public_51ba95
        public_51bde8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x51ba20)
    }
}

#undef public_51ba95
#undef public_51baa0
#undef public_51bba8
#undef public_51bbb4
#undef public_51bbcd
#undef public_51bc11
#undef public_51bc23
#undef public_51bc56
#undef public_51bc68
#undef public_51bc86
#undef public_51bca6
#undef public_51bd63
#undef public_51bd72
#undef public_51bd97
#undef public_51bdba
#undef public_51bdbc
#undef public_51bdc7
#undef public_51bdd4
#undef public_51bde8
