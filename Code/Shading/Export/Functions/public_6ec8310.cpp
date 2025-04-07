#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8310);

#define public_6ec832b _public_6ec832b
#define public_6ec833b _public_6ec833b

PROC_DECLARE(0x6ec8310, internal_6ec8310, public_6ec8310);
extern "C" NAKED register_t __cdecl internal_6ec8310()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 5
        jp public_6ec832b
        mov eax, 0xFFFFFFFF
        ret 
        public_6ec832b : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x44
        jp public_6ec833b
        xor eax, eax
        ret 
        public_6ec833b : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6ec8310)
    }
}

#undef public_6ec832b
#undef public_6ec833b
