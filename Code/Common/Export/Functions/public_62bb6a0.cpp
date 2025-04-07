#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285c90);
CLANG_FORWARD_PROC_SYMBOL(public_62bb6a0);

#define public_62bb6c1 _public_62bb6c1
#define public_62bb6d6 _public_62bb6d6
#define public_62bb6f0 _public_62bb6f0
#define public_62bb705 _public_62bb705
#define public_62bb71e _public_62bb71e
#define public_62bb733 _public_62bb733
#define public_62bb791 _public_62bb791
#define public_62bb793 _public_62bb793
#define public_62bb795 _public_62bb795
#define public_62bb7af _public_62bb7af

PROC_DECLARE(0x62bb6a0, internal_62bb6a0, public_62bb6a0);
extern "C" NAKED register_t __cdecl internal_62bb6a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+8]
        sub esp, 0xC
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62bb6c1
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        jmp public_62bb6d6
        public_62bb6c1 : nop
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62bb6d6
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        public_62bb6d6 : nop
        fld dword ptr ds : [edx+4]
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62bb6f0
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        jmp public_62bb705
        public_62bb6f0 : nop
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62bb705
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        public_62bb705 : nop
        fld dword ptr ds : [edx]
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62bb71e
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        jmp public_62bb733
        public_62bb71e : nop
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62bb733
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        public_62bb733 : nop
        fst dword ptr ss : [esp]
        fld st(1)
        fstp dword ptr ss : [esp+4]
        fld st(2)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [public_639ecc8]
        fmul dword ptr ds : [public_639ecc8]
        fstp dword ptr ss : [esp+0x10]
        fsubr dword ptr ds : [ecx+0x1C]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62bb791
        fsubr dword ptr ds : [ecx+0x20]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_62bb793
        fsubr dword ptr ds : [ecx+0x24]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_62bb7af
        jmp public_62bb795
        public_62bb791 : nop
        fstp st(0)
        public_62bb793 : nop
        fstp st(0)
        public_62bb795 : nop
        mov eax, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x1C], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x20], edx
        mov dword ptr ds : [ecx+0x24], eax
        call public_6285c90
        public_62bb7af : nop
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62bb6a0)
    }
}

#undef public_62bb6c1
#undef public_62bb6d6
#undef public_62bb6f0
#undef public_62bb705
#undef public_62bb71e
#undef public_62bb733
#undef public_62bb791
#undef public_62bb793
#undef public_62bb795
#undef public_62bb7af
