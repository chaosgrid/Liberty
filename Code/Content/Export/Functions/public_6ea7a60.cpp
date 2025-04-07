#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7a90);
CLANG_FORWARD_PROC_SYMBOL(public_6eec860);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6ea7a60, internal_6ea7a60, public_6ea7a60);
extern "C" NAKED register_t __cdecl internal_6ea7a60()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fcee5c
        call public_6eec860
/*FIXUP push offset _public_6ea7a90 @0x6ea7a75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ea7a90
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ea7a60)
    }
}
