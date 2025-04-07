#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54feb0);

#define public_54fecc _public_54fecc

PROC_DECLARE(0x54feb0, internal_54feb0, public_54feb0);
extern "C" NAKED register_t __cdecl internal_54feb0()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fcom dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 5
        jp public_54fecc
        mov eax, dword ptr ss : [esp+8]
        fstp dword ptr ds : [ecx+0x44]
        mov dword ptr ds : [ecx+0x40], eax
        ret 8
        public_54fecc : nop
        mov edx, dword ptr ss : [esp+8]
        fstp dword ptr ds : [ecx+0x40]
        mov dword ptr ds : [ecx+0x44], edx
        ret 8
        UNREACHABLE_TRAP(0x54feb0)
    }
}

#undef public_54fecc
