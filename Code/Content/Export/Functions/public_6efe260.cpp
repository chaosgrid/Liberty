#include "Content-PCH.h"

PROC_DECLARE(0x6efe260, internal_6efe260, public_6efe260);
extern "C" NAKED register_t __cdecl internal_6efe260()
{
    __asm
    {
/*FIXUP push offset public_6fb376c @0x6efe260*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb376c
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        mov dword ptr ds : [public_6fcf3b8], eax
        ret 
        UNREACHABLE_TRAP(0x6efe260)
    }
}
