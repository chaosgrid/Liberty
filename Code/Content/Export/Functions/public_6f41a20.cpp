#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41a20);
CLANG_FORWARD_PROC_SYMBOL(public_6f465f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f41a44 _public_6f41a44
#define public_6f41a62 _public_6f41a62
#define public_6f41a6d _public_6f41a6d
#define public_6f41a76 _public_6f41a76
#define public_6f41a81 _public_6f41a81
#define public_6f41a9d _public_6f41a9d
#define public_6f41ab4 _public_6f41ab4
#define public_6f41ac1 _public_6f41ac1
#define public_6f41acc _public_6f41acc
#define public_6f41acf _public_6f41acf
#define public_6f41ae7 _public_6f41ae7
#define public_6f41af2 _public_6f41af2
#define public_6f41af5 _public_6f41af5
#define public_6f41b0a _public_6f41b0a
#define public_6f41b15 _public_6f41b15
#define public_6f41b20 _public_6f41b20
#define public_6f41b23 _public_6f41b23
#define public_6f41b37 _public_6f41b37
#define public_6f41b43 _public_6f41b43
#define public_6f41b4f _public_6f41b4f
#define public_6f41b52 _public_6f41b52
#define public_6f41b70 _public_6f41b70
#define public_6f41baf _public_6f41baf
#define public_6f41bc2 _public_6f41bc2
#define public_6f41bcd _public_6f41bcd
#define public_6f41bd0 _public_6f41bd0
#define public_6f41bdb _public_6f41bdb
#define public_6f41bee _public_6f41bee
#define public_6f41c15 _public_6f41c15
#define public_6f41c2f _public_6f41c2f
#define public_6f41c55 _public_6f41c55
#define public_6f41c68 _public_6f41c68
#define public_6f41c75 _public_6f41c75
#define public_6f41c77 _public_6f41c77
#define public_6f41c82 _public_6f41c82
#define public_6f41c99 _public_6f41c99
#define public_6f41cb1 _public_6f41cb1
#define public_6f41cbe _public_6f41cbe
#define public_6f41cc0 _public_6f41cc0
#define public_6f41ccc _public_6f41ccc
#define public_6f41cf6 _public_6f41cf6
#define public_6f41d0e _public_6f41d0e
#define public_6f41d1e _public_6f41d1e
#define public_6f41d28 _public_6f41d28
#define public_6f41d4b _public_6f41d4b
#define public_6f41d5e _public_6f41d5e
#define public_6f41d69 _public_6f41d69
#define public_6f41d6c _public_6f41d6c
#define public_6f41d76 _public_6f41d76
#define public_6f41d9f _public_6f41d9f
#define public_6f41db2 _public_6f41db2
#define public_6f41dbf _public_6f41dbf
#define public_6f41dc1 _public_6f41dc1
#define public_6f41dc4 _public_6f41dc4
#define public_6f41dc7 _public_6f41dc7
#define public_6f41dca _public_6f41dca

PROC_DECLARE(0x6f41a20, internal_6f41a20, public_6f41a20);
extern "C" NAKED register_t __cdecl internal_6f41a20()
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
        call public_6f465f0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f41a62
        mov eax, dword ptr ds : [esi+8]
        public_6f41a44 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f41ae7
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f41af5
        public_6f41a62 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f41a6d
        mov eax, edx
        jmp public_6f41a44
        public_6f41a6d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_6f41a81
        public_6f41a76 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_6f41a76
        public_6f41a81 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f41a44
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f41a9d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f41ab4
        public_6f41a9d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f41ab4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f41ac1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f41acf
        public_6f41ac1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f41acc
        mov dword ptr ds : [edx], ecx
        jmp public_6f41acf
        public_6f41acc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f41acf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x44]
        mov dl, byte ptr ds : [ecx+0x44]
        mov byte ptr ds : [ecx+0x44], bl
        mov byte ptr ds : [esi+0x44], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f41b52
        public_6f41ae7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f41af2
        mov dword ptr ds : [ecx], eax
        jmp public_6f41af5
        public_6f41af2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f41af5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f41b23
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f41b0a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f41b20
        public_6f41b0a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        mov edx, eax
        jne public_6f41b20
        public_6f41b15 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        je public_6f41b15
        public_6f41b20 : nop
        mov dword ptr ss : [ebp], edx
        public_6f41b23 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f41b52
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f41b37
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f41b4f
        public_6f41b37 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        mov edx, eax
        jne public_6f41b4f
        public_6f41b43 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        je public_6f41b43
        public_6f41b4f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f41b52 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x44]
        mov bl, 1
        cmp dl, bl
        jne public_6f41dca
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f41dc7
        nop 
        public_6f41b70 : nop
        cmp byte ptr ds : [eax+0x44], bl
        jne public_6f41dc7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f41c2f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_6f41bdb
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f41baf
        mov dword ptr ds : [esi+4], ecx
        public_6f41baf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41bc2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41bd0
        public_6f41bc2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f41bcd
        mov dword ptr ds : [esi], edx
        jmp public_6f41bd0
        public_6f41bcd : nop
        mov dword ptr ds : [esi+8], edx
        public_6f41bd0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f41bdb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6f41bee
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        je public_6f41c99
        public_6f41bee : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6f41ccc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x44], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x44], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f41c15
        mov dword ptr ds : [esi+4], ecx
        public_6f41c15 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41cb1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41cc0
        public_6f41c2f : nop
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_6f41c82
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f41c55
        mov dword ptr ds : [esi+4], ecx
        public_6f41c55 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41c68
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41c77
        public_6f41c68 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f41c75
        mov dword ptr ds : [esi+8], edx
        jmp public_6f41c77
        public_6f41c75 : nop
        mov dword ptr ds : [esi], edx
        public_6f41c77 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f41c82 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6f41d28
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6f41d28
        public_6f41c99 : nop
        mov byte ptr ds : [ecx+0x44], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f41b70
        jmp public_6f41dc7
        public_6f41cb1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f41cbe
        mov dword ptr ds : [esi+8], edx
        jmp public_6f41cc0
        public_6f41cbe : nop
        mov dword ptr ds : [esi], edx
        public_6f41cc0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f41ccc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x44]
        mov byte ptr ds : [ecx+0x44], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f41cf6
        mov dword ptr ds : [esi+4], ecx
        public_6f41cf6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41d0e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f41dc4
        public_6f41d0e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f41d1e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f41dc4
        public_6f41d1e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f41dc4
        public_6f41d28 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_6f41d76
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x44], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x44], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f41d4b
        mov dword ptr ds : [esi+4], ecx
        public_6f41d4b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41d5e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41d6c
        public_6f41d5e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f41d69
        mov dword ptr ds : [esi], edx
        jmp public_6f41d6c
        public_6f41d69 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f41d6c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f41d76 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x44]
        mov byte ptr ds : [ecx+0x44], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f41d9f
        mov dword ptr ds : [esi+4], ecx
        public_6f41d9f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41db2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41dc1
        public_6f41db2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f41dbf
        mov dword ptr ds : [esi+8], edx
        jmp public_6f41dc1
        public_6f41dbf : nop
        mov dword ptr ds : [esi], edx
        public_6f41dc1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f41dc4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f41dc7 : nop
        mov byte ptr ds : [eax+0x44], bl
        public_6f41dca : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6fa8fe0
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
        UNREACHABLE_TRAP(0x6f41a20)
    }
}

#undef public_6f41a44
#undef public_6f41a62
#undef public_6f41a6d
#undef public_6f41a76
#undef public_6f41a81
#undef public_6f41a9d
#undef public_6f41ab4
#undef public_6f41ac1
#undef public_6f41acc
#undef public_6f41acf
#undef public_6f41ae7
#undef public_6f41af2
#undef public_6f41af5
#undef public_6f41b0a
#undef public_6f41b15
#undef public_6f41b20
#undef public_6f41b23
#undef public_6f41b37
#undef public_6f41b43
#undef public_6f41b4f
#undef public_6f41b52
#undef public_6f41b70
#undef public_6f41baf
#undef public_6f41bc2
#undef public_6f41bcd
#undef public_6f41bd0
#undef public_6f41bdb
#undef public_6f41bee
#undef public_6f41c15
#undef public_6f41c2f
#undef public_6f41c55
#undef public_6f41c68
#undef public_6f41c75
#undef public_6f41c77
#undef public_6f41c82
#undef public_6f41c99
#undef public_6f41cb1
#undef public_6f41cbe
#undef public_6f41cc0
#undef public_6f41ccc
#undef public_6f41cf6
#undef public_6f41d0e
#undef public_6f41d1e
#undef public_6f41d28
#undef public_6f41d4b
#undef public_6f41d5e
#undef public_6f41d69
#undef public_6f41d6c
#undef public_6f41d76
#undef public_6f41d9f
#undef public_6f41db2
#undef public_6f41dbf
#undef public_6f41dc1
#undef public_6f41dc4
#undef public_6f41dc7
#undef public_6f41dca
