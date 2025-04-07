#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63605a0);

#define public_63605c5 _public_63605c5

PROC_DECLARE(0x63605a0, internal_63605a0, public_63605a0);
extern "C" NAKED register_t __cdecl internal_63605a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+4]
        mov dword ptr ds : [ecx+0x14], eax
        fsub dword ptr ds : [public_658afdc]
        fcomp dword ptr ds : [ecx+0x1C]
        fnstsw ax
        test ah, 1
        je public_63605c5
        mov dword ptr ds : [ecx+0x18], 1
        ret 4
        public_63605c5 : nop
        mov edx, dword ptr ss : [esp+4]
        mov dword ptr ds : [public_658afdc], edx
        mov dword ptr ds : [ecx+0x18], 0
        ret 4
        UNREACHABLE_TRAP(0x63605a0)
    }
}

#undef public_63605c5
