#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e1c90);
CLANG_FORWARD_PROC_SYMBOL(public_6391fc2);

#define public_62e1ca7 _public_62e1ca7
#define public_62e1cd6 _public_62e1cd6
#define public_62e1cf5 _public_62e1cf5
#define public_62e1d8d _public_62e1d8d
#define public_62e1da1 _public_62e1da1
#define public_62e1def _public_62e1def
#define public_62e1e08 _public_62e1e08

PROC_DECLARE(0x62e1c90, internal_62e1c90, public_62e1c90);
extern "C" NAKED register_t __cdecl internal_62e1c90()
{
    __asm
    {
        sub esp, 0x28
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        test esi, esi
        jne public_62e1ca7
        fld dword ptr ds : [public_6399408]
        pop esi
        add esp, 0x28
        ret 
        public_62e1ca7 : nop
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+8]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x2C]
        test eax, eax
        jne public_62e1cd6
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        jmp public_62e1cf5
        public_62e1cd6 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        public_62e1cf5 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        fld dword ptr ss : [esp+0x14]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x34]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0xC]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e1d8d
        fld dword ptr ds : [public_639a1d0]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x30]
        jmp public_62e1da1
        public_62e1d8d : nop
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        fld dword ptr ds : [public_6399408]
        fld dword ptr ds : [public_6399408]
        public_62e1da1 : nop
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+0x14]
        fld dword ptr ds : [ecx+0x20]
        fxch st(3)
        fmul st, st(3)
        fxch st(4)
        fmul st, st(1)
        faddp st(4), st
        fxch 
        fmul st, st(4)
        faddp st(3), st
        fxch st(2)
        fstp dword ptr ss : [esp+0x30]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62e1def
        mov dword ptr ss : [esp+0x30], 0x3F800000
        fld dword ptr ss : [esp+0x30]
        call public_6391fc2
        fabs 
        pop esi
        add esp, 0x28
        ret 
        public_62e1def : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e1e08
        mov dword ptr ss : [esp+0x30], 0xBF800000
        public_62e1e08 : nop
        fld dword ptr ss : [esp+0x30]
        call public_6391fc2
        fabs 
        pop esi
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x62e1c90)
    }
}

#undef public_62e1ca7
#undef public_62e1cd6
#undef public_62e1cf5
#undef public_62e1d8d
#undef public_62e1da1
#undef public_62e1def
#undef public_62e1e08
