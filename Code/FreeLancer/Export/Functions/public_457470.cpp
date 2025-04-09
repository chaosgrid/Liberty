#include "Freelancer-PCH.h"

PROC_DECLARE(0x457470, internal_457470, public_457470);
extern "C" NAKED register_t __cdecl internal_457470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0xA8]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x457470)
    }
}
