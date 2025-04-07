#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f94f60);
CLANG_FORWARD_PROC_SYMBOL(public_6f95e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6f94f30, internal_6f94f30, public_6f94f30);
extern "C" NAKED register_t __cdecl internal_6f94f30()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fd3c20
        call public_6f95e80
/*FIXUP push offset _public_6f94f60 @0x6f94f45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f94f60
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f94f30)
    }
}
