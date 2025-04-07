#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e020);
CLANG_FORWARD_PROC_SYMBOL(public_6c2e510);

PROC_DECLARE(0x6c2e510, internal_6c2e510, public_6c2e510);
extern "C" NAKED register_t __cdecl internal_6c2e510()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov ebx, ecx
        xor eax, eax
        mov ecx, 0x1C
        mov edi, esi
        rep stosd
        lea eax, ds:[esi+4]
        push eax
        push 1
        mov ecx, ebx
        call public_6c2e020
        lea ecx, ds:[esi+0x18]
        push ecx
        push 8
        mov ecx, ebx
        call public_6c2e020
        lea edx, ds:[esi+0x40]
        push edx
        push 2
        mov ecx, ebx
        call public_6c2e020
        lea eax, ds:[esi+0x54]
        push eax
        push 4
        mov ecx, ebx
        call public_6c2e020
        lea ecx, ds:[esi+0x2C]
        push ecx
        push 0x10
        mov ecx, ebx
        call public_6c2e020
        mov dword ptr ds : [esi], 2
        mov edx, dword ptr ds : [ebx+0x34]
        movzx eax, word ptr ds : [edx+0xC]
        mov dword ptr ds : [esi+0x68], eax
        mov ecx, dword ptr ds : [ebx+0x34]
        movzx edx, word ptr ds : [ecx+0xE]
        pop edi
        mov dword ptr ds : [esi+0x6C], edx
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c2e510)
    }
}
