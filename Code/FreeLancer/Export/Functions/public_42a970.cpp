#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a970);

#define public_42a99a _public_42a99a
#define public_42a99c _public_42a99c

PROC_DECLARE(0x42a970, internal_42a970, public_42a970);
extern "C" NAKED register_t __cdecl internal_42a970()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        xor al, al
        test ecx, ecx
        je public_42a99c
        mov edx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [edx]
        test edx, edx
        je public_42a99c
        fld dword ptr ds : [ecx+0x28]
        fld dword ptr ds : [edx+0x28]
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_42a99a
        mov al, 1
        ret 8
        public_42a99a : nop
        xor al, al
        public_42a99c : nop
        ret 8
        UNREACHABLE_TRAP(0x42a970)
    }
}

#undef public_42a99a
#undef public_42a99c
