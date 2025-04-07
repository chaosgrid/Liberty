#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8660);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8d00);

#define public_6ee8697 _public_6ee8697

PROC_DECLARE(0x6ee8660, internal_6ee8660, public_6ee8660);
extern "C" NAKED register_t __cdecl internal_6ee8660()
{
    __asm
    {
/*FIXUP push offset public_6eeae38 @0x6ee8660*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeae38
        call public_6ee8d00
        add esp, 4
        test eax, eax
        mov dword ptr ds : [public_6eeaf7c], eax
        jne public_6ee8697
/*FIXUP push offset public_6eeae14 @0x6ee8676*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeae14
        push 0x20
/*FIXUP push offset public_6eeadd4 @0x6ee867d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eeadd4
        mov eax, 0x100001
/*FIXUP push offset public_6eea124 @0x6ee8687*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea124
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6ee8697 : nop
        ret 
        UNREACHABLE_TRAP(0x6ee8660)
    }
}

#undef public_6ee8697
