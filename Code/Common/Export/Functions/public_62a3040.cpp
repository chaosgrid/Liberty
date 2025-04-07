#include "Common-PCH.h"

PROC_DECLARE(0x62a3040, internal_62a3040, public_62a3040);
extern "C" NAKED register_t __cdecl internal_62a3040()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        lea esi, ds:[ecx+0xC]
        mov ecx, 9
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a3040)
    }
}
