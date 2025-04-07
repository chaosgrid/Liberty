#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6db1ba7 _public_6db1ba7
#define public_6db1bbe _public_6db1bbe
#define public_6db1bd0 _public_6db1bd0
#define public_6db1bf1 _public_6db1bf1
#define public_6db1c03 _public_6db1c03
#define public_6db1c22 _public_6db1c22
#define public_6db1c34 _public_6db1c34
#define public_6db1c5d _public_6db1c5d
#define public_6db1c8e _public_6db1c8e

PROC_DECLARE(0x6db1b60, internal_6db1b60, public_6db1b60);
extern "C" NAKED register_t __cdecl internal_6db1b60()
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
        je public_6db1ba7
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6db1ba7 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6db1bbe
        mov dword ptr ds : [esi+0xC], 0x16
        public_6db1bbe : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6db1bd0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6db1bd0 : nop
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
        jbe public_6db1bf1
        mov dword ptr ds : [esi+0xC], 0x16
        public_6db1bf1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6db1c03
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6db1c03 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6db1c22
        mov dword ptr ds : [esi+0xC], 0x16
        public_6db1c22 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6db1c34
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6db1c34 : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x25]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6db1c5d
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6db1c5d : nop
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
        jbe public_6db1c8e
        mov dword ptr ds : [ecx+0x10], esi
        public_6db1c8e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6db1b60)
    }
}

#undef public_6db1ba7
#undef public_6db1bbe
#undef public_6db1bd0
#undef public_6db1bf1
#undef public_6db1c03
#undef public_6db1c22
#undef public_6db1c34
#undef public_6db1c5d
#undef public_6db1c8e
