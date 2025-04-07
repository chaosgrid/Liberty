#include "Server-PCH.h"

PROC_DECLARE(0x6d4c2e0, internal_6d4c2e0, public_6d4c2e0);
extern "C" NAKED register_t __cdecl internal_6d4c2e0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx+4]
        sub esp, 8
        fstp qword ptr ss : [esp]
        push eax
/*FIXUP push offset public_6d6b5f4 @0x6d4c2f2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b5f4
        push ecx
        call dword ptr ds : [public_6d64c08]
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d4c2e0)
    }
}
