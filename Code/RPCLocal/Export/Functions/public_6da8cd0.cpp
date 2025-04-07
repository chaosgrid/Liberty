#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da8d12 _public_6da8d12
#define public_6da8d2a _public_6da8d2a
#define public_6da8d52 _public_6da8d52
#define public_6da8d7a _public_6da8d7a
#define public_6da8da4 _public_6da8da4
#define public_6da8dd6 _public_6da8dd6
#define public_6da8e14 _public_6da8e14
#define public_6da8e20 _public_6da8e20

PROC_DECLARE(0x6da8cd0, internal_6da8cd0, public_6da8cd0);
extern "C" NAKED register_t __cdecl internal_6da8cd0()
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
        je public_6da8d12
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da8d12 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6da8d2a
        mov dword ptr ds : [esi+0xC], ecx
        public_6da8d2a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da8e20
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
        jbe public_6da8d52
        mov dword ptr ds : [esi+0xC], ecx
        public_6da8d52 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da8e20
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
        jbe public_6da8d7a
        mov dword ptr ds : [esi+0xC], ecx
        public_6da8d7a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da8e20
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x28], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6da8da4
        mov dword ptr ds : [esi+0xC], ecx
        public_6da8da4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da8e20
        mov eax, dword ptr ds : [ebx]
        mov cx, word ptr ds : [eax]
        push esi
        push ebp
        mov word ptr ds : [edi+0x2A], cx
        add eax, 2
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da8dd6
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da8dd6 : nop
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
        jbe public_6da8e14
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6da8e14 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6da8e20 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6da8cd0)
    }
}

#undef public_6da8d12
#undef public_6da8d2a
#undef public_6da8d52
#undef public_6da8d7a
#undef public_6da8da4
#undef public_6da8dd6
#undef public_6da8e14
#undef public_6da8e20
