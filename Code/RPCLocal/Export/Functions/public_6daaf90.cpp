#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6daafd7 _public_6daafd7
#define public_6daafee _public_6daafee
#define public_6dab000 _public_6dab000
#define public_6dab023 _public_6dab023
#define public_6dab035 _public_6dab035
#define public_6dab058 _public_6dab058
#define public_6dab06a _public_6dab06a
#define public_6dab097 _public_6dab097
#define public_6dab0c8 _public_6dab0c8

PROC_DECLARE(0x6daaf90, internal_6daaf90, public_6daaf90);
extern "C" NAKED register_t __cdecl internal_6daaf90()
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
        je public_6daafd7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6daafd7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daafee
        mov dword ptr ds : [esi+0xC], 0x16
        public_6daafee : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab000
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab000 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab023
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab023 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab035
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab035 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab058
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab058 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab06a
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab06a : nop
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [edi+0x28]
        mov word ptr ds : [eax], cx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 2
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dab097
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab097 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6dab0c8
        mov dword ptr ds : [ecx+0x10], esi
        public_6dab0c8 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6daaf90)
    }
}

#undef public_6daafd7
#undef public_6daafee
#undef public_6dab000
#undef public_6dab023
#undef public_6dab035
#undef public_6dab058
#undef public_6dab06a
#undef public_6dab097
#undef public_6dab0c8
