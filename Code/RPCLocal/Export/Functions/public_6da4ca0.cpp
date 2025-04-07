#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da4ce6 _public_6da4ce6
#define public_6da4cfc _public_6da4cfc
#define public_6da4d24 _public_6da4d24
#define public_6da4d4e _public_6da4d4e
#define public_6da4d7f _public_6da4d7f
#define public_6da4da6 _public_6da4da6
#define public_6da4dcd _public_6da4dcd
#define public_6da4dee _public_6da4dee
#define public_6da4e65 _public_6da4e65
#define public_6da4e9e _public_6da4e9e
#define public_6da4ed0 _public_6da4ed0
#define public_6da4f0e _public_6da4f0e
#define public_6da4f1a _public_6da4f1a

PROC_DECLARE(0x6da4ca0, internal_6da4ca0, public_6da4ca0);
extern "C" NAKED register_t __cdecl internal_6da4ca0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da4ce6
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        pop ecx
        ret 0xC
        public_6da4ce6 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6da4cfc
        mov dword ptr ds : [esi+0xC], ebp
        public_6da4cfc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da4f1a
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edi+0x20], dl
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da4d24
        mov dword ptr ds : [esi+0xC], ebp
        public_6da4d24 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da4f1a
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da4d4e
        mov dword ptr ds : [esi+0xC], ebp
        public_6da4d4e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da4f1a
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x28]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6da4d7f
        mov dword ptr ds : [esi+0xC], ebp
        public_6da4d7f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da4f1a
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+4]
        mov byte ptr ss : [esp+0x18], dl
        mov edx, dword ptr ds : [esi]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da4da6
        mov dword ptr ds : [esi+0xC], ebp
        public_6da4da6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da4f1a
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        inc edx
        mov byte ptr ss : [esp+0x13], cl
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da4dcd
        mov dword ptr ds : [esi+0xC], ebp
        public_6da4dcd : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da4f1a
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6da4dee
        mov dword ptr ds : [esi+0xC], ebp
        public_6da4dee : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da4f1a
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        movsx eax, byte ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        movsx eax, byte ptr ss : [esp+0x13]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        fmul qword ptr ds : [public_6db3fe0]
        movsx edx, dl
        movsx eax, cl
        fstp dword ptr ds : [edi+0x38]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], edx
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ds : [edi+0x3C]
        fild dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ds : [edi+0x40]
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ds : [edi+0x34]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da4e65
        mov dword ptr ds : [esi+0xC], ebp
        public_6da4e65 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da4f1a
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        movsx ecx, cl
        mov dword ptr ss : [esp+0x18], ecx
        inc eax
        mov dword ptr ds : [ebx], eax
        fild dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ds : [edi+0x48]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da4e9e
        mov dword ptr ds : [esi+0xC], ebp
        public_6da4e9e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da4f1a
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x1C]
        push esi
        push eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edi+0x44], edx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da4ed0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6da4ed0 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
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
        jbe public_6da4f0e
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6da4f0e : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6da4f1a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6da4ca0)
    }
}

#undef public_6da4ce6
#undef public_6da4cfc
#undef public_6da4d24
#undef public_6da4d4e
#undef public_6da4d7f
#undef public_6da4da6
#undef public_6da4dcd
#undef public_6da4dee
#undef public_6da4e65
#undef public_6da4e9e
#undef public_6da4ed0
#undef public_6da4f0e
#undef public_6da4f1a
