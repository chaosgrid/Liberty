#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee17e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee17f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8e14);

PROC_DECLARE(0x6ee17e0, internal_6ee17e0, public_6ee17e0);
/* CHUNK of public_6ee1740 */
extern "C" NAKED register_t __cdecl internal_6ee17e0()
{
    __asm
    {
/*FIXUP push offset _public_6ee17f0 @0x6ee17e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6ee17f0
        call public_6ee8e14
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ee17e0)
    }
}
