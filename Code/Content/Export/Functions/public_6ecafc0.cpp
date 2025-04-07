#include "Content-PCH.h"

PROC_DECLARE(0x6ecafc0, internal_6ecafc0, public_6ecafc0);
extern "C" NAKED register_t __cdecl internal_6ecafc0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        push 0
        call dword ptr ds : [public_6fb3040]
        neg al
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0xC], al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ecafc0)
    }
}
