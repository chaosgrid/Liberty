#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac1ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf876);

#define public_6ac1674 _public_6ac1674

PROC_DECLARE(0x6ac1660, internal_6ac1660, public_6ac1660);
extern "C" NAKED register_t __cdecl internal_6ac1660()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6ae1208]
        mov al, 1
        test al, cl
        jne public_6ac1674
        or cl, al
        mov byte ptr ds : [public_6ae1208], cl
/*FIXUP public_6ac1674 : nop
        push offset _public_6ac1ce0 @0x6ac1674*/
  FIXUP public_6ac1674 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ac1ce0
        call public_6acf876
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ac1660)
    }
}

#undef public_6ac1674
