#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4029a0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_402a09 _public_402a09
#define public_402a1d _public_402a1d
#define public_402a23 _public_402a23
#define public_402a31 _public_402a31
#define public_402a72 _public_402a72
#define public_402a8b _public_402a8b
#define public_402a9e _public_402a9e
#define public_402aa9 _public_402aa9
#define public_402aac _public_402aac
#define public_402ab1 _public_402ab1
#define public_402ada _public_402ada
#define public_402af3 _public_402af3
#define public_402b06 _public_402b06
#define public_402b10 _public_402b10
#define public_402b33 _public_402b33
#define public_402b4b _public_402b4b
#define public_402b5e _public_402b5e
#define public_402b6b _public_402b6b
#define public_402b6d _public_402b6d
#define public_402b73 _public_402b73
#define public_402b9c _public_402b9c
#define public_402baf _public_402baf
#define public_402bba _public_402bba
#define public_402bbd _public_402bbd
#define public_402bbf _public_402bbf
#define public_402bc2 _public_402bc2
#define public_402bce _public_402bce

PROC_DECLARE(0x4029a0, internal_4029a0, public_4029a0);
extern "C" NAKED register_t __cdecl internal_4029a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_4e5fc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_402a09
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_402a09
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_402a09
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_402a23
        mov dword ptr ds : [eax+8], ebx
        jmp public_402a23
        public_402a09 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_402a1d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_402a23
        public_402a1d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_402a23
        mov dword ptr ds : [eax], ebx
        public_402a23 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_402bce
        public_402a31 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_402bce
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_402b10
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_402a72
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_402bc2
        public_402a72 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_402ab1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_402a8b
        mov dword ptr ds : [edx+4], eax
        public_402a8b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_402a9e
        mov dword ptr ds : [edx+4], ecx
        jmp public_402aac
        public_402a9e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_402aa9
        mov dword ptr ds : [edx], ecx
        jmp public_402aac
        public_402aa9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_402aac : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_402ab1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_402ada
        mov dword ptr ds : [edi+4], ecx
        public_402ada : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_402af3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_402bbf
        public_402af3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_402b06
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_402bbf
        public_402b06 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_402bbf
        public_402b10 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_402b33
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_402bc2
        public_402b33 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_402b73
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_402b4b
        mov dword ptr ds : [edx+4], eax
        public_402b4b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_402b5e
        mov dword ptr ds : [edx+4], ecx
        jmp public_402b6d
        public_402b5e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_402b6b
        mov dword ptr ds : [edx+8], ecx
        jmp public_402b6d
        public_402b6b : nop
        mov dword ptr ds : [edx], ecx
        public_402b6d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_402b73 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_402b9c
        mov dword ptr ds : [edi+4], ecx
        public_402b9c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_402baf
        mov dword ptr ds : [edi+4], edx
        jmp public_402bbd
        public_402baf : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_402bba
        mov dword ptr ds : [edi], edx
        jmp public_402bbd
        public_402bba : nop
        mov dword ptr ds : [edi+8], edx
        public_402bbd : nop
        mov dword ptr ds : [edx], ecx
        public_402bbf : nop
        mov dword ptr ds : [ecx+4], edx
        public_402bc2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_402a31
        public_402bce : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x4029a0)
    }
}

#undef public_402a09
#undef public_402a1d
#undef public_402a23
#undef public_402a31
#undef public_402a72
#undef public_402a8b
#undef public_402a9e
#undef public_402aa9
#undef public_402aac
#undef public_402ab1
#undef public_402ada
#undef public_402af3
#undef public_402b06
#undef public_402b10
#undef public_402b33
#undef public_402b4b
#undef public_402b5e
#undef public_402b6b
#undef public_402b6d
#undef public_402b73
#undef public_402b9c
#undef public_402baf
#undef public_402bba
#undef public_402bbd
#undef public_402bbf
#undef public_402bc2
#undef public_402bce
