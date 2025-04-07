#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62218f0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_6221926 _public_6221926
#define public_6221928 _public_6221928
#define public_6221930 _public_6221930
#define public_6221935 _public_6221935
#define public_6221941 _public_6221941
#define public_622195e _public_622195e
#define public_622197c _public_622197c
#define public_622198a _public_622198a
#define public_6221994 _public_6221994
#define public_62219b4 _public_62219b4
#define public_62219c6 _public_62219c6
#define public_62219dd _public_62219dd
#define public_62219fb _public_62219fb
#define public_6221a05 _public_6221a05
#define public_6221a45 _public_6221a45
#define public_6221a64 _public_6221a64
#define public_6221a8b _public_6221a8b
#define public_6221ab1 _public_6221ab1
#define public_6221abf _public_6221abf
#define public_6221ad1 _public_6221ad1
#define public_6221af1 _public_6221af1
#define public_6221afb _public_6221afb
#define public_6221b04 _public_6221b04
#define public_6221b25 _public_6221b25
#define public_6221b3b _public_6221b3b
#define public_6221b54 _public_6221b54
#define public_6221b76 _public_6221b76
#define public_6221b84 _public_6221b84
#define public_6221b8f _public_6221b8f
#define public_6221bb3 _public_6221bb3
#define public_6221bc0 _public_6221bc0
#define public_6221be1 _public_6221be1
#define public_6221be8 _public_6221be8

PROC_DECLARE(0x62218f0, internal_62218f0, public_62218f0);
extern "C" NAKED register_t __cdecl internal_62218f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, ecx
        push ebp
        push esi
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        sub ecx, eax
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], ebx
        sar ecx, 4
        cmp ecx, edi
        jae public_6221a64
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_6221926
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp edi, ecx
        jb public_6221928
        public_6221926 : nop
        mov ecx, edi
        public_6221928 : nop
        test edx, edx
        jne public_6221930
        xor eax, eax
        jmp public_6221935
        public_6221930 : nop
        sub eax, edx
        sar eax, 4
        public_6221935 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6221941
        xor eax, eax
        public_6221941 : nop
        shl eax, 4
        push eax
        call public_624612c
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        je public_622198a
        public_622195e : nop
        test edx, edx
        je public_622197c
        mov ecx, eax
        mov esi, edx
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        public_622197c : nop
        add eax, 0x10
        add edx, 0x10
        cmp eax, ebp
        jne public_622195e
        mov ebx, dword ptr ss : [esp+0x10]
        public_622198a : nop
        test edi, edi
        mov eax, edx
        jbe public_62219c6
        mov dword ptr ss : [esp+0x1C], edi
        public_6221994 : nop
        test eax, eax
        je public_62219b4
        mov ecx, dword ptr ss : [esp+0x24]
        mov esi, eax
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        mov ebx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+4], ebx
        mov ebx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+8], ebx
        mov ecx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        public_62219b4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x10
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6221994
        mov ebx, dword ptr ss : [esp+0x10]
        public_62219c6 : nop
        mov ebx, dword ptr ds : [ebx+8]
        mov ecx, edi
        shl ecx, 4
        cmp ebp, ebx
        lea esi, ds:[ecx+edx]
        je public_6221a05
        mov eax, esi
        sub eax, ecx
        sub eax, edx
        add eax, ebp
        public_62219dd : nop
        test esi, esi
        je public_62219fb
        mov edx, eax
        mov ecx, esi
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], ebp
        mov ebp, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], ebp
        mov ebp, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], ebp
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        public_62219fb : nop
        add eax, 0x10
        add esi, 0x10
        cmp eax, ebx
        jne public_62219dd
        public_6221a05 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_62460e0
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        shl eax, 4
        add eax, edx
        test ecx, ecx
        mov dword ptr ds : [esi+0xC], eax
        jne public_6221a45
        xor eax, eax
        mov dword ptr ds : [esi+4], edx
        mov eax, edi
        pop edi
        shl eax, 4
        add eax, edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6221a45 : nop
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+4], edx
        sub eax, ecx
        sar eax, 4
        add eax, edi
        pop edi
        shl eax, 4
        add eax, edx
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6221a64 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, edi
        jae public_6221b3b
        mov ebp, edi
        shl ebp, 4
        cmp edx, eax
        mov dword ptr ss : [esp+0x1C], ebp
        lea esi, ds:[edx+ebp]
        je public_6221abf
        mov ecx, esi
        sub ecx, ebp
        public_6221a8b : nop
        test esi, esi
        je public_6221ab1
        mov edi, ecx
        mov ebx, esi
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edi
        mov edi, dword ptr ss : [esp+0x20]
        public_6221ab1 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_6221a8b
        mov ebx, dword ptr ss : [esp+0x10]
        public_6221abf : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        sub edi, ecx
        je public_6221afb
        public_6221ad1 : nop
        test eax, eax
        je public_6221af1
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
        public_6221af1 : nop
        add eax, 0x10
        dec edi
        jne public_6221ad1
        mov ebx, dword ptr ss : [esp+0x10]
        public_6221afb : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, edx
        cmp edx, ecx
        je public_6221b25
        public_6221b04 : nop
        mov edx, esi
        mov edi, eax
        add eax, 0x10
        mov ebx, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [edx+4]
        mov dword ptr ds : [edi+4], ebx
        mov ebx, dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+8], ebx
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [edi+0xC], edx
        jne public_6221b04
        public_6221b25 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov ecx, dword ptr ds : [eax+8]
        add ecx, ebp
        pop ebp
        mov dword ptr ds : [eax+8], ecx
        pop ebx
        add esp, 8
        ret 0xC
        public_6221b3b : nop
        test edi, edi
        jbe public_6221be8
        shl edi, 4
        mov ecx, eax
        mov esi, eax
        sub ecx, edi
        mov dword ptr ss : [esp+0x1C], edi
        cmp ecx, eax
        je public_6221b84
        public_6221b54 : nop
        test esi, esi
        je public_6221b76
        mov edi, ecx
        mov ebx, esi
        mov ebp, dword ptr ds : [edi]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ebx+0xC], edi
        mov edi, dword ptr ss : [esp+0x1C]
        public_6221b76 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_6221b54
        mov ebx, dword ptr ss : [esp+0x10]
        public_6221b84 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, edi
        cmp edx, eax
        je public_6221bb3
        public_6221b8f : nop
        sub eax, 0x10
        sub ecx, 0x10
        mov esi, eax
        mov ebx, ecx
        cmp eax, edx
        mov ebp, dword ptr ds : [esi]
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], esi
        jne public_6221b8f
        public_6221bb3 : nop
        lea ecx, ds:[edi+edx]
        mov eax, edx
        cmp edx, ecx
        je public_6221be1
        mov edx, dword ptr ss : [esp+0x24]
        public_6221bc0 : nop
        mov esi, edx
        mov ebx, eax
        add eax, 0x10
        mov ebp, dword ptr ds : [esi]
        cmp eax, ecx
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [esi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov ebp, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx+8], ebp
        mov esi, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0xC], esi
        jne public_6221bc0
        public_6221be1 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_6221be8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x62218f0)
    }
}

#undef public_6221926
#undef public_6221928
#undef public_6221930
#undef public_6221935
#undef public_6221941
#undef public_622195e
#undef public_622197c
#undef public_622198a
#undef public_6221994
#undef public_62219b4
#undef public_62219c6
#undef public_62219dd
#undef public_62219fb
#undef public_6221a05
#undef public_6221a45
#undef public_6221a64
#undef public_6221a8b
#undef public_6221ab1
#undef public_6221abf
#undef public_6221ad1
#undef public_6221af1
#undef public_6221afb
#undef public_6221b04
#undef public_6221b25
#undef public_6221b3b
#undef public_6221b54
#undef public_6221b76
#undef public_6221b84
#undef public_6221b8f
#undef public_6221bb3
#undef public_6221bc0
#undef public_6221be1
#undef public_6221be8
