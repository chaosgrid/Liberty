#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da8e77 _public_6da8e77
#define public_6da8e8e _public_6da8e8e
#define public_6da8ea0 _public_6da8ea0
#define public_6da8ec1 _public_6da8ec1
#define public_6da8ed3 _public_6da8ed3
#define public_6da8ef4 _public_6da8ef4
#define public_6da8f06 _public_6da8f06
#define public_6da8f31 _public_6da8f31
#define public_6da8f62 _public_6da8f62

PROC_DECLARE(0x6da8e30, internal_6da8e30, public_6da8e30);
extern "C" NAKED register_t __cdecl internal_6da8e30()
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
        je public_6da8e77
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da8e77 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da8e8e
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da8e8e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da8ea0
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da8ea0 : nop
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
        jbe public_6da8ec1
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da8ec1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da8ed3
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da8ed3 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x24]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da8ef4
        mov dword ptr ds : [esi+0xC], 0x16
        public_6da8ef4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da8f06
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da8f06 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da8f31
        pop edi
        pop esi
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da8f31 : nop
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
        jbe public_6da8f62
        mov dword ptr ds : [ecx+0x10], esi
        public_6da8f62 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da8e30)
    }
}

#undef public_6da8e77
#undef public_6da8e8e
#undef public_6da8ea0
#undef public_6da8ec1
#undef public_6da8ed3
#undef public_6da8ef4
#undef public_6da8f06
#undef public_6da8f31
#undef public_6da8f62
