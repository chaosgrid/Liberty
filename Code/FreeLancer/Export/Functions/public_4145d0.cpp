#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4145ee _public_4145ee
#define public_41462f _public_41462f

PROC_DECLARE(0x4145d0, internal_4145d0, public_4145d0);
extern "C" NAKED register_t __cdecl internal_4145d0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        push esi
        fabs 
        mov esi, ecx
        fcom qword ptr ds : [public_5c75f8]
        fnstsw ax
        test ah, 5
        jp public_4145ee
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_4145ee : nop
        fdivr dword ptr ds : [public_67dc9c]
        sub esp, 8
        fld dword ptr ds : [public_67dc70]
        fdiv dword ptr ds : [public_67dc9c]
        fmulp 
        fmul dword ptr ss : [esp+0x10]
        fadd qword ptr ds : [public_5c75e8]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        cmp eax, dword ptr ds : [esi+0x2C]
        je public_41462f
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x28], 0
        public_41462f : nop
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x4145d0)
    }
}

#undef public_4145ee
#undef public_41462f
