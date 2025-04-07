#include "Content-PCH.h"

PROC_DECLARE(0x6ec0e70, internal_6ec0e70, public_6ec0e70);
extern "C" NAKED register_t __cdecl internal_6ec0e70()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+4]
        push eax
/*FIXUP push offset public_6fb5854 @0x6ec0e78*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5854
        push ecx
        call dword ptr ds : [public_6fb3380]
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x6ec0e70)
    }
}
