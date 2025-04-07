#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67142e0);
CLANG_FORWARD_PROC_SYMBOL(public_6714450);

PROC_DECLARE(0x6714450, internal_6714450, public_6714450);
extern "C" NAKED register_t __cdecl internal_6714450()
{
    __asm
    {
/*FIXUP push offset public_671b7c0 @0x6714450*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_671b7c0
        call dword ptr ds : [public_671937c]
        sub eax, dword ptr ds : [public_671cfa4]
        push eax
        push 0x27
        call public_67142e0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6714450)
    }
}
