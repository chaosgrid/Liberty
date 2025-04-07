#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x631b6a0, internal_631b6a0, public_631b6a0);
extern "C" NAKED register_t __cdecl internal_631b6a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebp, ds:[esi+0x10]
        push edi
        mov ecx, ebp
        call public_630e270
        lea ebx, ds:[esi+0x28]
        mov ecx, ebx
        call public_630e270
        lea ecx, ds:[esi+0x40]
        call public_630e270
        lea eax, ds:[esi+0x58]
        push eax
        call public_6334430
        xor eax, eax
        add esp, 4
        mov ecx, ebp
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov byte ptr ds : [esi+8], al
        mov byte ptr ds : [esi+9], al
        mov dword ptr ds : [esi+0xC], eax
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebp
        rep stosd
        mov ecx, ebx
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebx
        rep stosd
        lea edi, ds:[esi+0x40]
        mov ecx, edi
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x58], eax
        mov dword ptr ds : [esi+0x5C], eax
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi+4], eax
        mov cl, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+8], cl
        mov dl, byte ptr ds : [edi+5]
        lea ecx, ds:[edi+0xC]
        mov byte ptr ds : [esi+9], dl
        mov eax, dword ptr ds : [edi+8]
        push ecx
        mov ecx, ebp
        mov dword ptr ds : [esi+0xC], eax
        call public_630dda0
        lea edx, ds:[edi+0x24]
        push edx
        mov ecx, ebx
        call public_630dda0
        lea eax, ds:[edi+0x3C]
        push eax
        lea ecx, ds:[esi+0x40]
        call public_630dda0
        mov ecx, dword ptr ds : [edi+0x54]
        push ecx
        lea eax, ds:[esi+0x58]
        push eax
        call public_6334400
        mov edx, dword ptr ds : [edi+0x58]
        push edx
        call public_630d3f0
        add esp, 0xC
        pop edi
        mov dword ptr ds : [esi+0x5C], eax
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x631b6a0)
    }
}
