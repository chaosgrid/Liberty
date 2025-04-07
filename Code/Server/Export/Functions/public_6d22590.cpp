#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22590);
CLANG_FORWARD_PROC_SYMBOL(public_6d238d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

#define public_6d225c6 _public_6d225c6

PROC_DECLARE(0x6d22590, internal_6d22590, public_6d22590);
extern "C" NAKED register_t __cdecl internal_6d22590()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d90554]
        mov al, 1
        test al, cl
        jne public_6d225c6
/*FIXUP push offset public_6d66ee4 @0x6d2259c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ee4
        mov dl, cl
        push 4
        or dl, al
        push 0
        mov ecx, offset public_6d90560
        mov byte ptr ds : [public_6d90554], dl
        call public_6d23c70
/*FIXUP push offset _public_6d238d0 @0x6d225b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d238d0
        call public_6d6013e
        add esp, 4
        public_6d225c6 : nop
        mov eax, offset public_6d90560
        ret 
        UNREACHABLE_TRAP(0x6d22590)
    }
}

#undef public_6d225c6
