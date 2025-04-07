#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6309a20);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

#define public_6309a13 _public_6309a13

PROC_DECLARE(0x63099f0, internal_63099f0, public_63099f0);
extern "C" NAKED register_t __cdecl internal_63099f0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_63fcef8]
        mov al, 1
        test al, cl
        jne public_6309a13
        mov dl, cl
        or dl, al
/*FIXUP push offset _public_6309a20 @0x6309a00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6309a20
        mov byte ptr ds : [public_63fcef8], dl
        call public_6391f9e
        add esp, 4
        public_6309a13 : nop
        mov eax, offset public_63fceec
        ret 8
        UNREACHABLE_TRAP(0x63099f0)
    }
}

#undef public_6309a13
