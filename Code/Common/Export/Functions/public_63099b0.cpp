#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63099e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

#define public_63099d3 _public_63099d3

PROC_DECLARE(0x63099b0, internal_63099b0, public_63099b0);
extern "C" NAKED register_t __cdecl internal_63099b0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_63fcf08]
        mov al, 1
        test al, cl
        jne public_63099d3
        mov dl, cl
        or dl, al
/*FIXUP push offset _public_63099e0 @0x63099c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_63099e0
        mov byte ptr ds : [public_63fcf08], dl
        call public_6391f9e
        add esp, 4
        public_63099d3 : nop
        mov eax, offset public_63fcefc
        ret 8
        UNREACHABLE_TRAP(0x63099b0)
    }
}

#undef public_63099d3
