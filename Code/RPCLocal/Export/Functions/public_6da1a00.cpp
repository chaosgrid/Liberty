#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1a00);
CLANG_FORWARD_PROC_SYMBOL(public_6da2140);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da1a24 _public_6da1a24
#define public_6da1a42 _public_6da1a42
#define public_6da1a4d _public_6da1a4d
#define public_6da1a56 _public_6da1a56
#define public_6da1a61 _public_6da1a61
#define public_6da1a7d _public_6da1a7d
#define public_6da1a94 _public_6da1a94
#define public_6da1aa1 _public_6da1aa1
#define public_6da1aac _public_6da1aac
#define public_6da1aaf _public_6da1aaf
#define public_6da1ac7 _public_6da1ac7
#define public_6da1ad2 _public_6da1ad2
#define public_6da1ad5 _public_6da1ad5
#define public_6da1aea _public_6da1aea
#define public_6da1af5 _public_6da1af5
#define public_6da1b00 _public_6da1b00
#define public_6da1b03 _public_6da1b03
#define public_6da1b17 _public_6da1b17
#define public_6da1b23 _public_6da1b23
#define public_6da1b2f _public_6da1b2f
#define public_6da1b32 _public_6da1b32
#define public_6da1b50 _public_6da1b50
#define public_6da1b8f _public_6da1b8f
#define public_6da1ba2 _public_6da1ba2
#define public_6da1bad _public_6da1bad
#define public_6da1bb0 _public_6da1bb0
#define public_6da1bbb _public_6da1bbb
#define public_6da1bce _public_6da1bce
#define public_6da1bf5 _public_6da1bf5
#define public_6da1c0f _public_6da1c0f
#define public_6da1c35 _public_6da1c35
#define public_6da1c48 _public_6da1c48
#define public_6da1c55 _public_6da1c55
#define public_6da1c57 _public_6da1c57
#define public_6da1c62 _public_6da1c62
#define public_6da1c79 _public_6da1c79
#define public_6da1c91 _public_6da1c91
#define public_6da1c9e _public_6da1c9e
#define public_6da1ca0 _public_6da1ca0
#define public_6da1cac _public_6da1cac
#define public_6da1cd6 _public_6da1cd6
#define public_6da1cee _public_6da1cee
#define public_6da1cfe _public_6da1cfe
#define public_6da1d08 _public_6da1d08
#define public_6da1d2b _public_6da1d2b
#define public_6da1d3e _public_6da1d3e
#define public_6da1d49 _public_6da1d49
#define public_6da1d4c _public_6da1d4c
#define public_6da1d56 _public_6da1d56
#define public_6da1d7f _public_6da1d7f
#define public_6da1d92 _public_6da1d92
#define public_6da1d9f _public_6da1d9f
#define public_6da1da1 _public_6da1da1
#define public_6da1da4 _public_6da1da4
#define public_6da1da7 _public_6da1da7
#define public_6da1daa _public_6da1daa

PROC_DECLARE(0x6da1a00, internal_6da1a00, public_6da1a00);
extern "C" NAKED register_t __cdecl internal_6da1a00()
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
        call public_6da2140
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6da1a42
        mov eax, dword ptr ds : [esi+8]
        public_6da1a24 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6da1ac7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6da1ad5
        public_6da1a42 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6da1a4d
        mov eax, edx
        jmp public_6da1a24
        public_6da1a4d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6da1a61
        public_6da1a56 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6da1a56
        public_6da1a61 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6da1a24
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6da1a7d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6da1a94
        public_6da1a7d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6da1a94 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6da1aa1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6da1aaf
        public_6da1aa1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6da1aac
        mov dword ptr ds : [edx], ecx
        jmp public_6da1aaf
        public_6da1aac : nop
        mov dword ptr ds : [edx+8], ecx
        public_6da1aaf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x48]
        mov dl, byte ptr ds : [ecx+0x48]
        mov byte ptr ds : [ecx+0x48], bl
        mov byte ptr ds : [esi+0x48], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6da1b32
        public_6da1ac7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6da1ad2
        mov dword ptr ds : [ecx], eax
        jmp public_6da1ad5
        public_6da1ad2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6da1ad5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6da1b03
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6da1aea
        mov edx, dword ptr ds : [esi+4]
        jmp public_6da1b00
        public_6da1aea : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_6da1b00
        public_6da1af5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_6da1af5
        public_6da1b00 : nop
        mov dword ptr ss : [ebp], edx
        public_6da1b03 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6da1b32
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6da1b17
        mov edx, dword ptr ds : [esi+4]
        jmp public_6da1b2f
        public_6da1b17 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_6da1b2f
        public_6da1b23 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_6da1b23
        public_6da1b2f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6da1b32 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x48]
        mov bl, 1
        cmp dl, bl
        jne public_6da1daa
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6da1da7
        nop 
        public_6da1b50 : nop
        cmp byte ptr ds : [eax+0x48], bl
        jne public_6da1da7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6da1c0f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6da1bbb
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da1b8f
        mov dword ptr ds : [esi+4], ecx
        public_6da1b8f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da1ba2
        mov dword ptr ds : [esi+4], edx
        jmp public_6da1bb0
        public_6da1ba2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6da1bad
        mov dword ptr ds : [esi], edx
        jmp public_6da1bb0
        public_6da1bad : nop
        mov dword ptr ds : [esi+8], edx
        public_6da1bb0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6da1bbb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6da1bce
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        je public_6da1c79
        public_6da1bce : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6da1cac
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da1bf5
        mov dword ptr ds : [esi+4], ecx
        public_6da1bf5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da1c91
        mov dword ptr ds : [esi+4], edx
        jmp public_6da1ca0
        public_6da1c0f : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6da1c62
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da1c35
        mov dword ptr ds : [esi+4], ecx
        public_6da1c35 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da1c48
        mov dword ptr ds : [esi+4], edx
        jmp public_6da1c57
        public_6da1c48 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6da1c55
        mov dword ptr ds : [esi+8], edx
        jmp public_6da1c57
        public_6da1c55 : nop
        mov dword ptr ds : [esi], edx
        public_6da1c57 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6da1c62 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6da1d08
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6da1d08
        public_6da1c79 : nop
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6da1b50
        jmp public_6da1da7
        public_6da1c91 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6da1c9e
        mov dword ptr ds : [esi+8], edx
        jmp public_6da1ca0
        public_6da1c9e : nop
        mov dword ptr ds : [esi], edx
        public_6da1ca0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6da1cac : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x48]
        mov byte ptr ds : [ecx+0x48], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da1cd6
        mov dword ptr ds : [esi+4], ecx
        public_6da1cd6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da1cee
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6da1da4
        public_6da1cee : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6da1cfe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6da1da4
        public_6da1cfe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6da1da4
        public_6da1d08 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6da1d56
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da1d2b
        mov dword ptr ds : [esi+4], ecx
        public_6da1d2b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da1d3e
        mov dword ptr ds : [esi+4], edx
        jmp public_6da1d4c
        public_6da1d3e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6da1d49
        mov dword ptr ds : [esi], edx
        jmp public_6da1d4c
        public_6da1d49 : nop
        mov dword ptr ds : [esi+8], edx
        public_6da1d4c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6da1d56 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x48]
        mov byte ptr ds : [ecx+0x48], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x48], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6da1d7f
        mov dword ptr ds : [esi+4], ecx
        public_6da1d7f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6da1d92
        mov dword ptr ds : [esi+4], edx
        jmp public_6da1da1
        public_6da1d92 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6da1d9f
        mov dword ptr ds : [esi+8], edx
        jmp public_6da1da1
        public_6da1d9f : nop
        mov dword ptr ds : [esi], edx
        public_6da1da1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6da1da4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6da1da7 : nop
        mov byte ptr ds : [eax+0x48], bl
        public_6da1daa : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6db1dc2
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6da1a00)
    }
}

#undef public_6da1a24
#undef public_6da1a42
#undef public_6da1a4d
#undef public_6da1a56
#undef public_6da1a61
#undef public_6da1a7d
#undef public_6da1a94
#undef public_6da1aa1
#undef public_6da1aac
#undef public_6da1aaf
#undef public_6da1ac7
#undef public_6da1ad2
#undef public_6da1ad5
#undef public_6da1aea
#undef public_6da1af5
#undef public_6da1b00
#undef public_6da1b03
#undef public_6da1b17
#undef public_6da1b23
#undef public_6da1b2f
#undef public_6da1b32
#undef public_6da1b50
#undef public_6da1b8f
#undef public_6da1ba2
#undef public_6da1bad
#undef public_6da1bb0
#undef public_6da1bbb
#undef public_6da1bce
#undef public_6da1bf5
#undef public_6da1c0f
#undef public_6da1c35
#undef public_6da1c48
#undef public_6da1c55
#undef public_6da1c57
#undef public_6da1c62
#undef public_6da1c79
#undef public_6da1c91
#undef public_6da1c9e
#undef public_6da1ca0
#undef public_6da1cac
#undef public_6da1cd6
#undef public_6da1cee
#undef public_6da1cfe
#undef public_6da1d08
#undef public_6da1d2b
#undef public_6da1d3e
#undef public_6da1d49
#undef public_6da1d4c
#undef public_6da1d56
#undef public_6da1d7f
#undef public_6da1d92
#undef public_6da1d9f
#undef public_6da1da1
#undef public_6da1da4
#undef public_6da1da7
#undef public_6da1daa
