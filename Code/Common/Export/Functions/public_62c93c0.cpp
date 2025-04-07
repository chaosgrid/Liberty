#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4b20);

#define public_62c93ff _public_62c93ff
#define public_62c940a _public_62c940a
#define public_62c9466 _public_62c9466
#define public_62c9468 _public_62c9468
#define public_62c94a9 _public_62c94a9
#define public_62c94b1 _public_62c94b1
#define public_62c94b7 _public_62c94b7
#define public_62c9506 _public_62c9506
#define public_62c9516 _public_62c9516

PROC_DECLARE(0x62c93c0, internal_62c93c0, public_62c93c0);
extern "C" NAKED register_t __cdecl internal_62c93c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2C]
        cmp eax, 2
        mov ecx, dword ptr ss : [esp+8]
        je public_62c940a
        cmp eax, 1
        jne public_62c93ff
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ds : [public_6399408]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        je public_62c940a
        public_62c93ff : nop
        mov byte ptr ds : [esi+0x1B4], 0
        pop esi
        ret 4
        public_62c940a : nop
        mov byte ptr ds : [esi+0x1B4], 1
        fld dword ptr ds : [ecx+4]
        fchs 
        fstp dword ptr ds : [esi+0x1B8]
        fld dword ptr ds : [ecx]
        fchs 
        fstp dword ptr ds : [esi+0x1BC]
        mov eax, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x1C0], eax
        call public_62d4b20
        fcom qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 0x41
        jne public_62c9466
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmul dword ptr ds : [esi+0x1B8]
        fstp dword ptr ds : [esi+0x1B8]
        fmul dword ptr ds : [esi+0x1BC]
        fstp dword ptr ds : [esi+0x1BC]
        jmp public_62c9468
        public_62c9466 : nop
        fstp st(0)
        public_62c9468 : nop
        fld dword ptr ds : [esi+0x1B8]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62c94a9
        fld dword ptr ds : [esi+0x1B8]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62c94b1
        fld dword ptr ds : [esi+0x1B8]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62c94a9
        fld dword ptr ds : [esi+0x1B8]
        jmp public_62c94b7
        public_62c94a9 : nop
        fld dword ptr ds : [public_6399404]
        jmp public_62c94b7
        public_62c94b1 : nop
        fld dword ptr ds : [public_639a1d0]
        public_62c94b7 : nop
        fstp dword ptr ds : [esi+0x1B8]
        fld dword ptr ds : [esi+0x1BC]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62c9506
        fld dword ptr ds : [esi+0x1BC]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 5
        jp public_62c9516
        fld dword ptr ds : [esi+0x1BC]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 0x41
        jne public_62c9506
        fld dword ptr ds : [esi+0x1BC]
        fstp dword ptr ds : [esi+0x1BC]
        pop esi
        ret 4
        public_62c9506 : nop
        fld dword ptr ds : [public_6399404]
        fstp dword ptr ds : [esi+0x1BC]
        pop esi
        ret 4
        public_62c9516 : nop
        fld dword ptr ds : [public_639a1d0]
        fstp dword ptr ds : [esi+0x1BC]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c93c0)
    }
}

#undef public_62c93ff
#undef public_62c940a
#undef public_62c9466
#undef public_62c9468
#undef public_62c94a9
#undef public_62c94b1
#undef public_62c94b7
#undef public_62c9506
#undef public_62c9516
