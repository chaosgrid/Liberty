#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b6640);

#define public_62b667c _public_62b667c
#define public_62b668c _public_62b668c
#define public_62b669f _public_62b669f
#define public_62b66d6 _public_62b66d6
#define public_62b66e3 _public_62b66e3
#define public_62b66f7 _public_62b66f7
#define public_62b6713 _public_62b6713
#define public_62b6727 _public_62b6727
#define public_62b6743 _public_62b6743
#define public_62b6760 _public_62b6760
#define public_62b6764 _public_62b6764

PROC_DECLARE(0x62b6640, internal_62b6640, public_62b6640);
extern "C" NAKED register_t __cdecl internal_62b6640()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov cl, byte ptr ds : [esi+4]
        add esi, 4
        lea ebp, ds:[edi+4]
        xor edx, edx
        mov byte ptr ss : [ebp], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [eax]
        mov ebx, ecx
        cmp eax, ebx
        mov dword ptr ss : [esp+0x10], edi
        jae public_62b667c
        mov ebx, eax
        public_62b667c : nop
        cmp ebp, esi
        jne public_62b66e3
        cmp ebx, edx
        mov esi, eax
        jbe public_62b668c
        call dword ptr ds : [public_63991c4]
        public_62b668c : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ebx
        cmp eax, esi
        jae public_62b669f
        mov esi, eax
        public_62b669f : nop
        test esi, esi
        jbe public_62b66d6
        mov ecx, dword ptr ss : [ebp+4]
        add ebx, ecx
        sub eax, esi
        push eax
        lea edx, ds:[ebx+esi]
        push edx
        push ebx
        call dword ptr ds : [public_6399330]
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 0xC
        push 0
        sub ebx, esi
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62b66d6
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d8]
        public_62b66d6 : nop
        mov ecx, ebp
        call dword ptr ds : [public_63991bc]
        jmp public_62b6764
        public_62b66e3 : nop
        cmp ebx, edx
        jbe public_62b6727
        cmp ebx, ecx
        jne public_62b6727
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edx
        jne public_62b66f7
        mov eax, dword ptr ds : [public_63991d0]
        public_62b66f7 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_62b6727
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_63991b8]
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        jne public_62b6713
        mov eax, dword ptr ds : [public_63991d0]
        public_62b6713 : nop
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ss : [ebp+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0xC], edx
        inc byte ptr ds : [eax-1]
        jmp public_62b6764
        public_62b6727 : nop
        push 1
        push ebx
        mov ecx, ebp
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_62b6760
        mov esi, dword ptr ds : [esi+4]
        test esi, esi
        jne public_62b6743
        mov esi, dword ptr ds : [public_63991d0]
        public_62b6743 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_62b6760 : nop
        mov edi, dword ptr ss : [esp+0x10]
        public_62b6764 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ds : [edi+0x14], edx
        mov ecx, dword ptr ds : [eax+0x18]
        mov dword ptr ds : [edi+0x18], ecx
        mov edx, dword ptr ds : [eax+0x1C]
        mov dword ptr ds : [edi+0x1C], edx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x62b6640)
    }
}

#undef public_62b667c
#undef public_62b668c
#undef public_62b669f
#undef public_62b66d6
#undef public_62b66e3
#undef public_62b66f7
#undef public_62b6713
#undef public_62b6727
#undef public_62b6743
#undef public_62b6760
#undef public_62b6764
