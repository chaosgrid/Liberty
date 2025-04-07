#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6ae5);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b23);

#define public_6ef6b47 _public_6ef6b47

PROC_DECLARE(0x6ef6b23, internal_6ef6b23, public_6ef6b23);
extern "C" NAKED register_t __cdecl internal_6ef6b23()
{
    __asm
    {
/*FIXUP push offset public_6efc37c @0x6ef6b23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc37c
        call dword ptr ds : [public_6efc01c]
        test eax, eax
        je public_6ef6b47
/*FIXUP push offset public_6efc360 @0x6ef6b32*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6efc360
        push eax
        call dword ptr ds : [public_6efc0bc]
        test eax, eax
        je public_6ef6b47
        push 0
        call eax
        ret 
        public_6ef6b47 : nop
        jmp public_6ef6ae5
        UNREACHABLE_TRAP(0x6ef6b23)
    }
}

#undef public_6ef6b47
