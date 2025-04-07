#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284f70);
CLANG_FORWARD_PROC_SYMBOL(public_62e28f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);
CLANG_FORWARD_PROC_SYMBOL(public_6391fce);

#define public_62e295a _public_62e295a
#define public_62e2997 _public_62e2997
#define public_62e29cd _public_62e29cd
#define public_62e29e6 _public_62e29e6
#define public_62e2a67 _public_62e2a67
#define public_62e2a69 _public_62e2a69
#define public_62e2a7c _public_62e2a7c
#define public_62e2ac6 _public_62e2ac6
#define public_62e2aed _public_62e2aed
#define public_62e2aef _public_62e2aef
#define public_62e2b23 _public_62e2b23
#define public_62e2b36 _public_62e2b36
#define public_62e2b8a _public_62e2b8a
#define public_62e2bbb _public_62e2bbb
#define public_62e2bc7 _public_62e2bc7
#define public_62e2bd6 _public_62e2bd6
#define public_62e2bd8 _public_62e2bd8

PROC_DECLARE(0x62e28f0, internal_62e28f0, public_62e28f0);
extern "C" NAKED register_t __cdecl internal_62e28f0()
{
    __asm
    {
        sub esp, 0xB0
        push ebx
        mov ebx, dword ptr ss : [esp+0xBC]
        mov eax, dword ptr ds : [ebx+0x20]
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ebx+8]
        push esi
        push edi
        push eax
        mov eax, dword ptr ds : [ebx+0x1C]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x10]
        push edx
        mov edx, dword ptr ds : [ebx+4]
        push eax
        mov eax, dword ptr ds : [ebx+0x18]
        push ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        push edx
        mov edx, dword ptr ds : [ebx]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x98]
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x44], 0
        call public_6284f70
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        jne public_62e295a
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e295a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x74]
        push edx
        mov edx, dword ptr ss : [esp+0xCC]
        push edx
        lea edx, ss:[esp+0x58]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        mov ecx, 9
        lea esi, ss:[esp+0x50]
        lea edi, ss:[esp+0x98]
        rep movsd
        jne public_62e2997
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e2997 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x98]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_6399404]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x24], eax
        fnstsw ax
        test ah, 5
        jp public_62e29cd
        mov dword ptr ss : [esp+0x24], 0xBF800000
        jmp public_62e29e6
        public_62e29cd : nop
        fld dword ptr ss : [esp+0x40]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62e29e6
        mov dword ptr ss : [esp+0x24], 0x3F800000
        public_62e29e6 : nop
        fld dword ptr ss : [esp+0x24]
        call public_6391fc2
        fadd st(0), st
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x44]
        call public_6391fce
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x48]
        call public_6391fce
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x4C]
        call public_6391fce
        fst dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fcom dword ptr ds : [public_639b984]
        fnstsw ax
        test ah, 0x41
        jne public_62e2a67
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x20]
        jmp public_62e2a69
        public_62e2a67 : nop
        fstp st(0)
        public_62e2a69 : nop
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        jne public_62e2a7c
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e2a7c : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        fabs 
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        fabs 
        fstp qword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ecx
        fcom qword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x3C], edx
        fnstsw ax
        test ah, 0x41
        je public_62e2ac6
        fstp st(0)
        fld qword ptr ss : [esp+0x28]
        public_62e2ac6 : nop
        fcom qword ptr ds : [public_639c9f0]
        fnstsw ax
        test ah, 0x41
        jne public_62e2aed
        fdivr qword ptr ds : [public_6399410]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x38]
        jmp public_62e2aef
        public_62e2aed : nop
        fstp st(0)
        public_62e2aef : nop
        fld dword ptr ss : [esp+0x3C]
        fabs 
        fcomp qword ptr ds : [public_63a0460]
        fnstsw ax
        test ah, 0x41
        jne public_62e2b23
        fld dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x3C], 0x3F800000
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        je public_62e2b23
        mov dword ptr ss : [esp+0x3C], 0xBF800000
        public_62e2b23 : nop
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        jne public_62e2b36
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e2b36 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push ebx
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x24]
        fcom dword ptr ds : [public_639d208]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_62e2b8a
        fld dword ptr ss : [esp+0x28]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x2C]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x30]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fsubr dword ptr ds : [public_639c9e8]
        jmp public_62e2bbb
        public_62e2b8a : nop
        fcom dword ptr ds : [public_639d2a0]
        fnstsw ax
        test ah, 5
        jp public_62e2bc7
        fld dword ptr ss : [esp+0x28]
        fchs 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x2C]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x30]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [public_639c9e8]
        public_62e2bbb : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        public_62e2bc7 : nop
        mov eax, dword ptr ss : [esp+0xCC]
        test eax, eax
        je public_62e2bd6
        fstp dword ptr ds : [eax]
        jmp public_62e2bd8
        public_62e2bd6 : nop
        fstp st(0)
        public_62e2bd8 : nop
        mov eax, dword ptr ss : [esp+0xC0]
        mov edi, eax
        mov dword ptr ds : [edi], ecx
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edi+8], esi
        pop edi
        pop esi
        pop ebx
        add esp, 0xB0
        ret 
        UNREACHABLE_TRAP(0x62e28f0)
    }
}

#undef public_62e295a
#undef public_62e2997
#undef public_62e29cd
#undef public_62e29e6
#undef public_62e2a67
#undef public_62e2a69
#undef public_62e2a7c
#undef public_62e2ac6
#undef public_62e2aed
#undef public_62e2aef
#undef public_62e2b23
#undef public_62e2b36
#undef public_62e2b8a
#undef public_62e2bbb
#undef public_62e2bc7
#undef public_62e2bd6
#undef public_62e2bd8
