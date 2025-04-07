#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec6b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6ed5c70, internal_6ed5c70, public_6ed5c70);
extern "C" NAKED register_t __cdecl internal_6ed5c70()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fcf158
        call public_6eec6b0
/*FIXUP push offset _public_6ed5ca0 @0x6ed5c85*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ed5ca0
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ed5c70)
    }
}
