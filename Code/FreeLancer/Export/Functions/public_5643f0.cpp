#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403ea0);
CLANG_FORWARD_PROC_SYMBOL(public_417780);
CLANG_FORWARD_PROC_SYMBOL(public_417790);

PROC_DECLARE(0x5643f0, internal_5643f0, public_5643f0);
extern "C" NAKED register_t __cdecl internal_5643f0()
{
    __asm
    {
        sub esp, 0x1C
        mov eax, dword ptr ds : [public_67a484]
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        call public_417790
        mov ecx, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [edx+0x18]
        mov edi, dword ptr ss : [esp+0x28]
        sub edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, eax
        mov edx, eax
        mov byte ptr ss : [esp+0x2A], al
        shr eax, 0x18
        mov byte ptr ss : [esp+0x2B], al
        lea eax, ss:[esp+0x28]
        shr ecx, 0x10
        shr edx, 8
        push eax
        mov byte ptr ss : [esp+0x2C], cl
        mov byte ptr ss : [esp+0x2D], dl
        call public_417780
        mov ecx, dword ptr ds : [esi+0x98]
        mov eax, dword ptr ss : [esp+0x38]
        mov edx, dword ptr ds : [ecx]
        add esp, 4
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [esi+0x78]
        xor eax, eax
        add ecx, edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [esi+0x98]
        mov dword ptr ss : [esp+0x10], eax
        fild qword ptr ss : [esp+0xC]
        add edx, edi
        mov dword ptr ss : [esp+0xC], edx
        mov dword ptr ss : [esp+0x10], eax
        fstp dword ptr ss : [esp+0x14]
        push eax
        fild qword ptr ss : [esp+0x10]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        fstp dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        call public_417790
        mov eax, dword ptr ds : [public_67a480]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call public_403ea0
        mov eax, dword ptr ds : [public_67a484]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call public_403ea0
        add esp, 0x18
        pop edi
        pop esi
        add esp, 0x1C
        ret 0x10
        UNREACHABLE_TRAP(0x5643f0)
    }
}
