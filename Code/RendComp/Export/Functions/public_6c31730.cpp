#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c31500);
CLANG_FORWARD_PROC_SYMBOL(public_6c31730);

PROC_DECLARE(0x6c31730, internal_6c31730, public_6c31730);
extern "C" NAKED register_t __cdecl internal_6c31730()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x18]
        mov ebp, dword ptr ds : [eax+0x34]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        xor eax, eax
        mov ecx, 0x1C
        mov edi, esi
        rep stosd
        lea ecx, ds:[esi+4]
        push ecx
        push 1
        mov ecx, ebx
        call public_6c31500
        lea edx, ds:[esi+0x18]
        push edx
        push 8
        mov ecx, ebx
        call public_6c31500
        lea eax, ds:[esi+0x40]
        push eax
        push 2
        mov ecx, ebx
        call public_6c31500
        lea ecx, ds:[esi+0x54]
        push ecx
        push 4
        mov ecx, ebx
        call public_6c31500
        lea edx, ds:[esi+0x2C]
        push edx
        push 0x10
        mov ecx, ebx
        call public_6c31500
        mov dword ptr ds : [esi], 2
        movzx eax, word ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0x68], eax
        mov ecx, dword ptr ds : [ebx+0x1C]
        movzx edx, word ptr ds : [ecx+0xA]
        pop edi
        mov dword ptr ds : [esi+0x6C], edx
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6c31730)
    }
}
