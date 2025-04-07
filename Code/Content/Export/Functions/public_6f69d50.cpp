#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f69d50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f69d86 _public_6f69d86
#define public_6f69d88 _public_6f69d88
#define public_6f69d90 _public_6f69d90
#define public_6f69d95 _public_6f69d95
#define public_6f69da1 _public_6f69da1
#define public_6f69dc0 _public_6f69dc0
#define public_6f69dde _public_6f69dde
#define public_6f69dec _public_6f69dec
#define public_6f69df6 _public_6f69df6
#define public_6f69e16 _public_6f69e16
#define public_6f69e28 _public_6f69e28
#define public_6f69e40 _public_6f69e40
#define public_6f69e5e _public_6f69e5e
#define public_6f69e68 _public_6f69e68
#define public_6f69ea8 _public_6f69ea8
#define public_6f69ec7 _public_6f69ec7
#define public_6f69ef0 _public_6f69ef0
#define public_6f69f16 _public_6f69f16
#define public_6f69f24 _public_6f69f24
#define public_6f69f36 _public_6f69f36
#define public_6f69f56 _public_6f69f56
#define public_6f69f60 _public_6f69f60
#define public_6f69f70 _public_6f69f70
#define public_6f69f91 _public_6f69f91
#define public_6f69fa7 _public_6f69fa7
#define public_6f69fc0 _public_6f69fc0
#define public_6f69fe2 _public_6f69fe2
#define public_6f69ff0 _public_6f69ff0
#define public_6f6a000 _public_6f6a000
#define public_6f6a024 _public_6f6a024
#define public_6f6a031 _public_6f6a031
#define public_6f6a052 _public_6f6a052
#define public_6f6a059 _public_6f6a059

PROC_DECLARE(0x6f69d50, internal_6f69d50, public_6f69d50);
extern "C" NAKED register_t __cdecl internal_6f69d50()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        push ebp
        push esi
        sub ecx, eax
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        sar ecx, 4
        cmp ecx, edi
        mov dword ptr ss : [esp+0x10], ebx
        jae public_6f69ec7
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_6f69d86
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp edi, ecx
        jb public_6f69d88
        public_6f69d86 : nop
        mov ecx, edi
        public_6f69d88 : nop
        test edx, edx
        jne public_6f69d90
        xor eax, eax
        jmp public_6f69d95
        public_6f69d90 : nop
        sub eax, edx
        sar eax, 4
        public_6f69d95 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6f69da1
        xor eax, eax
        public_6f69da1 : nop
        shl eax, 4
        push eax
        call public_6fa912a
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        je public_6f69dec
        mov edi, edi
        public_6f69dc0 : nop
        test edx, edx
        je public_6f69dde
        mov ecx, eax
        mov ebx, dword ptr ds : [ecx]
        mov esi, edx
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        public_6f69dde : nop
        add eax, 0x10
        add edx, 0x10
        cmp eax, ebp
        jne public_6f69dc0
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f69dec : nop
        test edi, edi
        mov eax, edx
        jbe public_6f69e28
        mov dword ptr ss : [esp+0x1C], edi
        public_6f69df6 : nop
        test eax, eax
        je public_6f69e16
        mov ecx, dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [ecx]
        mov esi, eax
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        public_6f69e16 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x10
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6f69df6
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f69e28 : nop
        mov ebx, dword ptr ds : [ebx+8]
        mov ecx, edi
        shl ecx, 4
        cmp ebp, ebx
        lea esi, ds:[ecx+edx]
        je public_6f69e68
        mov eax, esi
        sub eax, ecx
        sub eax, edx
        add eax, ebp
        nop 
        public_6f69e40 : nop
        test esi, esi
        je public_6f69e5e
        mov edx, eax
        mov ebp, dword ptr ds : [edx]
        mov ecx, esi
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        public_6f69e5e : nop
        add eax, 0x10
        add esi, 0x10
        cmp eax, ebx
        jne public_6f69e40
        public_6f69e68 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [esi+0xC], eax
        jne public_6f69ea8
        xor eax, eax
        mov eax, edi
        shl eax, 4
        pop edi
        add eax, edx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f69ea8 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 4
        add eax, edi
        shl eax, 4
        pop edi
        add eax, edx
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f69ec7 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, edi
        jae public_6f69fa7
        mov ebp, edi
        shl ebp, 4
        cmp edx, eax
        mov dword ptr ss : [esp+0x1C], ebp
        lea esi, ds:[edx+ebp]
        je public_6f69f24
        mov ecx, esi
        sub ecx, ebp
        mov edi, edi
        public_6f69ef0 : nop
        test esi, esi
        je public_6f69f16
        mov edi, ecx
        mov ebp, dword ptr ds : [edi]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edi, dword ptr ds : [edi+0xC]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ebx+0xC], edi
        mov edi, dword ptr ss : [esp+0x20]
        public_6f69f16 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_6f69ef0
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f69f24 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        sub edi, ecx
        je public_6f69f60
        public_6f69f36 : nop
        test eax, eax
        je public_6f69f56
        mov ebx, dword ptr ds : [esi]
        mov ecx, eax
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], ebx
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], ebx
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0xC], esi
        mov esi, dword ptr ss : [esp+0x24]
        public_6f69f56 : nop
        add eax, 0x10
        dec edi
        jne public_6f69f36
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f69f60 : nop
        mov ecx, dword ptr ds : [ebx+8]
        cmp edx, ecx
        mov eax, edx
        je public_6f69f91
        lea esp, ss:[esp]
        public_6f69f70 : nop
        mov edx, esi
        mov ebx, dword ptr ds : [edx]
        mov edi, eax
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        add eax, 0x10
        cmp eax, ecx
        mov dword ptr ds : [edi+0xC], edx
        jne public_6f69f70
        public_6f69f91 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        pop edi
        pop esi
        add ecx, ebp
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_6f69fa7 : nop
        test edi, edi
        jbe public_6f6a059
        shl edi, 4
        mov ecx, eax
        sub ecx, edi
        cmp ecx, eax
        mov esi, eax
        mov dword ptr ss : [esp+0x1C], edi
        je public_6f69ff0
        public_6f69fc0 : nop
        test esi, esi
        je public_6f69fe2
        mov edi, ecx
        mov ebp, dword ptr ds : [edi]
        mov ebx, esi
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edi
        mov edi, dword ptr ss : [esp+0x1C]
        public_6f69fe2 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_6f69fc0
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f69ff0 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, edi
        cmp edx, eax
        je public_6f6a024
        nop 
        lea esp, ss:[esp]
        public_6f6a000 : nop
        sub eax, 0x10
        sub ecx, 0x10
        cmp eax, edx
        mov esi, eax
        mov ebp, dword ptr ds : [esi]
        mov ebx, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], esi
        jne public_6f6a000
        public_6f6a024 : nop
        lea ecx, ds:[edi+edx]
        cmp edx, ecx
        mov eax, edx
        je public_6f6a052
        mov edx, dword ptr ss : [esp+0x24]
        public_6f6a031 : nop
        mov esi, edx
        mov ebp, dword ptr ds : [esi]
        mov ebx, eax
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        add eax, 0x10
        cmp eax, ecx
        mov dword ptr ds : [ebx+0xC], esi
        jne public_6f6a031
        public_6f6a052 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_6f6a059 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f69d50)
    }
}

#undef public_6f69d86
#undef public_6f69d88
#undef public_6f69d90
#undef public_6f69d95
#undef public_6f69da1
#undef public_6f69dc0
#undef public_6f69dde
#undef public_6f69dec
#undef public_6f69df6
#undef public_6f69e16
#undef public_6f69e28
#undef public_6f69e40
#undef public_6f69e5e
#undef public_6f69e68
#undef public_6f69ea8
#undef public_6f69ec7
#undef public_6f69ef0
#undef public_6f69f16
#undef public_6f69f24
#undef public_6f69f36
#undef public_6f69f56
#undef public_6f69f60
#undef public_6f69f70
#undef public_6f69f91
#undef public_6f69fa7
#undef public_6f69fc0
#undef public_6f69fe2
#undef public_6f69ff0
#undef public_6f6a000
#undef public_6f6a024
#undef public_6f6a031
#undef public_6f6a052
#undef public_6f6a059
