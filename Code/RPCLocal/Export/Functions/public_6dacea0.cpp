#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dacee2 _public_6dacee2
#define public_6dacefa _public_6dacefa
#define public_6dacf22 _public_6dacf22
#define public_6dacf4a _public_6dacf4a
#define public_6dacf7c _public_6dacf7c
#define public_6dacfba _public_6dacfba
#define public_6dacfc6 _public_6dacfc6

PROC_DECLARE(0x6dacea0, internal_6dacea0, public_6dacea0);
extern "C" NAKED register_t __cdecl internal_6dacea0()
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
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dacee2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dacee2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6dacefa
        mov dword ptr ds : [esi+0xC], ecx
        public_6dacefa : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dacfc6
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dacf22
        mov dword ptr ds : [esi+0xC], ecx
        public_6dacf22 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dacfc6
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dacf4a
        mov dword ptr ds : [esi+0xC], ecx
        public_6dacf4a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dacfc6
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [eax]
        push esi
        push ebp
        mov word ptr ds : [edi+0x28], cx
        add eax, 2
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dacf7c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dacf7c : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6da16b0
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
        jbe public_6dacfba
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6dacfba : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dacfc6 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dacea0)
    }
}

#undef public_6dacee2
#undef public_6dacefa
#undef public_6dacf22
#undef public_6dacf4a
#undef public_6dacf7c
#undef public_6dacfba
#undef public_6dacfc6
