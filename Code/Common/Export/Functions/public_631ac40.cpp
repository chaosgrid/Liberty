#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);

PROC_DECLARE(0x631ac40, internal_631ac40, public_631ac40);
extern "C" NAKED register_t __cdecl internal_631ac40()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        lea ebx, ds:[esi+0x14]
        push edi
        mov ecx, ebx
        call public_630e270
        lea ebp, ds:[esi+0x2C]
        mov ecx, ebp
        call public_630e270
        lea ecx, ds:[esi+0x44]
        call public_630e270
        xor eax, eax
        mov ecx, ebx
        mov dword ptr ds : [esi], 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebx
        rep stosd
        mov ecx, ebp
        call public_630e270
        xor eax, eax
        mov ecx, 6
        mov edi, ebp
        rep stosd
        lea edi, ds:[esi+0x44]
        mov ecx, edi
        call public_630e270
        xor eax, eax
        mov ecx, 6
        rep stosd
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0x5C], eax
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0xC], eax
        mov ecx, dword ptr ds : [edi+0x10]
        lea edx, ds:[edi+0x14]
        mov dword ptr ds : [esi+0x10], ecx
        push edx
        mov ecx, ebx
        call public_630dda0
        lea eax, ds:[edi+0x2C]
        push eax
        mov ecx, ebp
        call public_630dda0
        lea ecx, ds:[edi+0x44]
        push ecx
        lea ecx, ds:[esi+0x44]
        call public_630dda0
        mov edx, dword ptr ds : [edi+0x5C]
        pop edi
        mov dword ptr ds : [esi+0x5C], edx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x631ac40)
    }
}
