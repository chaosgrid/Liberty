#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_512460);

#define public_512494 _public_512494
#define public_5124b6 _public_5124b6
#define public_5124b8 _public_5124b8
#define public_5124cf _public_5124cf
#define public_5124e6 _public_5124e6

PROC_DECLARE(0x512460, internal_512460, public_512460);
extern "C" NAKED register_t __cdecl internal_512460()
{
    __asm
    {
        fld dword ptr ds : [public_5c75dc]
        mov byte ptr ds : [ecx+0x14], 1
        fsub dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x10]
        fcom dword ptr ds : [ecx+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_512494
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [ecx+0x10]
        fst dword ptr ds : [ecx+0x10]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jne public_5124b6
        fstp dword ptr ds : [ecx+0x10]
        jmp public_5124b8
        public_512494 : nop
        fcom dword ptr ds : [ecx+0x10]
        fnstsw ax
        test ah, 5
        jp public_5124b6
        fld dword ptr ds : [ecx+0x10]
        fsub dword ptr ss : [esp+0xC]
        fst dword ptr ds : [ecx+0x10]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_5124b6
        fstp dword ptr ds : [ecx+0x10]
        jmp public_5124b8
        public_5124b6 : nop
        fstp st(0)
        public_5124b8 : nop
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jp public_5124cf
        mov dword ptr ds : [ecx+0x10], 0
        public_5124cf : nop
        fld dword ptr ds : [ecx+0x10]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_5124e6
        mov dword ptr ds : [ecx+0x10], 0x3F800000
        public_5124e6 : nop
        ret 0x10
        UNREACHABLE_TRAP(0x512460)
    }
}

#undef public_512494
#undef public_5124b6
#undef public_5124b8
#undef public_5124cf
#undef public_5124e6
