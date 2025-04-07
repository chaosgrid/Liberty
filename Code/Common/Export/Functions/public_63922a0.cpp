#include "Common-PCH.h"

PROC_DECLARE(0x63922a0, internal_63922a0, public_63922a0);
extern "C" NAKED register_t __cdecl internal_63922a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
/*FIXUP push offset public_639c454 @0x63922a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c454
        call dword ptr ds : [public_6399284]
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x63922a0)
    }
}
