#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22550);
CLANG_FORWARD_PROC_SYMBOL(public_6d238e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

#define public_6d22589 _public_6d22589

PROC_DECLARE(0x6d22550, internal_6d22550, public_6d22550);
extern "C" NAKED register_t __cdecl internal_6d22550()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d904f4]
        mov al, 1
        test al, cl
        jne public_6d22589
/*FIXUP push offset public_6d68a74 @0x6d2255c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a74
        mov dl, cl
        push 0x107
        or dl, al
        push 0
        mov ecx, offset public_6d90500
        mov byte ptr ds : [public_6d904f4], dl
        call public_6d23c70
/*FIXUP push offset _public_6d238e0 @0x6d2257c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d238e0
        call public_6d6013e
        add esp, 4
        public_6d22589 : nop
        mov eax, offset public_6d90500
        ret 
        UNREACHABLE_TRAP(0x6d22550)
    }
}

#undef public_6d22589
