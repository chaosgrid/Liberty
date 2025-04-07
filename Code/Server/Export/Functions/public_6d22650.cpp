#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22650);
CLANG_FORWARD_PROC_SYMBOL(public_6d238a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

#define public_6d22686 _public_6d22686

PROC_DECLARE(0x6d22650, internal_6d22650, public_6d22650);
extern "C" NAKED register_t __cdecl internal_6d22650()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d90674]
        mov eax, 1
        test al, cl
        jne public_6d22686
/*FIXUP push offset public_6d66ee4 @0x6d2265f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ee4
        or cl, al
        push 4
        mov byte ptr ds : [public_6d90674], cl
        push eax
        mov ecx, offset public_6d90680
        call public_6d23c70
/*FIXUP push offset _public_6d238a0 @0x6d22679*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d238a0
        call public_6d6013e
        add esp, 4
        public_6d22686 : nop
        mov eax, offset public_6d90680
        ret 
        UNREACHABLE_TRAP(0x6d22650)
    }
}

#undef public_6d22686
