#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da8027 _public_6da8027
#define public_6da803c _public_6da803c
#define public_6da804e _public_6da804e
#define public_6da806f _public_6da806f
#define public_6da8081 _public_6da8081
#define public_6da80ac _public_6da80ac
#define public_6da80df _public_6da80df

PROC_DECLARE(0x6da7fe0, internal_6da7fe0, public_6da7fe0);
extern "C" NAKED register_t __cdecl internal_6da7fe0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da8027
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da8027 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da803c
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da803c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da804e
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da804e : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x20]
        mov byte ptr ds : [eax], cl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da806f
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da806f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da8081
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da8081 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da80ac
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da80ac : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov edi, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6da80df
        mov dword ptr ds : [ecx+0x10], esi
        public_6da80df : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da7fe0)
    }
}

#undef public_6da8027
#undef public_6da803c
#undef public_6da804e
#undef public_6da806f
#undef public_6da8081
#undef public_6da80ac
#undef public_6da80df
