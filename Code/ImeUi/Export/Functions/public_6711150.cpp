#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6711150);

#define public_6711175 _public_6711175

PROC_DECLARE(0x6711150, internal_6711150, public_6711150);
extern "C" NAKED register_t __cdecl internal_6711150()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_67193e0]
        test ecx, ecx
        je public_6711175
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+8]
        push edx
        mov edx, dword ptr ds : [public_67193a0]
        push edx
/*FIXUP push offset public_6719394 @0x671116d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6719394
        call dword ptr ds : [eax+8]
        public_6711175 : nop
        ret 
        UNREACHABLE_TRAP(0x6711150)
    }
}

#undef public_6711175
