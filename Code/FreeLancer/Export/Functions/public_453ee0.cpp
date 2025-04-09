#include "FreeLancer-PCH.h"

PROC_DECLARE(0x453ee0, internal_453ee0, public_453ee0);
extern "C" NAKED register_t __cdecl internal_453ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        lea edi, ds:[eax+0x78]
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x453ee0)
    }
}
