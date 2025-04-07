#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dab127 _public_6dab127
#define public_6dab13e _public_6dab13e
#define public_6dab150 _public_6dab150
#define public_6dab171 _public_6dab171
#define public_6dab183 _public_6dab183
#define public_6dab1ac _public_6dab1ac
#define public_6dab1df _public_6dab1df

PROC_DECLARE(0x6dab0e0, internal_6dab0e0, public_6dab0e0);
extern "C" NAKED register_t __cdecl internal_6dab0e0()
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
        je public_6dab127
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab127 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab13e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab13e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab150
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab150 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6dab171
        mov dword ptr ds : [esi+0xC], 0x16
        public_6dab171 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6dab183
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab183 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dab1ac
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6dab1ac : nop
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
        jbe public_6dab1df
        mov dword ptr ds : [ecx+0x10], esi
        public_6dab1df : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6dab0e0)
    }
}

#undef public_6dab127
#undef public_6dab13e
#undef public_6dab150
#undef public_6dab171
#undef public_6dab183
#undef public_6dab1ac
#undef public_6dab1df
