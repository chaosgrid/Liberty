#include "Content-PCH.h"

PROC_DECLARE(0x6ec2390, internal_6ec2390, public_6ec2390);
extern "C" NAKED register_t __cdecl internal_6ec2390()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x80]
        mov ecx, dword ptr ss : [esp+4]
        push eax
/*FIXUP push offset public_6fb5950 @0x6ec239b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5950
        push ecx
        call dword ptr ds : [public_6fb3380]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ec2390)
    }
}
