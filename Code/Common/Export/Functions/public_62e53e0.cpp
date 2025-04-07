#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62e53e0);

#define public_62e5423 _public_62e5423
#define public_62e542a _public_62e542a
#define public_62e543e _public_62e543e
#define public_62e54cb _public_62e54cb
#define public_62e54e3 _public_62e54e3
#define public_62e553c _public_62e553c
#define public_62e554e _public_62e554e
#define public_62e5580 _public_62e5580
#define public_62e5595 _public_62e5595
#define public_62e55a6 _public_62e55a6

PROC_DECLARE(0x62e53e0, internal_62e53e0, public_62e53e0);
extern "C" NAKED register_t __cdecl internal_62e53e0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        test esi, esi
        je public_62e542a
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x2C]
        test eax, eax
        jne public_62e5423
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+4], eax
        fld dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+8], ecx
        fld dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0xC], edx
        jmp public_62e543e
        public_62e5423 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x20]
        public_62e542a : nop
        fld dword ptr ds : [public_6399408]
        mov dword ptr ss : [esp+0xC], 0
        fld dword ptr ds : [public_6399408]
        public_62e543e : nop
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x10]
        fsub st, st(1)
        mov dword ptr ss : [esp+4], ecx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        fstp st(0)
        mov dword ptr ss : [esp+8], edx
        fstp st(0)
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xC], eax
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fcom dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 0x41
        jne public_62e54cb
        fdivr dword ptr ds : [public_639a1d0]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        jmp public_62e54e3
        public_62e54cb : nop
        mov dword ptr ss : [esp+4], 0
        mov dword ptr ss : [esp+8], 0
        mov dword ptr ss : [esp+0xC], 0
        public_62e54e3 : nop
        test esi, esi
        fstp st(0)
        je public_62e553c
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [eax+0x14]
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_628b030
        fld dword ptr ss : [esp+0x18]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        jmp public_62e554e
        public_62e553c : nop
        fld dword ptr ds : [public_6399408]
        fld dword ptr ds : [public_6399408]
        fld dword ptr ds : [public_6399408]
        public_62e554e : nop
        fld dword ptr ss : [esp+0xC]
        pop esi
        fmul st, st(1)
        fld dword ptr ss : [esp+4]
        fmul st, st(3)
        faddp 
        fxch st(3)
        fmul dword ptr ss : [esp]
        faddp st(3), st
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62e5580
        fstp st(0)
        fld dword ptr ds : [public_639a1d0]
        jmp public_62e5595
        public_62e5580 : nop
        fcom dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62e5595
        fstp st(0)
        fld dword ptr ds : [public_6399404]
        public_62e5595 : nop
        fcomp dword ptr ss : [esp+0x30]
        fnstsw ax
        test ah, 5
        jp public_62e55a6
        mov al, 1
        add esp, 0x24
        ret 
        public_62e55a6 : nop
        xor al, al
        add esp, 0x24
        ret 
        UNREACHABLE_TRAP(0x62e53e0)
    }
}

#undef public_62e5423
#undef public_62e542a
#undef public_62e543e
#undef public_62e54cb
#undef public_62e54e3
#undef public_62e553c
#undef public_62e554e
#undef public_62e5580
#undef public_62e5595
#undef public_62e55a6
