#include "Content-PCH.h"

PROC_DECLARE(0x6ec14d0, internal_6ec14d0, public_6ec14d0);
extern "C" NAKED register_t __cdecl internal_6ec14d0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x90]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb5868 @0x6ec14ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5868
        push eax
        call dword ptr ds : [public_6fb3380]
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6ec14d0)
    }
}
