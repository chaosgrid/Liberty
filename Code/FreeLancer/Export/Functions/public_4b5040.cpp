#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4b5040, internal_4b5040, public_4b5040);
extern "C" NAKED register_t __cdecl internal_4b5040()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        lea edi, ds:[ecx+0x3C]
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4b5040)
    }
}
