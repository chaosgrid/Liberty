#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22690);
CLANG_FORWARD_PROC_SYMBOL(public_6d23890);
CLANG_FORWARD_PROC_SYMBOL(public_6d23c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

#define public_6d226c6 _public_6d226c6

PROC_DECLARE(0x6d22690, internal_6d22690, public_6d22690);
extern "C" NAKED register_t __cdecl internal_6d22690()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d906d4]
        mov eax, 1
        test al, cl
        jne public_6d226c6
/*FIXUP push offset public_6d66ee4 @0x6d2269f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ee4
        or cl, al
        push 8
        mov byte ptr ds : [public_6d906d4], cl
        push eax
        mov ecx, offset public_6d906e0
        call public_6d23c70
/*FIXUP push offset _public_6d23890 @0x6d226b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d23890
        call public_6d6013e
        add esp, 4
        public_6d226c6 : nop
        mov eax, offset public_6d906e0
        ret 
        UNREACHABLE_TRAP(0x6d22690)
    }
}

#undef public_6d226c6
