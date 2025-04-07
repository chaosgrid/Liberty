#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dbfb0);
CLANG_FORWARD_PROC_SYMBOL(public_62dc3e0);
CLANG_FORWARD_PROC_SYMBOL(public_62dc410);
CLANG_FORWARD_PROC_SYMBOL(public_62dc440);
CLANG_FORWARD_PROC_SYMBOL(public_62e1330);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);

#define public_62dc058 _public_62dc058
#define public_62dc0a9 _public_62dc0a9
#define public_62dc10c _public_62dc10c
#define public_62dc165 _public_62dc165
#define public_62dc20b _public_62dc20b
#define public_62dc21a _public_62dc21a
#define public_62dc30f _public_62dc30f
#define public_62dc3bb _public_62dc3bb
#define public_62dc3cf _public_62dc3cf

PROC_DECLARE(0x62dbfb0, internal_62dbfb0, public_62dbfb0);
extern "C" NAKED register_t __cdecl internal_62dbfb0()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        mov ebx, dword ptr ss : [esp+0x5C]
        push ebp
        push esi
        push edi
        push 0x3F000000
        lea eax, ds:[ebx+0x10]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_6288830
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ds:[ebx+4]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_62887d0
        mov ebp, dword ptr ss : [esp+0x88]
        lea edx, ss:[esp+0x58]
        push edx
        lea esi, ss:[ebp+0x24]
        lea eax, ss:[esp+0x50]
        push esi
        push eax
        call public_6288800
        add esp, 0x24
        lea ecx, ss:[esp+0x34]
        call public_6347e60
        fdivr dword ptr ds : [public_639a1d0]
        lea ecx, ss:[esp+0x58]
        push ecx
        push ebx
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x4C]
        push eax
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        fstp st(0)
        call public_62e1330
        add esp, 0x10
        test eax, eax
        jne public_62dc058
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        add esp, 0x54
        ret 0x14
        public_62dc058 : nop
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x2C]
        push esi
        push edx
        call public_6288800
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x3C]
        add esp, 0xC
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62dc0a9
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x54
        ret 0x14
        public_62dc0a9 : nop
        mov eax, dword ptr ss : [esp+0x68]
        push eax
        lea ecx, ss:[esp+0x2C]
        call public_62dc410
        mov edi, dword ptr ss : [esp+0x6C]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x20]
        push edi
        push edx
        call public_6288800
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x30]
        add esp, 0xC
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x68]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62dc10c
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x54
        ret 0x14
        public_62dc10c : nop
        mov eax, dword ptr ss : [esp+0x68]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_62dc410
        push esi
        lea ecx, ss:[esp+0x14]
        push edi
        push ecx
        call public_6288800
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        add esp, 0xC
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62dc165
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x54
        ret 0x14
        public_62dc165 : nop
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x2C]
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fcomp dword ptr ds : [public_639c470]
        fnstsw ax
        test ah, 0x41
        jne public_62dc21a
        mov al, byte ptr ss : [esp+0x78]
        test al, al
        je public_62dc20b
        fld dword ptr ss : [ebp+8]
        sub esp, 0xC
        fld dword ptr ss : [ebp+0x14]
        lea ecx, ss:[esp+0x58]
        fld dword ptr ss : [ebp+0x20]
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fstp dword ptr ss : [esp+4]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fcomp dword ptr ds : [public_639e0d4]
        fnstsw ax
        test ah, 5
        jnp public_62dc21a
        public_62dc20b : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x54
        ret 0x14
        public_62dc21a : nop
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x5C]
        push eax
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_6288800
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        lea ecx, ss:[esp+0x4C]
        fld dword ptr ss : [esp+0x5C]
        push ecx
        fmul dword ptr ss : [esp+0x60]
        mov eax, 0x5F3759DF
        push esi
        faddp 
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fst dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+0x8C]
        mov edx, dword ptr ss : [esp+0x8C]
        sar edx, 1
        sub eax, edx
        lea edx, ss:[esp+0x60]
        push edx
        mov dword ptr ss : [esp+0x80], eax
        call public_6288800
        fld dword ptr ss : [esp+0x6C]
        fmul dword ptr ss : [esp+0x6C]
        mov ecx, 0x5F3759DF
        fld dword ptr ss : [esp+0x68]
        add esp, 0x18
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fst dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x78]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x78], ecx
        fld dword ptr ss : [esp+0x78]
        fmul dword ptr ss : [esp+0x78]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x78]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x68]
        fmul dword ptr ss : [esp+0x70]
        fmul dword ptr ds : [public_639dfe0]
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62dc30f
        pop edi
        pop esi
        pop ebp
        mov eax, 2
        pop ebx
        add esp, 0x54
        ret 0x14
        public_62dc30f : nop
        fld dword ptr ds : [edi+8]
        sub esp, 0xC
        fsub dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x58]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [edi+4]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edi]
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ss : [esp+0x50]
        faddp 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        faddp 
        fstp dword ptr ss : [esp+0x78]
        mov edx, dword ptr ss : [esp+0x78]
        push edx
        call public_62dc3e0
        fmul dword ptr ss : [esp+0x7C]
        add esp, 4
        fcomp dword ptr ds : [public_639fb58]
        fnstsw ax
        test ah, 0x41
        jne public_62dc3bb
        push 0x3E99999A
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call public_62dc440
        mov eax, dword ptr ss : [esp+0x84]
        push eax
        push ebx
        lea ecx, ss:[esp+0x64]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        call public_62e1330
        add esp, 0x20
        test eax, eax
        jne public_62dc3cf
        pop edi
        pop esi
        pop ebp
        mov eax, 3
        pop ebx
        add esp, 0x54
        ret 0x14
        public_62dc3bb : nop
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], ecx
        public_62dc3cf : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x54
        ret 0x14
        UNREACHABLE_TRAP(0x62dbfb0)
    }
}

#undef public_62dc058
#undef public_62dc0a9
#undef public_62dc10c
#undef public_62dc165
#undef public_62dc20b
#undef public_62dc21a
#undef public_62dc30f
#undef public_62dc3bb
#undef public_62dc3cf
