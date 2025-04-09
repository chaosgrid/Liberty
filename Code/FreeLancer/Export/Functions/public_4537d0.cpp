#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4537d0, internal_4537d0, public_4537d0);
extern "C" NAKED register_t __cdecl internal_4537d0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        mov ebx, dword ptr ss : [esp+0x3C]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        lea eax, ds:[ebx+0x24]
        push eax
        lea ecx, ss:[esp+0x10]
        lea esi, ds:[edi+0x2C]
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c6270]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0x6C]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [edx+8], eax
        call dword ptr ds : [public_5c6274]
        add edi, 0x78
        mov esi, eax
        mov ecx, 9
        rep movsd
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x4537d0)
    }
}
