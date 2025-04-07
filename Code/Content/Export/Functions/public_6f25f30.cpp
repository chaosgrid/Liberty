#include "Content-PCH.h"


#define public_6f25f4e _public_6f25f4e

PROC_DECLARE(0x6f25f30, internal_6f25f30, public_6f25f30);
extern "C" NAKED register_t __cdecl internal_6f25f30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6f25f4e
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0xC
        push ecx
/*FIXUP push offset public_6fb91d0 @0x6f25f3f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb91d0
        push eax
        call dword ptr ds : [public_6fb3380]
        add esp, 0xC
        public_6f25f4e : nop
        ret 4
        UNREACHABLE_TRAP(0x6f25f30)
    }
}

#undef public_6f25f4e
