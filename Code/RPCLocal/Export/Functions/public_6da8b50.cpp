#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da8b99 _public_6da8b99
#define public_6da8bb1 _public_6da8bb1
#define public_6da8bc1 _public_6da8bc1
#define public_6da8be0 _public_6da8be0
#define public_6da8bf0 _public_6da8bf0
#define public_6da8c0f _public_6da8c0f
#define public_6da8c1f _public_6da8c1f
#define public_6da8c40 _public_6da8c40
#define public_6da8c50 _public_6da8c50
#define public_6da8c7b _public_6da8c7b
#define public_6da8cae _public_6da8cae

PROC_DECLARE(0x6da8b50, internal_6da8b50, public_6da8b50);
extern "C" NAKED register_t __cdecl internal_6da8b50()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
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
        je public_6da8b99
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da8b99 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6da8bb1
        mov dword ptr ds : [esi+0xC], ebp
        public_6da8bb1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da8bc1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da8bc1 : nop
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
        jbe public_6da8be0
        mov dword ptr ds : [esi+0xC], ebp
        public_6da8be0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da8bf0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da8bf0 : nop
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
        jbe public_6da8c0f
        mov dword ptr ds : [esi+0xC], ebp
        public_6da8c0f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da8c1f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da8c1f : nop
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [edi+0x28]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da8c40
        mov dword ptr ds : [esi+0xC], ebp
        public_6da8c40 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da8c50
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da8c50 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2A]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da8c7b
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da8c7b : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6da8cae
        mov dword ptr ds : [ecx+0x10], esi
        public_6da8cae : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da8b50)
    }
}

#undef public_6da8b99
#undef public_6da8bb1
#undef public_6da8bc1
#undef public_6da8be0
#undef public_6da8bf0
#undef public_6da8c0f
#undef public_6da8c1f
#undef public_6da8c40
#undef public_6da8c50
#undef public_6da8c7b
#undef public_6da8cae
