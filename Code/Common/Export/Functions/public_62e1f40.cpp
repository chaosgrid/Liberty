#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6275ee0);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62c47a0);
CLANG_FORWARD_PROC_SYMBOL(public_62c5a70);
CLANG_FORWARD_PROC_SYMBOL(public_62dc410);
CLANG_FORWARD_PROC_SYMBOL(public_62e0480);
CLANG_FORWARD_PROC_SYMBOL(public_62e04a0);
CLANG_FORWARD_PROC_SYMBOL(public_62e1680);
CLANG_FORWARD_PROC_SYMBOL(public_62e1f40);
CLANG_FORWARD_PROC_SYMBOL(public_62e2590);
CLANG_FORWARD_PROC_SYMBOL(public_62e25c0);
CLANG_FORWARD_PROC_SYMBOL(public_62e25f0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_636cf40);

#define public_62e1fd2 _public_62e1fd2
#define public_62e1fe1 _public_62e1fe1
#define public_62e2075 _public_62e2075
#define public_62e208a _public_62e208a
#define public_62e2144 _public_62e2144
#define public_62e214f _public_62e214f
#define public_62e2201 _public_62e2201
#define public_62e2287 _public_62e2287
#define public_62e22a0 _public_62e22a0
#define public_62e22cd _public_62e22cd
#define public_62e22e6 _public_62e22e6
#define public_62e2364 _public_62e2364
#define public_62e236f _public_62e236f
#define public_62e246f _public_62e246f
#define public_62e2548 _public_62e2548
#define public_62e2570 _public_62e2570

PROC_DECLARE(0x62e1f40, internal_62e1f40, public_62e1f40);
extern "C" NAKED register_t __cdecl internal_62e1f40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+0xC]
        sub esp, 0x98
        push esi
        push edi
        lea eax, ss:[esp+0xC]
        push eax
        call public_62c5a70
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        xor eax, eax
        fld dword ptr ss : [esp+0x14]
        mov ecx, 9
        fmul dword ptr ss : [esp+0x14]
        lea edi, ss:[esp+0x58]
        rep stosd
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fcomp qword ptr ds : [public_639c2b8]
        fnstsw ax
        test ah, 5
        jnp public_62e2570
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x38], eax
        call public_6347e60
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e1fd2
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_62dc410
        jmp public_62e1fe1
        public_62e1fd2 : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x3C]
        call public_636cf40
        public_62e1fe1 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov esi, dword ptr ss : [esp+0xA8]
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0xC], edx
        mov edx, dword ptr ds : [esi+0x20]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0x14]
        push edx
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_628b030
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        call public_62c47a0
        fstp st(0)
        mov eax, dword ptr ss : [esp+0xB8]
        add esp, 8
        test eax, eax
        je public_62e2201
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x34], edx
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov dword ptr ss : [esp+0x40], eax
        call public_62c47a0
        fcom dword ptr ds : [public_639a1d0]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62e2075
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        jmp public_62e208a
        public_62e2075 : nop
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e208a
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        public_62e208a : nop
        fabs 
        fcomp qword ptr ds : [public_639fd40]
        fnstsw ax
        test ah, 5
        jp public_62e2201
        fld dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0xC]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x30]
        fsubp 
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x2C], edx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x50], ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x54], edx
        call public_6347e60
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_639e6b8]
        lea ecx, ss:[esp+0x4C]
        fnstsw ax
        test ah, 0x41
        jne public_62e2144
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_62dc410
        jmp public_62e214f
        public_62e2144 : nop
        push 0
        push 0
        push 0
        call public_636cf40
        public_62e214f : nop
        fld dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x50]
        fld dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x54]
        fmul dword ptr ss : [esp+0x10]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x48], ecx
        lea ecx, ss:[esp+0x30]
        fsubp 
        mov dword ptr ss : [esp+0x4C], edx
        mov dword ptr ss : [esp+0x50], eax
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x58]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x20]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x58], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x64], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x70], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x5C], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x68], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x74], eax
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x60], ecx
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x78], eax
        jmp public_62e2570
        public_62e2201 : nop
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ds : [esi+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x48], eax
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_628b030
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        mov dword ptr ss : [esp+0x28], eax
        call public_62c47a0
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_639a1d0]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62e2287
        mov dword ptr ss : [esp+8], 0x3F800000
        jmp public_62e22a0
        public_62e2287 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e22a0
        mov dword ptr ss : [esp+8], 0xBF800000
        public_62e22a0 : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        call public_62c47a0
        fst dword ptr ss : [esp+0x50]
        fcomp dword ptr ds : [public_639a1d0]
        add esp, 8
        fnstsw ax
        test ah, 0x41
        jne public_62e22cd
        mov dword ptr ss : [esp+0x48], 0x3F800000
        jmp public_62e22e6
        public_62e22cd : nop
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e22e6
        mov dword ptr ss : [esp+0x48], 0xBF800000
        public_62e22e6 : nop
        fld dword ptr ss : [esp+0x48]
        fabs 
        fcomp qword ptr ds : [public_63a04e0]
        fnstsw ax
        test ah, 5
        jp public_62e246f
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        call public_6288830
        add esp, 0xC
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_62e2590
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x34], ecx
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x38], edx
        call public_6347e60
        fst dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_639e6b8]
        lea ecx, ss:[esp+0x30]
        fnstsw ax
        test ah, 0x41
        jne public_62e2364
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_62dc410
        jmp public_62e236f
        public_62e2364 : nop
        push 0
        push 0
        push 0
        call public_636cf40
        public_62e236f : nop
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x1C], edx
        push ecx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x24], eax
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_62e25f0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x48], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x4C], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x48]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov dword ptr ss : [esp+0x58], eax
        call public_62e1680
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x50], ecx
        mov edx, dword ptr ds : [eax+4]
        add esp, 0x14
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x40], edx
        mov eax, dword ptr ds : [eax+8]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x48], eax
        call public_62e0480
        push eax
        lea edx, ss:[esp+0x40]
        push edx
        call public_62c47a0
        fcomp dword ptr ds : [public_6399408]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_62e2548
        push 0xBF800000
        lea ecx, ss:[esp+0x40]
        call public_62e25c0
        push 0xBF800000
        lea ecx, ss:[esp+0x1C]
        call public_62e25c0
        lea eax, ss:[esp+0x3C]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_62e25f0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov dword ptr ss : [esp+0x34], eax
        call public_62e1680
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x30], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x20], eax
        jmp public_62e2548
        public_62e246f : nop
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6288830
        add esp, 0xC
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_62e2590
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call public_62e1680
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x48], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x50], eax
        push edx
        lea eax, ss:[esp+0x34]
        push eax
        call public_62e25f0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x30], edx
        mov eax, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x3C]
        push edx
        mov dword ptr ss : [esp+0x3C], eax
        call public_62e1680
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x34], ecx
        mov edx, dword ptr ds : [eax+4]
        add esp, 0x1C
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_62e04a0
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        call public_62c47a0
        fcomp dword ptr ds : [public_6399408]
        add esp, 8
        fnstsw ax
        test ah, 5
        jp public_62e2548
        push 0xBF800000
        lea ecx, ss:[esp+0x40]
        call public_62e25c0
        push 0xBF800000
        lea ecx, ss:[esp+0x1C]
        call public_62e25c0
        public_62e2548 : nop
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea ecx, ss:[esp+0x88]
        call public_6275ee0
        mov ecx, 9
        mov esi, eax
        lea edi, ss:[esp+0x58]
        rep movsd
        public_62e2570 : nop
        mov eax, dword ptr ss : [esp+0xA4]
        lea esi, ss:[esp+0x58]
        mov edi, eax
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        add esp, 0x98
        ret 
        UNREACHABLE_TRAP(0x62e1f40)
    }
}

#undef public_62e1fd2
#undef public_62e1fe1
#undef public_62e2075
#undef public_62e208a
#undef public_62e2144
#undef public_62e214f
#undef public_62e2201
#undef public_62e2287
#undef public_62e22a0
#undef public_62e22cd
#undef public_62e22e6
#undef public_62e2364
#undef public_62e236f
#undef public_62e246f
#undef public_62e2548
#undef public_62e2570
