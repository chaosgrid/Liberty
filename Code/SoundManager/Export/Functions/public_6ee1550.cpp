#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee1550, internal_6ee1550, public_6ee1550);
extern "C" NAKED register_t __cdecl internal_6ee1550()
{
    __asm
    {
/*FIXUP push offset public_6eea140 @0x6ee1550*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea140
        push 0x204
/*FIXUP push offset public_6eea070 @0x6ee155a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100001
/*FIXUP push offset public_6eea124 @0x6ee1564*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea124
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6ee1550)
    }
}
