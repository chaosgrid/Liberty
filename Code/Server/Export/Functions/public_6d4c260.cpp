#include "Server-PCH.h"

PROC_DECLARE(0x6d4c260, internal_6d4c260, public_6d4c260);
extern "C" NAKED register_t __cdecl internal_6d4c260()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        push eax
/*FIXUP push offset public_6d6b590 @0x6d4c268*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b590
        push ecx
        call dword ptr ds : [public_6d64c08]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6d4c260)
    }
}
