#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23a70);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f23aa6 _public_6f23aa6
#define public_6f23aa8 _public_6f23aa8
#define public_6f23ab0 _public_6f23ab0
#define public_6f23ab5 _public_6f23ab5
#define public_6f23ac1 _public_6f23ac1
#define public_6f23ae0 _public_6f23ae0
#define public_6f23afe _public_6f23afe
#define public_6f23b0c _public_6f23b0c
#define public_6f23b16 _public_6f23b16
#define public_6f23b36 _public_6f23b36
#define public_6f23b48 _public_6f23b48
#define public_6f23b60 _public_6f23b60
#define public_6f23b7e _public_6f23b7e
#define public_6f23b88 _public_6f23b88
#define public_6f23bc8 _public_6f23bc8
#define public_6f23be7 _public_6f23be7
#define public_6f23c10 _public_6f23c10
#define public_6f23c36 _public_6f23c36
#define public_6f23c44 _public_6f23c44
#define public_6f23c56 _public_6f23c56
#define public_6f23c76 _public_6f23c76
#define public_6f23c80 _public_6f23c80
#define public_6f23c90 _public_6f23c90
#define public_6f23cb1 _public_6f23cb1
#define public_6f23cc7 _public_6f23cc7
#define public_6f23ce0 _public_6f23ce0
#define public_6f23d02 _public_6f23d02
#define public_6f23d10 _public_6f23d10
#define public_6f23d20 _public_6f23d20
#define public_6f23d44 _public_6f23d44
#define public_6f23d51 _public_6f23d51
#define public_6f23d72 _public_6f23d72
#define public_6f23d79 _public_6f23d79

PROC_DECLARE(0x6f23a70, internal_6f23a70, public_6f23a70);
extern "C" NAKED register_t __cdecl internal_6f23a70()
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
        jae public_6f23be7
        mov edx, dword ptr ds : [ebx+4]
        test edx, edx
        je public_6f23aa6
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp edi, ecx
        jb public_6f23aa8
        public_6f23aa6 : nop
        mov ecx, edi
        public_6f23aa8 : nop
        test edx, edx
        jne public_6f23ab0
        xor eax, eax
        jmp public_6f23ab5
        public_6f23ab0 : nop
        sub eax, edx
        sar eax, 4
        public_6f23ab5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jge public_6f23ac1
        xor eax, eax
        public_6f23ac1 : nop
        shl eax, 4
        push eax
        call public_6f57e9c
        mov ebp, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, eax
        mov eax, dword ptr ds : [ebx+4]
        add esp, 4
        cmp eax, ebp
        je public_6f23b0c
        mov edi, edi
        public_6f23ae0 : nop
        test edx, edx
        je public_6f23afe
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
        public_6f23afe : nop
        add eax, 0x10
        add edx, 0x10
        cmp eax, ebp
        jne public_6f23ae0
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f23b0c : nop
        test edi, edi
        mov eax, edx
        jbe public_6f23b48
        mov dword ptr ss : [esp+0x1C], edi
        public_6f23b16 : nop
        test eax, eax
        je public_6f23b36
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
        public_6f23b36 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        add eax, 0x10
        dec ecx
        mov dword ptr ss : [esp+0x1C], ecx
        jne public_6f23b16
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f23b48 : nop
        mov ebx, dword ptr ds : [ebx+8]
        mov ecx, edi
        shl ecx, 4
        cmp ebp, ebx
        lea esi, ds:[ecx+edx]
        je public_6f23b88
        mov eax, esi
        sub eax, ecx
        sub eax, edx
        add eax, ebp
        nop 
        public_6f23b60 : nop
        test esi, esi
        je public_6f23b7e
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
        public_6f23b7e : nop
        add eax, 0x10
        add esi, 0x10
        cmp eax, ebx
        jne public_6f23b60
        public_6f23b88 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6f57e26
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+4]
        shl eax, 4
        add eax, edx
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [esi+0xC], eax
        jne public_6f23bc8
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
        public_6f23bc8 : nop
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
        public_6f23be7 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        cmp ecx, edi
        jae public_6f23cc7
        mov ebp, edi
        shl ebp, 4
        cmp edx, eax
        mov dword ptr ss : [esp+0x1C], ebp
        lea esi, ds:[edx+ebp]
        je public_6f23c44
        mov ecx, esi
        sub ecx, ebp
        mov edi, edi
        public_6f23c10 : nop
        test esi, esi
        je public_6f23c36
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
        public_6f23c36 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_6f23c10
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f23c44 : nop
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 4
        sub edi, ecx
        je public_6f23c80
        public_6f23c56 : nop
        test eax, eax
        je public_6f23c76
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
        public_6f23c76 : nop
        add eax, 0x10
        dec edi
        jne public_6f23c56
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f23c80 : nop
        mov ecx, dword ptr ds : [ebx+8]
        cmp edx, ecx
        mov eax, edx
        je public_6f23cb1
        lea esp, ss:[esp]
        public_6f23c90 : nop
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
        jne public_6f23c90
        public_6f23cb1 : nop
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
        public_6f23cc7 : nop
        test edi, edi
        jbe public_6f23d79
        shl edi, 4
        mov ecx, eax
        sub ecx, edi
        cmp ecx, eax
        mov esi, eax
        mov dword ptr ss : [esp+0x1C], edi
        je public_6f23d10
        public_6f23ce0 : nop
        test esi, esi
        je public_6f23d02
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
        public_6f23d02 : nop
        add ecx, 0x10
        add esi, 0x10
        cmp ecx, eax
        jne public_6f23ce0
        mov ebx, dword ptr ss : [esp+0x10]
        public_6f23d10 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov eax, ecx
        sub eax, edi
        cmp edx, eax
        je public_6f23d44
        nop 
        lea esp, ss:[esp]
        public_6f23d20 : nop
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
        jne public_6f23d20
        public_6f23d44 : nop
        lea ecx, ds:[edi+edx]
        cmp edx, ecx
        mov eax, edx
        je public_6f23d72
        mov edx, dword ptr ss : [esp+0x24]
        public_6f23d51 : nop
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
        jne public_6f23d51
        public_6f23d72 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add dword ptr ds : [eax+8], edi
        public_6f23d79 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f23a70)
    }
}

#undef public_6f23aa6
#undef public_6f23aa8
#undef public_6f23ab0
#undef public_6f23ab5
#undef public_6f23ac1
#undef public_6f23ae0
#undef public_6f23afe
#undef public_6f23b0c
#undef public_6f23b16
#undef public_6f23b36
#undef public_6f23b48
#undef public_6f23b60
#undef public_6f23b7e
#undef public_6f23b88
#undef public_6f23bc8
#undef public_6f23be7
#undef public_6f23c10
#undef public_6f23c36
#undef public_6f23c44
#undef public_6f23c56
#undef public_6f23c76
#undef public_6f23c80
#undef public_6f23c90
#undef public_6f23cb1
#undef public_6f23cc7
#undef public_6f23ce0
#undef public_6f23d02
#undef public_6f23d10
#undef public_6f23d20
#undef public_6f23d44
#undef public_6f23d51
#undef public_6f23d72
#undef public_6f23d79
