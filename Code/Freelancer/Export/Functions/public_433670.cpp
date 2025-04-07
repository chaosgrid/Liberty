#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433670);
CLANG_FORWARD_PROC_SYMBOL(public_433da0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4336ca _public_4336ca
#define public_4336e8 _public_4336e8

PROC_DECLARE(0x433670, internal_433670, public_433670);
extern "C" NAKED register_t __cdecl internal_433670()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x21]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_4336e8
        mov al, byte ptr ss : [ebp+0x20]
        push esi
        push 0x24
        mov byte ptr ss : [esp+0x18], al
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [esi+4], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        mov byte ptr ds : [esi+0x20], dl
        mov byte ptr ds : [esi+0x21], 0
        call public_433da0
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_4336ca
        mov ebx, esi
        public_4336ca : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_433670
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_433670
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_4336e8 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x433670)
    }
}

#undef public_4336ca
#undef public_4336e8
