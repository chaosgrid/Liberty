#include "Common-PCH.h"

PROC_DECLARE(0x6362260, internal_6362260, public_6362260);
extern "C" NAKED register_t __cdecl internal_6362260()
{
    __asm
    {
/*FIXUP push offset public_63ee770 @0x6362260*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_63ee770
        call dword ptr ds : [public_6399284]
        add esp, 4
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6362260)
    }
}
