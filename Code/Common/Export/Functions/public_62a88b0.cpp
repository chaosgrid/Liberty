#include "Common-PCH.h"

PROC_DECLARE(0x62a88b0, internal_62a88b0, public_62a88b0);
extern "C" NAKED register_t __cdecl internal_62a88b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov eax, ecx
        mov ecx, 0xF6
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62a88b0)
    }
}
