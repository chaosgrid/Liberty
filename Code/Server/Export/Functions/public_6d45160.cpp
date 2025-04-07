#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d001d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d18860);
CLANG_FORWARD_PROC_SYMBOL(public_6d43680);
CLANG_FORWARD_PROC_SYMBOL(public_6d5df60);

#define public_6d45180 _public_6d45180

PROC_DECLARE(0x6d45160, internal_6d45160, public_6d45160);
extern "C" NAKED register_t __cdecl internal_6d45160()
{
    __asm
    {
        mov ecx, offset public_6d8f970
        call dword ptr ds : [public_6d64838]
        fcom qword ptr ds : [public_6d65538]
        fnstsw ax
        test ah, 5
        jp public_6d45180
        fstp st(0)
        fld qword ptr ds : [public_6d65538]
        public_6d45180 : nop
        fld qword ptr ds : [public_6d8fb28]
        push esi
        mov esi, dword ptr ss : [esp+8]
        fadd st, st(1)
        push esi
        fstp qword ptr ds : [public_6d8fb28]
        fstp st(0)
        call public_6d001d0
        push esi
        call public_6d18860
        push esi
        call public_6d43680
        push esi
        call public_6d5df60
        add esp, 0x10
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d45160)
    }
}

#undef public_6d45180
