#include "Freelancer-PCH.h"

PROC_DECLARE(0x450aa0, internal_450aa0, public_450aa0);
extern "C" NAKED register_t __cdecl internal_450aa0()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [esi+0x6C]
        shl eax, 6
        add eax, offset public_668b04
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0xC], ecx
        push edi
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], edx
        push ecx
        lea edx, ss:[esp+0x20]
        lea ebx, ds:[esi+0x2C]
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x20], eax
        call dword ptr ds : [public_5c6278]
        mov edx, dword ptr ds : [eax]
        mov ebp, dword ptr ss : [esp+0x78]
        lea ecx, ss:[ebp+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov esi, dword ptr ds : [esi+0x6C]
        shl esi, 6
        add esi, offset public_668b10
        mov ecx, 9
        lea edi, ss:[esp+0x28]
        rep movsd
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x50]
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_5c627c]
        mov esi, eax
        mov edi, ebp
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x450aa0)
    }
}
