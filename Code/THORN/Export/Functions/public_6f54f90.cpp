#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4f7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54f90);

PROC_DECLARE(0x6f54f90, internal_6f54f90, public_6f54f90);
extern "C" NAKED register_t __cdecl internal_6f54f90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x10]
        push ecx
/*FIXUP push offset public_6f614c0 @0x6f54f98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f614c0
        call public_6f4f7a0
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f54f90)
    }
}
