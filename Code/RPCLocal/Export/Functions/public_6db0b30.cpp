#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6db0b74 _public_6db0b74
#define public_6db0b8c _public_6db0b8c
#define public_6db0bb6 _public_6db0bb6
#define public_6db0be0 _public_6db0be0
#define public_6db0c0a _public_6db0c0a
#define public_6db0c34 _public_6db0c34
#define public_6db0c5e _public_6db0c5e
#define public_6db0c90 _public_6db0c90
#define public_6db0cc2 _public_6db0cc2
#define public_6db0cf5 _public_6db0cf5
#define public_6db0d1f _public_6db0d1f
#define public_6db0d61 _public_6db0d61
#define public_6db0d99 _public_6db0d99
#define public_6db0dac _public_6db0dac
#define public_6db0def _public_6db0def
#define public_6db0e28 _public_6db0e28
#define public_6db0e3b _public_6db0e3b
#define public_6db0e7e _public_6db0e7e
#define public_6db0eb7 _public_6db0eb7
#define public_6db0eca _public_6db0eca
#define public_6db0ef6 _public_6db0ef6
#define public_6db0f22 _public_6db0f22
#define public_6db0f4e _public_6db0f4e
#define public_6db0f7a _public_6db0f7a
#define public_6db0fc9 _public_6db0fc9
#define public_6db1008 _public_6db1008
#define public_6db1029 _public_6db1029
#define public_6db1065 _public_6db1065
#define public_6db1071 _public_6db1071

PROC_DECLARE(0x6db0b30, internal_6db0b30, public_6db0b30);
extern "C" NAKED register_t __cdecl internal_6db0b30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        lea ebx, ss:[ebp+0x10]
        push edi
        push ebx
        push eax
        mov dword ptr ds : [ebx+8], ecx
        lea esi, ss:[ebp+0x18]
        push esi
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6db0b74
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6db0b74 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        mov ecx, 0x17
        jbe public_6db0b8c
        mov dword ptr ds : [ebx+0xC], ecx
        public_6db0b8c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x20], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6db0bb6
        mov dword ptr ds : [ebx+0xC], ecx
        public_6db0bb6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x24], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6db0be0
        mov dword ptr ds : [ebx+0xC], ecx
        public_6db0be0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x28], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6db0c0a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6db0c0a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x2C], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 4
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6db0c34
        mov dword ptr ds : [ebx+0xC], ecx
        public_6db0c34 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x30], edx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add edi, 0xC
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6db0c5e
        mov dword ptr ds : [ebx+0xC], ecx
        public_6db0c5e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[ebp+0x34]
        call public_6d8f510
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0c90
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6db0c90 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[ebp+0x40]
        call public_6d8f510
        add edi, 0xC
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0cc2
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6db0cc2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov edi, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[ebp+0x4C]
        call public_6d8f4f0
        add edi, 0x10
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov edi, 0x17
        jbe public_6db0cf5
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0cf5 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x5C], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0d1f
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0d1f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x64], edx
        jbe public_6db0d99
        add eax, eax
        push eax
        call public_6db1f8a
        mov ecx, dword ptr ss : [ebp+0x64]
        mov dword ptr ss : [ebp+0x60], eax
        mov edx, dword ptr ds : [ebx]
        shl ecx, 1
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0d61
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0d61 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x64]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x60]
        shl eax, 1
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x17
        public_6db0d99 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0dac
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0dac : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x68], edx
        jbe public_6db0e28
        push eax
        call public_6db1f8a
        mov dword ptr ss : [ebp+0x88], eax
        mov eax, dword ptr ss : [ebp+0x68]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0def
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0def : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x68]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x88]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x17
        public_6db0e28 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0e3b
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0e3b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x6C], edx
        jbe public_6db0eb7
        push eax
        call public_6db1f8a
        mov dword ptr ss : [ebp+0x8C], eax
        mov eax, dword ptr ss : [ebp+0x6C]
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0e7e
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0e7e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x6C]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x8C]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x17
        public_6db0eb7 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0eca
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0eca : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x70], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0ef6
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0ef6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x74], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0f22
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0f22 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x78], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0f4e
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0f4e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x7C], ecx
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0f7a
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0f7a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, edx
        test eax, eax
        mov dword ptr ss : [ebp+0x80], edx
        jbe public_6db1008
        shl eax, 2
        push eax
        call public_6db1f8a
        mov ecx, dword ptr ss : [ebp+0x80]
        mov dword ptr ss : [ebp+0x84], eax
        mov edx, dword ptr ds : [ebx]
        shl ecx, 2
        add edx, ecx
        mov ecx, dword ptr ds : [ebx+4]
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6db0fc9
        mov dword ptr ds : [ebx+0xC], edi
        public_6db0fc9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6db1071
        mov eax, dword ptr ss : [ebp+0x80]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x84]
        shl eax, 2
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov edi, 0x17
        public_6db1008 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6db1029
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6db1029 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx+4], esi
        mov eax, dword ptr ds : [ebx]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add edx, 2
        cmp ebx, edx
        jbe public_6db1065
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6db1065 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6db1071 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6db0b30)
    }
}

#undef public_6db0b74
#undef public_6db0b8c
#undef public_6db0bb6
#undef public_6db0be0
#undef public_6db0c0a
#undef public_6db0c34
#undef public_6db0c5e
#undef public_6db0c90
#undef public_6db0cc2
#undef public_6db0cf5
#undef public_6db0d1f
#undef public_6db0d61
#undef public_6db0d99
#undef public_6db0dac
#undef public_6db0def
#undef public_6db0e28
#undef public_6db0e3b
#undef public_6db0e7e
#undef public_6db0eb7
#undef public_6db0eca
#undef public_6db0ef6
#undef public_6db0f22
#undef public_6db0f4e
#undef public_6db0f7a
#undef public_6db0fc9
#undef public_6db1008
#undef public_6db1029
#undef public_6db1065
#undef public_6db1071
