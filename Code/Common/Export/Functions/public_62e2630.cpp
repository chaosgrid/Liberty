#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62e1f40);
CLANG_FORWARD_PROC_SYMBOL(public_62e2630);
CLANG_FORWARD_PROC_SYMBOL(public_6303450);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62e2659 _public_62e2659
#define public_62e26fc _public_62e26fc
#define public_62e2747 _public_62e2747
#define public_62e2818 _public_62e2818
#define public_62e2830 _public_62e2830
#define public_62e285d _public_62e285d
#define public_62e28cc _public_62e28cc

PROC_DECLARE(0x62e2630, internal_62e2630, public_62e2630);
extern "C" NAKED register_t __cdecl internal_62e2630()
{
    __asm
    {
        sub esp, 0xA4
        push ebx
        push esi
        push edi
        xor eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x7C]
        rep stosd
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        jne public_62e2659
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e2659 : nop
        mov ebx, dword ptr ss : [esp+0xB8]
        mov ecx, dword ptr ds : [eax]
        push ebx
        lea edx, ss:[esp+0xA4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        lea eax, ss:[esp+0x2C]
        push 0x3F800000
        push eax
        call public_6303450
        fld dword ptr ss : [esp+0xC4]
        fmul dword ptr ds : [public_639c13c]
        add esp, 4
        lea ecx, ss:[esp+0x30]
        lea edx, ss:[esp+0x14]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x4C]
        fsin 
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x38]
        faddp 
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        faddp 
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp]
        push ecx
        push edx
        call public_6288830
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x58], eax
        mov eax, dword ptr ds : [public_63fca48]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x50], ecx
        mov dword ptr ss : [esp+0x54], edx
        jne public_62e26fc
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e26fc : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x48]
        push edx
        lea edx, ss:[esp+0xA4]
        push edx
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        jne public_62e2747
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e2747 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x54]
        fld dword ptr ss : [esp+0xC0]
        fcomp dword ptr ds : [public_6399408]
        mov ecx, 9
        lea esi, ss:[esp+0x58]
        lea edi, ss:[esp+0x7C]
        rep movsd
        fnstsw ax
        test ah, 0x41
        jne public_62e285d
        fld dword ptr ds : [ebx+4]
        sub esp, 0xC
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ebx+0x10]
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ebx+0x1C]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x6C]
        fld dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x84]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x84]
        push edx
        lea eax, ss:[esp+0x64]
        push eax
        call public_62e1f40
        mov esi, eax
        mov ecx, 9
        lea edi, ss:[esp+0x8C]
        add esp, 0x10
        rep movsd
        call dword ptr ds : [public_6399308]
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_63997d0]
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0xC0]
        fnstsw ax
        test ah, 5
        jp public_62e2818
        fchs 
        public_62e2818 : nop
        fld st(0)
        lea eax, ss:[esp+0x80]
        fcos 
        mov ecx, 3
        fstp dword ptr ss : [esp+0xC]
        fsin 
        mov edi, edi
        public_62e2830 : nop
        fld dword ptr ds : [eax-4]
        add eax, 0xC
        dec ecx
        fld st(1)
        fmul dword ptr ds : [eax-0xC]
        fld st(1)
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fstp dword ptr ds : [eax-0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax-0xC]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [eax-0xC]
        jne public_62e2830
        fstp st(0)
        jmp public_62e28cc
        public_62e285d : nop
        fld dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x10]
        fld dword ptr ss : [esp+0x6C]
        push ecx
        fld dword ptr ss : [esp+0x7C]
        lea edx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x44]
        fxch 
        push edx
        fchs 
        lea eax, ss:[esp+0x84]
        fstp dword ptr ss : [esp+0x24]
        push eax
        fchs 
        lea ecx, ss:[esp+0x64]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x4C]
        push ecx
        fchs 
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        call public_62e1f40
        mov ecx, 9
        mov esi, eax
        lea edi, ss:[esp+0x8C]
        add esp, 0x10
        rep movsd
        public_62e28cc : nop
        mov eax, dword ptr ss : [esp+0xB4]
        mov ecx, 9
        lea esi, ss:[esp+0x7C]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        pop ebx
        add esp, 0xA4
        ret 
        UNREACHABLE_TRAP(0x62e2630)
    }
}

#undef public_62e2659
#undef public_62e26fc
#undef public_62e2747
#undef public_62e2818
#undef public_62e2830
#undef public_62e285d
#undef public_62e28cc
