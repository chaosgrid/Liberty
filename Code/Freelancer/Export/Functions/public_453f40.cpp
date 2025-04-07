#include "Freelancer-PCH.h"

PROC_DECLARE(0x453f40, internal_453f40, public_453f40);
extern "C" NAKED register_t __cdecl internal_453f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        lea esi, ds:[eax+0x78]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x453f40)
    }
}
