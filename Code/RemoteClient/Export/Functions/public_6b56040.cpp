#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e960);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b56082 _public_6b56082
#define public_6b560a4 _public_6b560a4
#define public_6b560cc _public_6b560cc
#define public_6b560e4 _public_6b560e4
#define public_6b5610c _public_6b5610c
#define public_6b56134 _public_6b56134
#define public_6b5615c _public_6b5615c
#define public_6b5618c _public_6b5618c
#define public_6b561ca _public_6b561ca
#define public_6b561d6 _public_6b561d6

PROC_DECLARE(0x6b56040, internal_6b56040, public_6b56040);
extern "C" NAKED register_t __cdecl internal_6b56040()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b56082
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b56082 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        push ecx
        push esi
        push ebx
        lea edx, ss:[esp+0x24]
        push edx
        mov ecx, edi
        call public_6b4e960
        test eax, eax
        je public_6b560a4
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b560a4 : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_6b560cc
        push 0x18
        push eax
        lea eax, ds:[edi+0x20]
        push eax
        call dword ptr ds : [public_6b6b1e8]
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        mov word ptr ds : [edi+0x4E], 0
        call public_6b6a092
        add esp, 0x10
        public_6b560cc : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6b560e4
        mov dword ptr ds : [esi+0xC], ecx
        public_6b560e4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b561d6
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x50], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b5610c
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5610c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b561d6
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x54], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b56134
        mov dword ptr ds : [esi+0xC], ecx
        public_6b56134 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b561d6
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x58], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6b5615c
        mov dword ptr ds : [esi+0xC], ecx
        public_6b5615c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b561d6
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0x5C], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b5618c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b5618c : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6b4ecd0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6b561ca
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b561ca : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b561d6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b56040)
    }
}

#undef public_6b56082
#undef public_6b560a4
#undef public_6b560cc
#undef public_6b560e4
#undef public_6b5610c
#undef public_6b56134
#undef public_6b5615c
#undef public_6b5618c
#undef public_6b561ca
#undef public_6b561d6
