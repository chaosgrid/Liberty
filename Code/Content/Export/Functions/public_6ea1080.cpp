#include "Content-PCH.h"

PROC_DECLARE(0x6ea1080, internal_6ea1080, public_6ea1080);
extern "C" NAKED register_t __cdecl internal_6ea1080()
{
    __asm
    {
/*FIXUP push offset public_6fb3718 @0x6ea1080*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3718
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fce950], eax
        ret 
        UNREACHABLE_TRAP(0x6ea1080)
    }
}
