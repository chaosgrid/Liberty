#include "Content-PCH.h"

PROC_DECLARE(0x6f25fe0, internal_6f25fe0, public_6f25fe0);
extern "C" NAKED register_t __cdecl internal_6f25fe0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
/*FIXUP push offset public_6fb4368 @0x6f25fe7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4368
        push 0
        mov dword ptr ds : [esi+0x118], 0
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        neg eax
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x11C], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f25fe0)
    }
}
