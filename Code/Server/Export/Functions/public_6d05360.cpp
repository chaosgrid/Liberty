#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdf50);
CLANG_FORWARD_PROC_SYMBOL(public_6d05360);
CLANG_FORWARD_PROC_SYMBOL(public_6d065f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5c880);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d0543c _public_6d0543c
#define public_6d05460 _public_6d05460
#define public_6d05484 _public_6d05484
#define public_6d0548f _public_6d0548f
#define public_6d054a1 _public_6d054a1
#define public_6d054ad _public_6d054ad
#define public_6d054ba _public_6d054ba

PROC_DECLARE(0x6d05360, internal_6d05360, public_6d05360);
extern "C" NAKED register_t __cdecl internal_6d05360()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [ebp+4], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [ebp+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [ebp+0xC], eax
        mov cl, byte ptr ds : [edi+0x10]
        lea esi, ss:[ebp+0x10]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ds : [edi+0x11]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ds : [edi+0x1C]
        push 0x18
        mov byte ptr ds : [esi+0xC], al
        call public_6d60012
        xor edx, edx
        mov dword ptr ds : [eax+4], edx
        mov byte ptr ds : [eax+0x15], dl
        mov cl, 1
        mov byte ptr ds : [eax+0x14], cl
        mov dword ptr ds : [esi+8], eax
        mov byte ptr ds : [eax+0x15], cl
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], edx
        mov ebx, dword ptr ds : [esi+8]
        push 0x18
        call public_6d60012
        mov dword ptr ds : [eax+4], ebx
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov ecx, dword ptr ds : [edi+0x14]
        mov ebx, dword ptr ds : [ecx+4]
        mov cl, byte ptr ds : [ebx+0x15]
        add esp, 8
        test cl, cl
        mov dword ptr ss : [esp+0x10], edx
        jne public_6d05460
        xor ecx, ecx
        mov cl, byte ptr ds : [ebx+0x14]
        push ecx
        push eax
        mov ecx, esi
        call public_6cfdf50
        lea edx, ds:[ebx+0xC]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        add eax, 0xC
        push eax
        call public_6d5c880
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, edx
        jne public_6d0543c
        mov dword ptr ss : [esp+0x10], eax
        public_6d0543c : nop
        mov edx, dword ptr ds : [ebx]
        push eax
        push edx
        mov ecx, esi
        call public_6d065f0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [ebx+8]
        push ecx
        push eax
        mov ecx, esi
        call public_6d065f0
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], eax
        public_6d05460 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [edi+0x20]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ecx
        mov eax, dword ptr ds : [edx+4]
        cmp eax, dword ptr ds : [esi+8]
        je public_6d054ba
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6d0548f
        public_6d05484 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6d05484
        public_6d0548f : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_6d054ad
        public_6d054a1 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_6d054a1
        public_6d054ad : nop
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6d054ba : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6d05360)
    }
}

#undef public_6d0543c
#undef public_6d05460
#undef public_6d05484
#undef public_6d0548f
#undef public_6d054a1
#undef public_6d054ad
#undef public_6d054ba
