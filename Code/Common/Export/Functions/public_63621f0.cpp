#include "Common-PCH.h"

PROC_DECLARE(0x63621f0, internal_63621f0, public_63621f0);
extern "C" NAKED register_t __cdecl internal_63621f0()
{
    __asm
    {
/*FIXUP push offset public_63ee764 @0x63621f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee764
        call dword ptr ds : [public_6399284]
        add esp, 4
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x63621f0)
    }
}
