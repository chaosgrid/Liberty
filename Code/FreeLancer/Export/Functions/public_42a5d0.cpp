#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a420);

#define public_42a5e9 _public_42a5e9
#define public_42a602 _public_42a602
#define public_42a606 _public_42a606

PROC_DECLARE(0x42a5d0, internal_42a5d0, public_42a5d0);
extern "C" NAKED register_t __cdecl internal_42a5d0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5ca210]
        fnstsw ax
        test ah, 5
        jp public_42a5e9
        fld dword ptr ds : [public_5ca16c]
        jmp public_42a606
        public_42a5e9 : nop
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_42a602
        fld dword ptr ds : [public_5c7474]
        jmp public_42a606
        public_42a602 : nop
        fld dword ptr ss : [esp+4]
        public_42a606 : nop
        fst dword ptr ds : [ecx+0x1C]
        fstp dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [ecx+0x38], 0
        call public_42a420
        ret 4
        UNREACHABLE_TRAP(0x42a5d0)
    }
}

#undef public_42a5e9
#undef public_42a602
#undef public_42a606
