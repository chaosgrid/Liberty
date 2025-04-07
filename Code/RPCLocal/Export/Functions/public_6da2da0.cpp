#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2b10);
CLANG_FORWARD_PROC_SYMBOL(public_6da2da0);
CLANG_FORWARD_PROC_SYMBOL(public_6da3540);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da2dc4 _public_6da2dc4
#define public_6da2de2 _public_6da2de2
#define public_6da2ded _public_6da2ded
#define public_6da2df6 _public_6da2df6
#define public_6da2e01 _public_6da2e01
#define public_6da2e1d _public_6da2e1d
#define public_6da2e34 _public_6da2e34
#define public_6da2e41 _public_6da2e41
#define public_6da2e4c _public_6da2e4c
#define public_6da2e4f _public_6da2e4f
#define public_6da2e67 _public_6da2e67
#define public_6da2e72 _public_6da2e72
#define public_6da2e75 _public_6da2e75
#define public_6da2e8a _public_6da2e8a
#define public_6da2e95 _public_6da2e95
#define public_6da2ea0 _public_6da2ea0
#define public_6da2ea3 _public_6da2ea3
#define public_6da2eb7 _public_6da2eb7
#define public_6da2ec3 _public_6da2ec3
#define public_6da2ecf _public_6da2ecf
#define public_6da2ed2 _public_6da2ed2
#define public_6da2ef0 _public_6da2ef0
#define public_6da2f2f _public_6da2f2f
#define public_6da2f42 _public_6da2f42
#define public_6da2f4d _public_6da2f4d
#define public_6da2f50 _public_6da2f50
#define public_6da2f5b _public_6da2f5b
#define public_6da2f6e _public_6da2f6e
#define public_6da2f95 _public_6da2f95
#define public_6da2faf _public_6da2faf
#define public_6da2fd5 _public_6da2fd5
#define public_6da2fe8 _public_6da2fe8
#define public_6da2ff5 _public_6da2ff5
#define public_6da2ff7 _public_6da2ff7
#define public_6da3002 _public_6da3002
#define public_6da3019 _public_6da3019
#define public_6da3031 _public_6da3031
#define public_6da303e _public_6da303e
#define public_6da3040 _public_6da3040
#define public_6da304c _public_6da304c
#define public_6da3076 _public_6da3076
#define public_6da308e _public_6da308e
#define public_6da309e _public_6da309e
#define public_6da30a8 _public_6da30a8
#define public_6da30cb _public_6da30cb
#define public_6da30de _public_6da30de
#define public_6da30e9 _public_6da30e9
#define public_6da30ec _public_6da30ec
#define public_6da30f6 _public_6da30f6
#define public_6da311f _public_6da311f
#define public_6da3132 _public_6da3132
#define public_6da313f _public_6da313f
#define public_6da3141 _public_6da3141
#define public_6da3144 _public_6da3144
#define public_6da3147 _public_6da3147
#define public_6da314e _public_6da314e

PROC_DECLARE(0x6da2da0, internal_6da2da0, public_6da2da0);
extern "C" NAKED register_t __cdecl internal_6da2da0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_6da3540
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6da2de2
        mov eax, dword ptr ds : [esi+8]
        public_6da2dc4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6da2e67
        mov dword ptr ds : [ecx+4], eax
        jmp public_6da2e75
        public_6da2de2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6da2ded
        mov eax, edx
        jmp public_6da2dc4
        public_6da2ded : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        jne public_6da2e01
        public_6da2df6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x21]
        test bl, bl
        je public_6da2df6
        public_6da2e01 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6da2dc4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6da2e1d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6da2e34
        public_6da2e1d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6da2e34 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6da2e41
        mov dword ptr ds : [edx+4], ecx
        jmp public_6da2e4f
        public_6da2e41 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6da2e4c
        mov dword ptr ds : [edx], ecx
        jmp public_6da2e4f
        public_6da2e4c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6da2e4f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x20]
        mov dl, byte ptr ds : [ecx+0x20]
        mov byte ptr ds : [ecx+0x20], bl
        mov byte ptr ds : [esi+0x20], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6da2ed2
        public_6da2e67 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6da2e72
        mov dword ptr ds : [ecx], eax
        jmp public_6da2e75
        public_6da2e72 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6da2e75 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6da2ea3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6da2e8a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6da2ea0
        public_6da2e8a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6da2ea0
        public_6da2e95 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6da2e95
        public_6da2ea0 : nop
        mov dword ptr ss : [ebp], edx
        public_6da2ea3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6da2ed2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6da2eb7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6da2ecf
        public_6da2eb7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        mov edx, eax
        jne public_6da2ecf
        public_6da2ec3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x21]
        test bl, bl
        je public_6da2ec3
        public_6da2ecf : nop
        mov dword ptr ss : [ebp+8], edx
        public_6da2ed2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x20]
        mov bl, 1
        cmp cl, bl
        jne public_6da314e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6da3147
        nop 
        public_6da2ef0 : nop
        cmp byte ptr ds : [eax+0x20], bl
        jne public_6da3147
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6da2faf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6da2f5b
        mov byte ptr ds : [ecx+0x20], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da2f2f
        mov dword ptr ds : [esi+4], ecx
        public_6da2f2f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da2f42
        mov dword ptr ds : [esi+4], edx
        jmp public_6da2f50
        public_6da2f42 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6da2f4d
        mov dword ptr ds : [esi], edx
        jmp public_6da2f50
        public_6da2f4d : nop
        mov dword ptr ds : [esi+8], edx
        public_6da2f50 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6da2f5b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6da2f6e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        je public_6da3019
        public_6da2f6e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6da304c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da2f95
        mov dword ptr ds : [esi+4], ecx
        public_6da2f95 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da3031
        mov dword ptr ds : [esi+4], edx
        jmp public_6da3040
        public_6da2faf : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6da3002
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da2fd5
        mov dword ptr ds : [esi+4], ecx
        public_6da2fd5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da2fe8
        mov dword ptr ds : [esi+4], edx
        jmp public_6da2ff7
        public_6da2fe8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6da2ff5
        mov dword ptr ds : [esi+8], edx
        jmp public_6da2ff7
        public_6da2ff5 : nop
        mov dword ptr ds : [esi], edx
        public_6da2ff7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6da3002 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6da30a8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6da30a8
        public_6da3019 : nop
        mov byte ptr ds : [ecx+0x20], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6da2ef0
        jmp public_6da3147
        public_6da3031 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6da303e
        mov dword ptr ds : [esi+8], edx
        jmp public_6da3040
        public_6da303e : nop
        mov dword ptr ds : [esi], edx
        public_6da3040 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6da304c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da3076
        mov dword ptr ds : [esi+4], ecx
        public_6da3076 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da308e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6da3144
        public_6da308e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6da309e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6da3144
        public_6da309e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6da3144
        public_6da30a8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x20], bl
        jne public_6da30f6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x20], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x20], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da30cb
        mov dword ptr ds : [esi+4], ecx
        public_6da30cb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da30de
        mov dword ptr ds : [esi+4], edx
        jmp public_6da30ec
        public_6da30de : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6da30e9
        mov dword ptr ds : [esi], edx
        jmp public_6da30ec
        public_6da30e9 : nop
        mov dword ptr ds : [esi+8], edx
        public_6da30ec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6da30f6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x20]
        mov byte ptr ds : [ecx+0x20], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x20], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x20], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da311f
        mov dword ptr ds : [esi+4], ecx
        public_6da311f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da3132
        mov dword ptr ds : [esi+4], edx
        jmp public_6da3141
        public_6da3132 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6da313f
        mov dword ptr ds : [esi+8], edx
        jmp public_6da3141
        public_6da313f : nop
        mov dword ptr ds : [esi], edx
        public_6da3141 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6da3144 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6da3147 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x20], bl
        public_6da314e : nop
        lea ecx, ds:[esi+0xC]
        call public_6da2b10
        push esi
        call public_6db1dc2
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6da2da0)
    }
}

#undef public_6da2dc4
#undef public_6da2de2
#undef public_6da2ded
#undef public_6da2df6
#undef public_6da2e01
#undef public_6da2e1d
#undef public_6da2e34
#undef public_6da2e41
#undef public_6da2e4c
#undef public_6da2e4f
#undef public_6da2e67
#undef public_6da2e72
#undef public_6da2e75
#undef public_6da2e8a
#undef public_6da2e95
#undef public_6da2ea0
#undef public_6da2ea3
#undef public_6da2eb7
#undef public_6da2ec3
#undef public_6da2ecf
#undef public_6da2ed2
#undef public_6da2ef0
#undef public_6da2f2f
#undef public_6da2f42
#undef public_6da2f4d
#undef public_6da2f50
#undef public_6da2f5b
#undef public_6da2f6e
#undef public_6da2f95
#undef public_6da2faf
#undef public_6da2fd5
#undef public_6da2fe8
#undef public_6da2ff5
#undef public_6da2ff7
#undef public_6da3002
#undef public_6da3019
#undef public_6da3031
#undef public_6da303e
#undef public_6da3040
#undef public_6da304c
#undef public_6da3076
#undef public_6da308e
#undef public_6da309e
#undef public_6da30a8
#undef public_6da30cb
#undef public_6da30de
#undef public_6da30e9
#undef public_6da30ec
#undef public_6da30f6
#undef public_6da311f
#undef public_6da3132
#undef public_6da313f
#undef public_6da3141
#undef public_6da3144
#undef public_6da3147
#undef public_6da314e
