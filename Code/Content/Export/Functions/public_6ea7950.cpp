#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7980);
CLANG_FORWARD_PROC_SYMBOL(public_6eacd70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6ea7950, internal_6ea7950, public_6ea7950);
extern "C" NAKED register_t __cdecl internal_6ea7950()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp+2]
        push eax
        lea ecx, ss:[esp+7]
        push ecx
        mov ecx, offset public_6fcee70
        call public_6eacd70
/*FIXUP push offset _public_6ea7980 @0x6ea7965*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ea7980
        call public_6fa9162
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ea7950)
    }
}
