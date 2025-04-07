#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8447);
CLANG_FORWARD_PROC_SYMBOL(public_6ef852d);

#define public_6ef8452 _public_6ef8452

PROC_DECLARE(0x6ef8447, internal_6ef8447, public_6ef8447);
extern "C" NAKED register_t __cdecl internal_6ef8447()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6efe4b0]
        test eax, eax
        je public_6ef8452
        call eax
/*FIXUP public_6ef8452 : nop
        push offset public_6efe028 @0x6ef8452*/
  FIXUP public_6ef8452 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe028
/*FIXUP push offset public_6efe014 @0x6ef8457*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe014
        call public_6ef852d
/*FIXUP push offset public_6efe010 @0x6ef8461*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe010
/*FIXUP push offset public_6efe000 @0x6ef8466*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efe000
        call public_6ef852d
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef8447)
    }
}

#undef public_6ef8452
