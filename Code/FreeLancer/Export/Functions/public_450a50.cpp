#include "Freelancer-PCH.h"

PROC_DECLARE(0x450a50, internal_450a50, public_450a50);
extern "C" NAKED register_t __cdecl internal_450a50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x48
        push esi
        mov esi, dword ptr ds : [eax+0x60]
        push edi
        shl esi, 6
        add esi, offset public_668b10
        mov ecx, 9
        lea edi, ss:[esp+8]
        rep movsd
        lea ecx, ss:[esp+8]
        push ecx
        lea edx, ss:[esp+0x30]
        push edx
        lea ecx, ds:[eax+0x20]
        call dword ptr ds : [public_5c627c]
        mov edi, dword ptr ss : [esp+0x58]
        mov esi, eax
        mov ecx, 9
        rep movsd
        pop edi
        xor eax, eax
        pop esi
        add esp, 0x48
        ret 8
        UNREACHABLE_TRAP(0x450a50)
    }
}
