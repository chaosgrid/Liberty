#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54c420);

#define public_54c480 _public_54c480
#define public_54c494 _public_54c494
#define public_54c4a4 _public_54c4a4
#define public_54c4ba _public_54c4ba
#define public_54c4c8 _public_54c4c8
#define public_54c4cd _public_54c4cd
#define public_54c4e5 _public_54c4e5
#define public_54c524 _public_54c524
#define public_54c526 _public_54c526
#define public_54c549 _public_54c549
#define public_54c576 _public_54c576
#define public_54c578 _public_54c578

PROC_DECLARE(0x54c420, internal_54c420, public_54c420);
extern "C" NAKED register_t __cdecl internal_54c420()
{
    __asm
    {
        sub esp, 0xC
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax]
        xor dl, dl
        fsub dword ptr ds : [ecx]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [ecx+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_54c4a4
        fcom dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_54c480
        mov dword ptr ds : [ecx+0x34], 0x3F800000
        jmp public_54c4cd
        public_54c480 : nop
        fcom dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_54c494
        mov dword ptr ds : [ecx+0x34], 0
        jmp public_54c4cd
        public_54c494 : nop
        fld dword ptr ss : [esp+0x20]
        fsub st, st(1)
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x1C]
        jmp public_54c4c8
        public_54c4a4 : nop
        fcom dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_54c4ba
        mov dword ptr ds : [ecx+0x34], 0
        mov dl, 1
        jmp public_54c4cd
        public_54c4ba : nop
        fld dword ptr ss : [esp+0x14]
        fsubr st, st(1)
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x14]
        public_54c4c8 : nop
        fdivp 
        fstp dword ptr ds : [ecx+0x34]
        public_54c4cd : nop
        fld dword ptr ds : [ecx+0x34]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        je public_54c4e5
        test dl, dl
        je public_54c576
        public_54c4e5 : nop
        fsqrt 
        fdivr qword ptr ds : [public_5c89b8]
        fld dword ptr ss : [esp]
        fmul st, st(1)
        fld dword ptr ss : [esp+4]
        fmul st, st(2)
        fld dword ptr ss : [esp+8]
        fmulp st(3), st
        fxch st(2)
        fmul dword ptr ds : [ecx+0x18]
        fxch st(2)
        fmul dword ptr ds : [ecx+0x14]
        faddp st(2), st
        fmul dword ptr ds : [ecx+0x10]
        faddp 
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_54c524
        mov eax, 1
        jmp public_54c526
        public_54c524 : nop
        xor eax, eax
        public_54c526 : nop
        fabs 
        mov byte ptr ds : [ecx+0x38], al
        fst dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5d3e08]
        fnstsw ax
        test ah, 5
        jp public_54c549
        mov dword ptr ds : [ecx+0x34], 0
        add esp, 0xC
        ret 0x14
        public_54c549 : nop
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c75e0]
        fnstsw ax
        test ah, 5
        jp public_54c578
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ds : [public_5d3e08]
        fmul dword ptr ds : [ecx+0x34]
        fmul dword ptr ds : [public_5e0a60]
        fstp dword ptr ds : [ecx+0x34]
        add esp, 0xC
        ret 0x14
        public_54c576 : nop
        fstp st(0)
        public_54c578 : nop
        add esp, 0xC
        ret 0x14
        UNREACHABLE_TRAP(0x54c420)
    }
}

#undef public_54c480
#undef public_54c494
#undef public_54c4a4
#undef public_54c4ba
#undef public_54c4c8
#undef public_54c4cd
#undef public_54c4e5
#undef public_54c524
#undef public_54c526
#undef public_54c549
#undef public_54c576
#undef public_54c578
