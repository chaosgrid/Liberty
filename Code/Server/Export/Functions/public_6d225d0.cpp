#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d225d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d238c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

#define public_6d22606 _public_6d22606

PROC_DECLARE(0x6d225d0, internal_6d225d0, public_6d225d0);
extern "C" NAKED register_t __cdecl internal_6d225d0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d905b4]
        mov al, 1
        test al, cl
        jne public_6d22606
/*FIXUP push offset public_6d66ee4 @0x6d225dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ee4
        mov dl, cl
        push 8
        or dl, al
        push 0
        mov ecx, offset public_6d905c0
        mov byte ptr ds : [public_6d905b4], dl
        call public_6d23c70
/*FIXUP push offset _public_6d238c0 @0x6d225f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d238c0
        call public_6d6013e
        add esp, 4
        public_6d22606 : nop
        mov eax, offset public_6d905c0
        ret 
        UNREACHABLE_TRAP(0x6d225d0)
    }
}

#undef public_6d22606
