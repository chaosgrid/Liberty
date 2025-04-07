#include "Content-PCH.h"

PROC_DECLARE(0x6ef0be0, internal_6ef0be0, public_6ef0be0);
extern "C" NAKED register_t __cdecl internal_6ef0be0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0x1C]
        mov ebp, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+0x80]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [edx+8]
        movzx ecx, byte ptr ds : [eax+0x54]
        inc ecx
        mov dword ptr ds : [esi+0xC], ecx
        lea ebx, ds:[esi+0x10]
        push 0x734
        mov ecx, ebx
        call dword ptr ds : [public_6fb303c]
        mov edx, dword ptr ss : [ebp+8]
        add edx, 0x10
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_6fb3134]
        mov ebp, dword ptr ds : [public_6fb3038]
        mov ecx, ebx
        call ebp
        lea ebx, ds:[esi+0x28]
        push 0x72A
        mov ecx, ebx
        call dword ptr ds : [public_6fb303c]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[edi+0x14]
        push ecx
        call dword ptr ds : [public_6fb346c]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 8
        push edx
        mov ecx, ebx
        call dword ptr ds : [public_6fb307c]
        mov ecx, ebx
        call ebp
        lea eax, ds:[edi+0x24]
        push eax
        lea ecx, ds:[esi+0x40]
        call dword ptr ds : [public_6fb3088]
        mov ecx, dword ptr ds : [edi+0x3C]
        mov dword ptr ds : [esi+0x58], ecx
        mov edx, dword ptr ds : [edi+0xC]
        pop edi
        mov dword ptr ds : [esi+0x5C], edx
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6ef0be0)
    }
}
