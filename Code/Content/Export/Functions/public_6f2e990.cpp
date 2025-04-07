#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e990);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f320);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2e9f9 _public_6f2e9f9
#define public_6f2ea17 _public_6f2ea17

PROC_DECLARE(0x6f2e990, internal_6f2e990, public_6f2e990);
extern "C" NAKED register_t __cdecl internal_6f2e990()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x135]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_6f2ea17
        mov al, byte ptr ss : [ebp+0x134]
        push esi
        push 0x138
        mov byte ptr ss : [esp+0x18], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [esi+4], ecx
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        mov byte ptr ds : [esi+0x134], dl
        mov byte ptr ds : [esi+0x135], 0
        call public_6f2f320
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ds : [edi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6f2e9f9
        mov ebx, esi
        public_6f2e9f9 : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_6f2e990
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_6f2e990
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_6f2ea17 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f2e990)
    }
}

#undef public_6f2e9f9
#undef public_6f2ea17
