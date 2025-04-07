#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec8350);

#define public_6ec836b _public_6ec836b
#define public_6ec837b _public_6ec837b

PROC_DECLARE(0x6ec8350, internal_6ec8350, public_6ec8350);
extern "C" NAKED register_t __cdecl internal_6ec8350()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x41
        jne public_6ec836b
        mov eax, 0xFFFFFFFF
        ret 
        public_6ec836b : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edx+4]
        fnstsw ax
        test ah, 0x44
        jp public_6ec837b
        xor eax, eax
        ret 
        public_6ec837b : nop
        mov eax, 1
        ret 
        UNREACHABLE_TRAP(0x6ec8350)
    }
}

#undef public_6ec836b
#undef public_6ec837b
