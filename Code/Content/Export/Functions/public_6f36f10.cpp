#include "Content-PCH.h"

PROC_DECLARE(0x6f36f10, internal_6f36f10, public_6f36f10);
extern "C" NAKED register_t __cdecl internal_6f36f10()
{
    __asm
    {
/*FIXUP push offset public_6fb36ec @0x6f36f10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb36ec
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fd0944], eax
        ret 
        UNREACHABLE_TRAP(0x6f36f10)
    }
}
