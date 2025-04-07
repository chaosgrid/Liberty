#include "Content-PCH.h"

PROC_DECLARE(0x6ec0b00, internal_6ec0b00, public_6ec0b00);
extern "C" NAKED register_t __cdecl internal_6ec0b00()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x10
        fstp qword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+0x7C]
        fstp qword ptr ss : [esp]
/*FIXUP push offset public_6fb5814 @0x6ec0b17*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5814
        push eax
        call dword ptr ds : [public_6fb3380]
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6ec0b00)
    }
}
