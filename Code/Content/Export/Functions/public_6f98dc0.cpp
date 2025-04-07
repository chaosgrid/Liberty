#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f98dc0);

#define public_6f98de6 _public_6f98de6

PROC_DECLARE(0x6f98dc0, internal_6f98dc0, public_6f98dc0);
extern "C" NAKED register_t __cdecl internal_6f98dc0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 0x44
        jp public_6f98de6
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 0x44
        jp public_6f98de6
        mov eax, 1
        ret 4
        public_6f98de6 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6f98dc0)
    }
}

#undef public_6f98de6
