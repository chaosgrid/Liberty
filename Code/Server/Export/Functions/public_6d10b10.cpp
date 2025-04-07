#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d00db0);
CLANG_FORWARD_PROC_SYMBOL(public_6d10030);
CLANG_FORWARD_PROC_SYMBOL(public_6d10b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d10b34 _public_6d10b34
#define public_6d10b52 _public_6d10b52
#define public_6d10b5d _public_6d10b5d
#define public_6d10b70 _public_6d10b70
#define public_6d10b7e _public_6d10b7e
#define public_6d10b9a _public_6d10b9a
#define public_6d10bb1 _public_6d10bb1
#define public_6d10bbe _public_6d10bbe
#define public_6d10bc9 _public_6d10bc9
#define public_6d10bcc _public_6d10bcc
#define public_6d10bf0 _public_6d10bf0
#define public_6d10bfb _public_6d10bfb
#define public_6d10bfe _public_6d10bfe
#define public_6d10c13 _public_6d10c13
#define public_6d10c21 _public_6d10c21
#define public_6d10c2f _public_6d10c2f
#define public_6d10c32 _public_6d10c32
#define public_6d10c46 _public_6d10c46
#define public_6d10c55 _public_6d10c55
#define public_6d10c64 _public_6d10c64
#define public_6d10c67 _public_6d10c67
#define public_6d10c87 _public_6d10c87
#define public_6d10cd2 _public_6d10cd2
#define public_6d10ce5 _public_6d10ce5
#define public_6d10cf0 _public_6d10cf0
#define public_6d10cf3 _public_6d10cf3
#define public_6d10cfe _public_6d10cfe
#define public_6d10d17 _public_6d10d17
#define public_6d10d47 _public_6d10d47
#define public_6d10d61 _public_6d10d61
#define public_6d10d90 _public_6d10d90
#define public_6d10da3 _public_6d10da3
#define public_6d10db0 _public_6d10db0
#define public_6d10db2 _public_6d10db2
#define public_6d10dbd _public_6d10dbd
#define public_6d10dda _public_6d10dda
#define public_6d10df5 _public_6d10df5
#define public_6d10e02 _public_6d10e02
#define public_6d10e04 _public_6d10e04
#define public_6d10e10 _public_6d10e10
#define public_6d10e46 _public_6d10e46
#define public_6d10e5e _public_6d10e5e
#define public_6d10e6e _public_6d10e6e
#define public_6d10e78 _public_6d10e78
#define public_6d10ea4 _public_6d10ea4
#define public_6d10eb7 _public_6d10eb7
#define public_6d10ec2 _public_6d10ec2
#define public_6d10ec5 _public_6d10ec5
#define public_6d10ecf _public_6d10ecf
#define public_6d10f04 _public_6d10f04
#define public_6d10f17 _public_6d10f17
#define public_6d10f24 _public_6d10f24
#define public_6d10f26 _public_6d10f26
#define public_6d10f29 _public_6d10f29
#define public_6d10f2c _public_6d10f2c
#define public_6d10f36 _public_6d10f36

PROC_DECLARE(0x6d10b10, internal_6d10b10, public_6d10b10);
extern "C" NAKED register_t __cdecl internal_6d10b10()
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
        call public_6d00db0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6d10b52
        mov eax, dword ptr ds : [esi+8]
        public_6d10b34 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6d10bf0
        mov dword ptr ds : [ecx+4], eax
        jmp public_6d10bfe
        public_6d10b52 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6d10b5d
        mov eax, edx
        jmp public_6d10b34
        public_6d10b5d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x111]
        test bl, bl
        jne public_6d10b7e
        lea esp, ss:[esp]
        public_6d10b70 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x111]
        test bl, bl
        je public_6d10b70
        public_6d10b7e : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6d10b34
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d10b9a
        mov dword ptr ds : [eax+4], ecx
        jmp public_6d10bb1
        public_6d10b9a : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6d10bb1 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6d10bbe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d10bcc
        public_6d10bbe : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6d10bc9
        mov dword ptr ds : [edx], ecx
        jmp public_6d10bcc
        public_6d10bc9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d10bcc : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x110]
        mov dl, byte ptr ds : [ecx+0x110]
        mov byte ptr ds : [ecx+0x110], bl
        mov byte ptr ds : [esi+0x110], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6d10c67
        public_6d10bf0 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6d10bfb
        mov dword ptr ds : [ecx], eax
        jmp public_6d10bfe
        public_6d10bfb : nop
        mov dword ptr ds : [ecx+8], eax
        public_6d10bfe : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6d10c32
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d10c13
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d10c2f
        public_6d10c13 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x111]
        test bl, bl
        mov edx, eax
        jne public_6d10c2f
        public_6d10c21 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x111]
        test bl, bl
        je public_6d10c21
        public_6d10c2f : nop
        mov dword ptr ss : [ebp], edx
        public_6d10c32 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6d10c67
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d10c46
        mov edx, dword ptr ds : [esi+4]
        jmp public_6d10c64
        public_6d10c46 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x111]
        test bl, bl
        mov edx, eax
        jne public_6d10c64
        public_6d10c55 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x111]
        test bl, bl
        je public_6d10c55
        public_6d10c64 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6d10c67 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x110]
        mov bl, 1
        cmp cl, bl
        jne public_6d10f36
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_6d10f2c
        public_6d10c87 : nop
        cmp byte ptr ds : [eax+0x110], bl
        jne public_6d10f2c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6d10d61
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x110]
        test dl, dl
        jne public_6d10cfe
        mov byte ptr ds : [ecx+0x110], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x110], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d10cd2
        mov dword ptr ds : [esi+4], ecx
        public_6d10cd2 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d10ce5
        mov dword ptr ds : [esi+4], edx
        jmp public_6d10cf3
        public_6d10ce5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d10cf0
        mov dword ptr ds : [esi], edx
        jmp public_6d10cf3
        public_6d10cf0 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d10cf3 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d10cfe : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x110], bl
        jne public_6d10d17
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x110], bl
        je public_6d10dda
        public_6d10d17 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x110], bl
        jne public_6d10e10
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x110], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x110], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d10d47
        mov dword ptr ds : [esi+4], ecx
        public_6d10d47 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d10df5
        mov dword ptr ds : [esi+4], edx
        jmp public_6d10e04
        public_6d10d61 : nop
        mov dl, byte ptr ds : [ecx+0x110]
        test dl, dl
        jne public_6d10dbd
        mov byte ptr ds : [ecx+0x110], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x110], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d10d90
        mov dword ptr ds : [esi+4], ecx
        public_6d10d90 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d10da3
        mov dword ptr ds : [esi+4], edx
        jmp public_6d10db2
        public_6d10da3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d10db0
        mov dword ptr ds : [esi+8], edx
        jmp public_6d10db2
        public_6d10db0 : nop
        mov dword ptr ds : [esi], edx
        public_6d10db2 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6d10dbd : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x110], bl
        jne public_6d10e78
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x110], bl
        jne public_6d10e78
        public_6d10dda : nop
        mov byte ptr ds : [ecx+0x110], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d10c87
        jmp public_6d10f2c
        public_6d10df5 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d10e02
        mov dword ptr ds : [esi+8], edx
        jmp public_6d10e04
        public_6d10e02 : nop
        mov dword ptr ds : [esi], edx
        public_6d10e04 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6d10e10 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x110]
        mov byte ptr ds : [ecx+0x110], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x110], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x110], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d10e46
        mov dword ptr ds : [esi+4], ecx
        public_6d10e46 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d10e5e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d10f29
        public_6d10e5e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d10e6e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d10f29
        public_6d10e6e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6d10f29
        public_6d10e78 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x110], bl
        jne public_6d10ecf
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x110], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x110], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d10ea4
        mov dword ptr ds : [esi+4], ecx
        public_6d10ea4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d10eb7
        mov dword ptr ds : [esi+4], edx
        jmp public_6d10ec5
        public_6d10eb7 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6d10ec2
        mov dword ptr ds : [esi], edx
        jmp public_6d10ec5
        public_6d10ec2 : nop
        mov dword ptr ds : [esi+8], edx
        public_6d10ec5 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6d10ecf : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x110]
        mov byte ptr ds : [ecx+0x110], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x110], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x110], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6d10f04
        mov dword ptr ds : [esi+4], ecx
        public_6d10f04 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6d10f17
        mov dword ptr ds : [esi+4], edx
        jmp public_6d10f26
        public_6d10f17 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6d10f24
        mov dword ptr ds : [esi+8], edx
        jmp public_6d10f26
        public_6d10f24 : nop
        mov dword ptr ds : [esi], edx
        public_6d10f26 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d10f29 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d10f2c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x110], bl
        public_6d10f36 : nop
        lea ecx, ds:[esi+0xC]
        call public_6d10030
        push esi
        call public_6d5ffb0
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
        UNREACHABLE_TRAP(0x6d10b10)
    }
}

#undef public_6d10b34
#undef public_6d10b52
#undef public_6d10b5d
#undef public_6d10b70
#undef public_6d10b7e
#undef public_6d10b9a
#undef public_6d10bb1
#undef public_6d10bbe
#undef public_6d10bc9
#undef public_6d10bcc
#undef public_6d10bf0
#undef public_6d10bfb
#undef public_6d10bfe
#undef public_6d10c13
#undef public_6d10c21
#undef public_6d10c2f
#undef public_6d10c32
#undef public_6d10c46
#undef public_6d10c55
#undef public_6d10c64
#undef public_6d10c67
#undef public_6d10c87
#undef public_6d10cd2
#undef public_6d10ce5
#undef public_6d10cf0
#undef public_6d10cf3
#undef public_6d10cfe
#undef public_6d10d17
#undef public_6d10d47
#undef public_6d10d61
#undef public_6d10d90
#undef public_6d10da3
#undef public_6d10db0
#undef public_6d10db2
#undef public_6d10dbd
#undef public_6d10dda
#undef public_6d10df5
#undef public_6d10e02
#undef public_6d10e04
#undef public_6d10e10
#undef public_6d10e46
#undef public_6d10e5e
#undef public_6d10e6e
#undef public_6d10e78
#undef public_6d10ea4
#undef public_6d10eb7
#undef public_6d10ec2
#undef public_6d10ec5
#undef public_6d10ecf
#undef public_6d10f04
#undef public_6d10f17
#undef public_6d10f24
#undef public_6d10f26
#undef public_6d10f29
#undef public_6d10f2c
#undef public_6d10f36
