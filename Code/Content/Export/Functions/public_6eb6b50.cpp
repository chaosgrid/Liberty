#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6b50);

PROC_DECLARE(0x6eb6b50, internal_6eb6b50, public_6eb6b50);
extern "C" NAKED register_t __cdecl internal_6eb6b50()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_6fb3088]
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ds : [esi], eax
        mov cl, byte ptr ds : [edi+4]
        mov byte ptr ds : [esi+4], cl
        mov dl, byte ptr ds : [edi+5]
        lea ecx, ds:[edi+0xC]
        mov byte ptr ds : [esi+5], dl
        mov eax, dword ptr ds : [edi+8]
        push ecx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ds : [esi+8], eax
        call ebx
        lea edx, ds:[edi+0x24]
        push edx
        lea ecx, ds:[esi+0x24]
        call ebx
        lea eax, ds:[edi+0x3C]
        push eax
        lea ecx, ds:[esi+0x3C]
        call ebx
        mov ecx, dword ptr ds : [edi+0x54]
        mov dword ptr ds : [esi+0x54], ecx
        mov edx, dword ptr ds : [edi+0x58]
        mov dword ptr ds : [esi+0x58], edx
        mov eax, dword ptr ds : [edi+0x5C]
        mov dword ptr ds : [esi+0x5C], eax
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eb6b50)
    }
}
