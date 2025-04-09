#include "Freelancer-PCH.h"

PROC_DECLARE(0x453f60, internal_453f60, public_453f60);
extern "C" NAKED register_t __cdecl internal_453f60()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [eax+0x7C]
        push esi
        push edi
        add eax, 0x78
        lea esi, ds:[eax+0xC]
        mov ecx, 9
        lea edi, ss:[esp+8]
        rep movsd
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov edi, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x34], eax
        mov ecx, 0xC
        lea esi, ss:[esp+8]
        mov dword ptr ss : [esp+0x30], edx
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x453f60)
    }
}
