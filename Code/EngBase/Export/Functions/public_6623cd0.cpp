#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6623cd0);
CLANG_FORWARD_PROC_SYMBOL(public_66252f0);
CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_6623cf4 _public_6623cf4
#define public_6623d12 _public_6623d12
#define public_6623d1d _public_6623d1d
#define public_6623d26 _public_6623d26
#define public_6623d31 _public_6623d31
#define public_6623d4f _public_6623d4f
#define public_6623d66 _public_6623d66
#define public_6623d73 _public_6623d73
#define public_6623d7e _public_6623d7e
#define public_6623d81 _public_6623d81
#define public_6623d99 _public_6623d99
#define public_6623da4 _public_6623da4
#define public_6623da7 _public_6623da7
#define public_6623dbe _public_6623dbe
#define public_6623dc9 _public_6623dc9
#define public_6623dd4 _public_6623dd4
#define public_6623dd7 _public_6623dd7
#define public_6623ded _public_6623ded
#define public_6623df9 _public_6623df9
#define public_6623e05 _public_6623e05
#define public_6623e08 _public_6623e08
#define public_6623e23 _public_6623e23
#define public_6623e62 _public_6623e62
#define public_6623e75 _public_6623e75
#define public_6623e80 _public_6623e80
#define public_6623e83 _public_6623e83
#define public_6623e8e _public_6623e8e
#define public_6623ea1 _public_6623ea1
#define public_6623ec8 _public_6623ec8
#define public_6623ee2 _public_6623ee2
#define public_6623f08 _public_6623f08
#define public_6623f1b _public_6623f1b
#define public_6623f28 _public_6623f28
#define public_6623f2a _public_6623f2a
#define public_6623f35 _public_6623f35
#define public_6623f4c _public_6623f4c
#define public_6623f64 _public_6623f64
#define public_6623f71 _public_6623f71
#define public_6623f73 _public_6623f73
#define public_6623f7f _public_6623f7f
#define public_6623fa9 _public_6623fa9
#define public_6623fc1 _public_6623fc1
#define public_6623fd1 _public_6623fd1
#define public_6623fdb _public_6623fdb
#define public_6623ffe _public_6623ffe
#define public_6624011 _public_6624011
#define public_662401c _public_662401c
#define public_662401f _public_662401f
#define public_6624029 _public_6624029
#define public_6624052 _public_6624052
#define public_6624065 _public_6624065
#define public_6624072 _public_6624072
#define public_6624074 _public_6624074
#define public_6624077 _public_6624077
#define public_662407e _public_662407e
#define public_6624081 _public_6624081
#define public_66240a9 _public_66240a9
#define public_66240b2 _public_66240b2

PROC_DECLARE(0x6623cd0, internal_6623cd0, public_6623cd0);
extern "C" NAKED register_t __cdecl internal_6623cd0()
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
        call public_66252f0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6623d12
        mov eax, dword ptr ds : [esi+8]
        public_6623cf4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6623d99
        mov dword ptr ds : [ecx+4], eax
        jmp public_6623da7
        public_6623d12 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6623d1d
        mov eax, edx
        jmp public_6623cf4
        public_6623d1d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_6623d31
        public_6623d26 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_6623d26
        public_6623d31 : nop
        mov eax, dword ptr ds : [ecx+8]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x10], ecx
        je public_6623cf4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [esi+8]
        cmp ecx, edx
        jne public_6623d4f
        mov dword ptr ds : [eax+4], ecx
        jmp public_6623d66
        public_6623d4f : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6623d66 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6623d73
        mov dword ptr ds : [edx+4], ecx
        jmp public_6623d81
        public_6623d73 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6623d7e
        mov dword ptr ds : [edx], ecx
        jmp public_6623d81
        public_6623d7e : nop
        mov dword ptr ds : [edx+8], ecx
        public_6623d81 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x14]
        mov dl, byte ptr ds : [ecx+0x14]
        mov byte ptr ds : [ecx+0x14], bl
        mov byte ptr ds : [esi+0x14], dl
        jmp public_6623e08
        public_6623d99 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6623da4
        mov dword ptr ds : [ecx], eax
        jmp public_6623da7
        public_6623da4 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6623da7 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6623dd7
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6623dbe
        mov edx, dword ptr ds : [esi+4]
        jmp public_6623dd4
        public_6623dbe : nop
        mov ecx, dword ptr ds : [eax]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6623dd4
        public_6623dc9 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6623dc9
        public_6623dd4 : nop
        mov dword ptr ss : [ebp], edx
        public_6623dd7 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6623e08
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edi+8]
        cmp ecx, edx
        jne public_6623ded
        mov edx, dword ptr ds : [esi+4]
        jmp public_6623e05
        public_6623ded : nop
        mov ecx, dword ptr ds : [eax+8]
        mov edx, eax
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        jne public_6623e05
        public_6623df9 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x15]
        test bl, bl
        je public_6623df9
        public_6623e05 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6623e08 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov bl, 1
        cmp byte ptr ss : [ebp+0x14], bl
        jne public_6624081
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_662407e
        public_6623e23 : nop
        cmp byte ptr ds : [eax+0x14], bl
        jne public_662407e
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6623ee2
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6623e8e
        mov byte ptr ds : [ecx+0x14], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6623e62
        mov dword ptr ds : [esi+4], ecx
        public_6623e62 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6623e75
        mov dword ptr ds : [esi+4], edx
        jmp public_6623e83
        public_6623e75 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6623e80
        mov dword ptr ds : [esi], edx
        jmp public_6623e83
        public_6623e80 : nop
        mov dword ptr ds : [esi+8], edx
        public_6623e83 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6623e8e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6623ea1
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        je public_6623f4c
        public_6623ea1 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6623f7f
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6623ec8
        mov dword ptr ds : [esi+4], ecx
        public_6623ec8 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6623f64
        mov dword ptr ds : [esi+4], edx
        jmp public_6623f73
        public_6623ee2 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6623f35
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6623f08
        mov dword ptr ds : [esi+4], ecx
        public_6623f08 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6623f1b
        mov dword ptr ds : [esi+4], edx
        jmp public_6623f2a
        public_6623f1b : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6623f28
        mov dword ptr ds : [esi+8], edx
        jmp public_6623f2a
        public_6623f28 : nop
        mov dword ptr ds : [esi], edx
        public_6623f2a : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6623f35 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6623fdb
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6623fdb
        public_6623f4c : nop
        mov byte ptr ds : [ecx+0x14], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6623e23
        jmp public_662407e
        public_6623f64 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6623f71
        mov dword ptr ds : [esi+8], edx
        jmp public_6623f73
        public_6623f71 : nop
        mov dword ptr ds : [esi], edx
        public_6623f73 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6623f7f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6623fa9
        mov dword ptr ds : [esi+4], ecx
        public_6623fa9 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6623fc1
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6624077
        public_6623fc1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6623fd1
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6624077
        public_6623fd1 : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6624077
        public_6623fdb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x14], bl
        jne public_6624029
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x14], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x14], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6623ffe
        mov dword ptr ds : [esi+4], ecx
        public_6623ffe : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624011
        mov dword ptr ds : [esi+4], edx
        jmp public_662401f
        public_6624011 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_662401c
        mov dword ptr ds : [esi], edx
        jmp public_662401f
        public_662401c : nop
        mov dword ptr ds : [esi+8], edx
        public_662401f : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6624029 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x14]
        mov byte ptr ds : [ecx+0x14], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x14], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x14], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6624052
        mov dword ptr ds : [esi+4], ecx
        public_6624052 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6624065
        mov dword ptr ds : [esi+4], edx
        jmp public_6624074
        public_6624065 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6624072
        mov dword ptr ds : [esi+8], edx
        jmp public_6624074
        public_6624072 : nop
        mov dword ptr ds : [esi], edx
        public_6624074 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6624077 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        public_662407e : nop
        mov byte ptr ds : [eax+0x14], bl
        public_6624081 : nop
        cmp dword ptr ds : [public_662b1a8], 0x80
        jge public_66240a9
        mov edx, dword ptr ds : [public_662b19c]
        mov dword ptr ss : [ebp], edx
        mov eax, dword ptr ds : [public_662b1a8]
        inc eax
        mov dword ptr ds : [public_662b19c], ebp
        mov dword ptr ds : [public_662b1a8], eax
        jmp public_66240b2
        public_66240a9 : nop
        push ebp
        call public_66281d0
        add esp, 4
        public_66240b2 : nop
        mov eax, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
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
        UNREACHABLE_TRAP(0x6623cd0)
    }
}

#undef public_6623cf4
#undef public_6623d12
#undef public_6623d1d
#undef public_6623d26
#undef public_6623d31
#undef public_6623d4f
#undef public_6623d66
#undef public_6623d73
#undef public_6623d7e
#undef public_6623d81
#undef public_6623d99
#undef public_6623da4
#undef public_6623da7
#undef public_6623dbe
#undef public_6623dc9
#undef public_6623dd4
#undef public_6623dd7
#undef public_6623ded
#undef public_6623df9
#undef public_6623e05
#undef public_6623e08
#undef public_6623e23
#undef public_6623e62
#undef public_6623e75
#undef public_6623e80
#undef public_6623e83
#undef public_6623e8e
#undef public_6623ea1
#undef public_6623ec8
#undef public_6623ee2
#undef public_6623f08
#undef public_6623f1b
#undef public_6623f28
#undef public_6623f2a
#undef public_6623f35
#undef public_6623f4c
#undef public_6623f64
#undef public_6623f71
#undef public_6623f73
#undef public_6623f7f
#undef public_6623fa9
#undef public_6623fc1
#undef public_6623fd1
#undef public_6623fdb
#undef public_6623ffe
#undef public_6624011
#undef public_662401c
#undef public_662401f
#undef public_6624029
#undef public_6624052
#undef public_6624065
#undef public_6624072
#undef public_6624074
#undef public_6624077
#undef public_662407e
#undef public_6624081
#undef public_66240a9
#undef public_66240b2
