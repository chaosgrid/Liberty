#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410150);

#define public_41016a _public_41016a

PROC_DECLARE(0x410150, internal_410150, public_410150);
extern "C" NAKED register_t __cdecl internal_410150()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_5c890c]
        fnstsw ax
        test ah, 0x41
        jp public_41016a
        mov eax, dword ptr ds : [public_5c890c]
        mov dword ptr ss : [esp+4], eax
        public_41016a : nop
        fld dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+4]
        fsub dword ptr ds : [public_5c890c]
        mov dword ptr ds : [public_6164d4], ecx
        fstp dword ptr ds : [public_6164d0]
        ret 
        UNREACHABLE_TRAP(0x410150)
    }
}

#undef public_41016a
