#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d22610);
CLANG_FORWARD_PROC_SYMBOL(public_6d238b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d23c70);
CLANG_FORWARD_PROC_SYMBOL(public_6d6013e);

#define public_6d22649 _public_6d22649

PROC_DECLARE(0x6d22610, internal_6d22610, public_6d22610);
extern "C" NAKED register_t __cdecl internal_6d22610()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d90614]
        mov eax, 1
        test al, cl
        jne public_6d22649
/*FIXUP push offset public_6d68a74 @0x6d2261f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68a74
        or cl, al
        push 0x107
        mov byte ptr ds : [public_6d90614], cl
        push eax
        mov ecx, offset public_6d90620
        call public_6d23c70
/*FIXUP push offset _public_6d238b0 @0x6d2263c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6d238b0
        call public_6d6013e
        add esp, 4
        public_6d22649 : nop
        mov eax, offset public_6d90620
        ret 
        UNREACHABLE_TRAP(0x6d22610)
    }
}

#undef public_6d22649
