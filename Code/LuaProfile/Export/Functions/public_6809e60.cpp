#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6802010);
CLANG_FORWARD_PROC_SYMBOL(public_6805e40);
CLANG_FORWARD_PROC_SYMBOL(public_6805fb0);

#define public_6809e7b _public_6809e7b
#define public_6809e97 _public_6809e97

PROC_DECLARE(0x6809e60, internal_6809e60, public_6809e60);
extern "C" NAKED register_t __cdecl internal_6809e60()
{
    __asm
    {
        push 1
        call public_6801cf0
        add esp, 4
        test eax, eax
        je public_6809e7b
        push eax
        call public_6802010
        add esp, 4
        test eax, eax
        je public_6809e97
        public_6809e7b : nop
        push 0
/*FIXUP push offset public_680e600 @0x6809e7d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e600
        push 2
        call public_6805e40
        push eax
/*FIXUP push offset public_680e304 @0x6809e8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e304
        call public_6805fb0
        add esp, 0x14
        public_6809e97 : nop
        ret 
        UNREACHABLE_TRAP(0x6809e60)
    }
}

#undef public_6809e7b
#undef public_6809e97
