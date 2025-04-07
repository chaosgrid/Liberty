#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62dc410);
CLANG_FORWARD_PROC_SYMBOL(public_62e3460);
CLANG_FORWARD_PROC_SYMBOL(public_62e3710);
CLANG_FORWARD_PROC_SYMBOL(public_636cf40);

#define public_62e3513 _public_62e3513
#define public_62e351e _public_62e351e
#define public_62e356a _public_62e356a
#define public_62e35a9 _public_62e35a9
#define public_62e35be _public_62e35be
#define public_62e366a _public_62e366a
#define public_62e3679 _public_62e3679
#define public_62e3702 _public_62e3702

PROC_DECLARE(0x62e3460, internal_62e3460, public_62e3460);
extern "C" NAKED register_t __cdecl internal_62e3460()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+8]
        sub esp, 0x30
        fld dword ptr ds : [ecx+4]
        push esi
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp qword ptr ds : [public_639f418]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jnp public_62e3702
        fld dword ptr ds : [ecx+8]
        sub esp, 0xC
        fchs 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+4]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x28]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+4], eax
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], edx
        faddp 
        lea ecx, ss:[esp+4]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e3513
        mov eax, dword ptr ss : [esp+0x38]
        push eax
        call public_62dc410
        jmp public_62e351e
        public_62e3513 : nop
        push 0
        push 0
        push 0
        call public_636cf40
        public_62e351e : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [esp+0x44]
        test eax, eax
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0
        je public_62e356a
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], eax
        public_62e356a : nop
        mov esi, dword ptr ss : [esp+0x3C]
        test esi, esi
        je public_62e3702
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+4]
        faddp 
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62e35a9
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        jmp public_62e35be
        public_62e35a9 : nop
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e35be
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        public_62e35be : nop
        fabs 
        fld dword ptr ss : [esp+0x40]
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_62e3702
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        fmul dword ptr ss : [esp+4]
        fsubp 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fst dword ptr ss : [esp+0x38]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e366a
        mov ecx, dword ptr ss : [esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_62dc410
        jmp public_62e3679
        public_62e366a : nop
        push 0
        push 0
        push 0
        lea ecx, ss:[esp+0x1C]
        call public_636cf40
        public_62e3679 : nop
        fld dword ptr ss : [esp+0x14]
        sub esp, 0xC
        fmul dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x18]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_628b030
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ss:[esp+0x28]
        mov dword ptr ds : [esi+0x1C], ecx
        push edx
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], eax
        call public_62e3710
        mov al, 1
        pop esi
        add esp, 0x30
        ret 
        public_62e3702 : nop
        xor al, al
        pop esi
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x62e3460)
    }
}

#undef public_62e3513
#undef public_62e351e
#undef public_62e356a
#undef public_62e35a9
#undef public_62e35be
#undef public_62e366a
#undef public_62e3679
#undef public_62e3702
