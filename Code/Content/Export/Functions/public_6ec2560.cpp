#include "Content-PCH.h"

PROC_DECLARE(0x6ec2560, internal_6ec2560, public_6ec2560);
extern "C" NAKED register_t __cdecl internal_6ec2560()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x4C]
        mov ecx, dword ptr ss : [esp+4]
        push eax
/*FIXUP push offset public_6fb5964 @0x6ec2568*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5964
        push ecx
        call dword ptr ds : [public_6fb3380]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ec2560)
    }
}
