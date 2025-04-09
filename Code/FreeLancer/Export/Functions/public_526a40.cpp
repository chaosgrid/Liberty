#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f110);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_526a40);
CLANG_FORWARD_PROC_SYMBOL(public_527770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_526b39 _public_526b39
#define public_526b5d _public_526b5d
#define public_526b80 _public_526b80
#define public_526b8a _public_526b8a
#define public_526ba0 _public_526ba0
#define public_526bac _public_526bac
#define public_526bb9 _public_526bb9

PROC_DECLARE(0x526a40, internal_526a40, public_526a40);
extern "C" NAKED register_t __cdecl internal_526a40()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [ebx+4], ecx
        push esi
        push edi
        lea esi, ss:[ebp+8]
        lea edi, ds:[ebx+8]
        mov ecx, 9
        rep movsd
        lea edx, ss:[ebp+0x2C]
        mov ecx, dword ptr ds : [edx]
        lea eax, ds:[ebx+0x2C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [ebx+0x38], eax
        mov cl, byte ptr ss : [ebp+0x3C]
        lea esi, ds:[ebx+0x3C]
        mov byte ptr ds : [esi], cl
        mov dl, byte ptr ss : [ebp+0x3D]
        mov byte ptr ds : [esi+1], dl
        mov al, byte ptr ss : [ebp+0x48]
        push 0x18
        mov byte ptr ds : [esi+0xC], al
        call public_5b7e84
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
        mov edi, dword ptr ds : [esi+8]
        push 0x18
        call public_5b7e84
        mov dword ptr ds : [eax+4], edi
        mov byte ptr ds : [eax+0x14], 0
        mov byte ptr ds : [eax+0x15], 0
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov ecx, dword ptr ss : [ebp+0x40]
        mov edi, dword ptr ds : [ecx+4]
        mov cl, byte ptr ds : [edi+0x15]
        add esp, 8
        test cl, cl
        mov dword ptr ss : [esp+0x10], edx
        jne public_526b5d
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0x14]
        push ecx
        push eax
        mov ecx, esi
        call public_40f110
        lea edx, ds:[edi+0xC]
        mov dword ptr ss : [esp+0x18], eax
        push edx
        add eax, 0xC
        push eax
        call public_4e5fc0
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [esi+8]
        add esp, 8
        cmp ecx, edx
        jne public_526b39
        mov dword ptr ss : [esp+0x10], eax
        public_526b39 : nop
        mov edx, dword ptr ds : [edi]
        push eax
        push edx
        mov ecx, esi
        call public_527770
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edi+8]
        push ecx
        push eax
        mov ecx, esi
        call public_527770
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], eax
        public_526b5d : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [ebp+0x4C]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ecx
        mov eax, dword ptr ds : [edx+4]
        cmp eax, dword ptr ds : [esi+8]
        je public_526bb9
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_526b8a
        public_526b80 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        je public_526b80
        public_526b8a : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        jne public_526bac
        lea esp, ss:[esp]
        public_526ba0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x15]
        test dl, dl
        je public_526ba0
        public_526bac : nop
        pop edi
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        public_526bb9 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x526a40)
    }
}

#undef public_526b39
#undef public_526b5d
#undef public_526b80
#undef public_526b8a
#undef public_526ba0
#undef public_526bac
#undef public_526bb9
