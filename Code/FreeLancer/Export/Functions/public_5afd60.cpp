#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5afd60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5afda5 _public_5afda5
#define public_5afdb7 _public_5afdb7
#define public_5afdd5 _public_5afdd5

PROC_DECLARE(0x5afd60, internal_5afd60, public_5afd60);
extern "C" NAKED register_t __cdecl internal_5afd60()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        mov al, byte ptr ss : [ebp+0x11]
        test al, al
        push edi
        mov edi, ecx
        mov ebx, dword ptr ds : [edi+8]
        jne public_5afdd5
        mov al, byte ptr ss : [ebp+0x10]
        push esi
        push 0x14
        mov byte ptr ss : [esp+0x18], al
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dl, byte ptr ss : [esp+0x18]
        mov esi, eax
        lea eax, ds:[esi+0xC]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [esi+4], ecx
        mov byte ptr ds : [esi+0x10], dl
        mov byte ptr ds : [esi+0x11], 0
        je public_5afda5
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax], ecx
        public_5afda5 : nop
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi], edx
        mov eax, dword ptr ds : [edi+8]
        mov dword ptr ds : [esi+8], eax
        cmp ebx, dword ptr ds : [edi+8]
        jne public_5afdb7
        mov ebx, esi
        public_5afdb7 : nop
        mov ecx, dword ptr ss : [ebp]
        push esi
        push ecx
        mov ecx, edi
        call public_5afd60
        mov dword ptr ds : [esi], eax
        mov edx, dword ptr ss : [ebp+8]
        push esi
        push edx
        mov ecx, edi
        call public_5afd60
        mov dword ptr ds : [esi+8], eax
        pop esi
        public_5afdd5 : nop
        pop edi
        pop ebp
        mov eax, ebx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x5afd60)
    }
}

#undef public_5afda5
#undef public_5afdb7
#undef public_5afdd5
