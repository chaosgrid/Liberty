#include "Content-PCH.h"

PROC_DECLARE(0x6f076c0, internal_6f076c0, public_6f076c0);
extern "C" NAKED register_t __cdecl internal_6f076c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        mov edx, dword ptr ds : [ecx+0x30]
        sub esp, 0x40
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0x18]
        lea esi, ds:[ecx+0x18]
        mov dword ptr ds : [ecx+0x30], eax
        mov eax, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+0x14], edi
        mov edi, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [ecx+0x2C], edx
        mov edx, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [ecx+0x1C], edi
        mov edi, dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [ecx+0x20], edx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6fb3664]
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        call dword ptr ds : [public_6fb3630]
        fld dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [public_6fb83b4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        lea esi, ds:[edi+0xC]
        fstp dword ptr ds : [edi+0x18]
        mov dword ptr ds : [esi], eax
        add esp, 0x18
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [edi+8], 0
        pop edi
        mov dword ptr ds : [esi+8], edx
        pop esi
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x6f076c0)
    }
}
