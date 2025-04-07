#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);

PROC_DECLARE(0x631b5c0, internal_631b5c0, public_631b5c0);
extern "C" NAKED register_t __cdecl internal_631b5c0()
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
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov dl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+8], dl
        mov al, byte ptr ds : [edi+9]
        mov byte ptr ds : [esi+9], al
        mov ecx, dword ptr ds : [edi+0xC]
        lea edx, ds:[edi+0x10]
        mov dword ptr ds : [esi+0xC], ecx
        push edx
        mov ecx, ebp
        call public_630dda0
        lea eax, ds:[edi+0x28]
        push eax
        mov ecx, ebx
        call public_630dda0
        lea ecx, ds:[edi+0x40]
        push ecx
        lea ecx, ds:[esi+0x40]
        call public_630dda0
        mov edx, dword ptr ds : [edi+0x58]
        push edx
        lea eax, ds:[esi+0x58]
        push eax
        call public_6334400
        mov eax, dword ptr ds : [edi+0x5C]
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+0x5C], eax
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x631b5c0)
    }
}
