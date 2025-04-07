#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0326);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0364);

#define public_6ad0388 _public_6ad0388

PROC_DECLARE(0x6ad0364, internal_6ad0364, public_6ad0364);
extern "C" NAKED register_t __cdecl internal_6ad0364()
{
    __asm
    {
/*FIXUP push offset public_6ada9c4 @0x6ad0364*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada9c4
        call dword ptr ds : [public_6ada064]
        test eax, eax
        je public_6ad0388
/*FIXUP push offset public_6ada9a8 @0x6ad0373*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ada9a8
        push eax
        call dword ptr ds : [public_6ada058]
        test eax, eax
        je public_6ad0388
        push 0
        call eax
        ret 
        public_6ad0388 : nop
        jmp public_6ad0326
        UNREACHABLE_TRAP(0x6ad0364)
    }
}

#undef public_6ad0388
