#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0030);

PROC_DECLARE(0x62b1a00, internal_62b1a00, public_62b1a00);
extern "C" NAKED register_t __cdecl internal_62b1a00()
{
    __asm
    {
/*FIXUP push offset public_639a06c @0x62b1a00*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a06c
        add ecx, 0x2B0
        call public_62a0030
        neg eax
        sbb eax, eax
        neg eax
        ret 
        UNREACHABLE_TRAP(0x62b1a00)
    }
}
