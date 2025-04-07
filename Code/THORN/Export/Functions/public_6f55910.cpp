#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55800);

PROC_DECLARE(0x6f55910, internal_6f55910, public_6f55910);
extern "C" NAKED register_t __cdecl internal_6f55910()
{
    __asm
    {
/*FIXUP push offset public_6f618fc @0x6f55910*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618fc
        push 0
        push 2
        call public_6f4f5e0
        add esp, 8
        push eax
        call dword ptr ds : [public_6f5a0b4]
/*FIXUP push offset public_6f618f4 @0x6f55928*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f618f4
        push eax
        call public_6f55800
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f55910)
    }
}
