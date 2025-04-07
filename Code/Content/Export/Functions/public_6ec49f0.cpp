#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6eb8ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1d30);
CLANG_FORWARD_PROC_SYMBOL(public_6ed23d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f155f0);

#define public_6ec4a1a _public_6ec4a1a
#define public_6ec4a2c _public_6ec4a2c
#define public_6ec4a3f _public_6ec4a3f
#define public_6ec4a51 _public_6ec4a51
#define public_6ec4a92 _public_6ec4a92
#define public_6ec4a9c _public_6ec4a9c
#define public_6ec4ae5 _public_6ec4ae5
#define public_6ec4b2d _public_6ec4b2d
#define public_6ec4b33 _public_6ec4b33
#define public_6ec4b60 _public_6ec4b60
#define public_6ec4b91 _public_6ec4b91
#define public_6ec4bd4 _public_6ec4bd4
#define public_6ec4bf9 _public_6ec4bf9
#define public_6ec4bfb _public_6ec4bfb
#define public_6ec4c20 _public_6ec4c20
#define public_6ec4c3d _public_6ec4c3d
#define public_6ec4c43 _public_6ec4c43
#define public_6ec4c96 _public_6ec4c96
#define public_6ec4cad _public_6ec4cad
#define public_6ec4caf _public_6ec4caf
#define public_6ec4cc8 _public_6ec4cc8
#define public_6ec4cdb _public_6ec4cdb
#define public_6ec4ce5 _public_6ec4ce5

PROC_DECLARE(0x6ec49f0, internal_6ec49f0, public_6ec49f0);
extern "C" NAKED register_t __cdecl internal_6ec49f0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ds : [public_6fb3048]
        mov ebp, ecx
        xor ebx, ebx
        push ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], ebp
        call edi
        cmp eax, ebx
        jne public_6ec4a1a
        mov dword ptr ss : [ebp+0xC], ebx
        mov byte ptr ss : [ebp+0x10], bl
        jmp public_6ec4a2c
        public_6ec4a1a : nop
        push eax
        lea eax, ss:[ebp+0x10]
        push 0x30
        push eax
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0xC], eax
        public_6ec4a2c : nop
        push 1
        mov ecx, esi
        call edi
        cmp eax, ebx
        jne public_6ec4a3f
        mov dword ptr ss : [ebp+0x40], ebx
        mov byte ptr ss : [ebp+0x44], 0
        jmp public_6ec4a51
        public_6ec4a3f : nop
        push eax
        lea ecx, ss:[ebp+0x44]
        push 0x30
        push ecx
        call public_6ea9f40
        add esp, 0xC
        mov dword ptr ss : [ebp+0x40], eax
        public_6ec4a51 : nop
        push 2
        mov ecx, esi
        call edi
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ebx, dword ptr ds : [public_6fb306c]
        add esp, 4
        push 3
        mov ecx, esi
        mov dword ptr ss : [ebp+0x74], eax
        call ebx
        test al, al
        jne public_6ec4a9c
        push 3
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [ebp+0xB4], eax
        jl public_6ec4a92
        test eax, eax
        je public_6ec4a92
        cmp eax, 0xA
        jle public_6ec4a9c
        public_6ec4a92 : nop
        mov dword ptr ss : [ebp+0xB4], 0xFFFFFFFF
        public_6ec4a9c : nop
        push 4
        mov ecx, esi
        call ebx
        test al, al
        jne public_6ec4c43
        push 7
        mov ecx, esi
        call ebx
        push 4
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        lea edx, ss:[ebp+0xAC]
        push edx
        call dword ptr ds : [public_6fb33b4]
        add esp, 8
        push 5
        mov ecx, esi
        call ebx
        test al, al
        jne public_6ec4ae5
        push 5
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ss : [ebp+0xB0], eax
        public_6ec4ae5 : nop
        push 6
        mov ecx, esi
        call ebx
        test al, al
        jne public_6ec4c43
/*FIXUP push offset public_6fb5aa8 @0x6ec4af3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb5aa8
        push 6
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        lea edi, ss:[ebp+0x78]
        je public_6ec4b2d
        push 1
        push 6
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb33b0]
        add esp, 8
        mov dword ptr ds : [edi], eax
        jmp public_6ec4b33
        public_6ec4b2d : nop
        mov dword ptr ds : [edi], 0
        public_6ec4b33 : nop
        push 0
        push 7
        mov ecx, esi
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb33b0]
        mov dword ptr ss : [ebp+0x7C], eax
        add esp, 8
        mov ebp, 8
        push ebp
        mov ecx, esi
        call ebx
        test al, al
        jne public_6ec4b91
        lea ebx, ds:[ebx]
        public_6ec4b60 : nop
        mov eax, ebp
        push eax
        mov ecx, esi
        inc ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        call dword ptr ds : [public_6fb33ac]
        mov ecx, dword ptr ds : [edi+0x30]
        mov dword ptr ds : [edi+ecx*4+0x10], eax
        mov ebx, dword ptr ds : [edi+0x30]
        add esp, 4
        inc ebx
        push ebp
        mov ecx, esi
        mov dword ptr ds : [edi+0x30], ebx
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ec4b60
        public_6ec4b91 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        lea edx, ss:[ebp+0x44]
/*FIXUP push offset public_6fb4708 @0x6ec4b98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        push edx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ec4c3d
        mov ebx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ebx+0x320]
        mov eax, dword ptr ds : [ebx+0x324]
        add ebx, 0x31C
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x1C], eax
        je public_6ec4bf9
        public_6ec4bd4 : nop
        push edi
        call public_6eb8ef0
        mov ecx, dword ptr ss : [esp+0x10]
        test al, al
        mov eax, dword ptr ss : [esp+0x1C]
        jne public_6ec4ce5
        add ecx, 0x34
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6ec4bd4
        mov ebx, dword ptr ss : [esp+0x14]
        public_6ec4bf9 : nop
        mov ecx, eax
        public_6ec4bfb : nop
        cmp ecx, eax
        jne public_6ec4c3d
        push edi
        push eax
        mov ecx, ebx
        call public_6ed1d30
        mov ecx, dword ptr ds : [ebx+4]
        mov ebx, dword ptr ds : [ebx+8]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6ec4c3d
        lea ebx, ds:[ebx]
        public_6ec4c20 : nop
        push edi
        call public_6eb8ef0
        test al, al
        jne public_6ec4c3d
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1C]
        add ecx, 0x34
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        jne public_6ec4c20
        public_6ec4c3d : nop
        mov ebx, dword ptr ds : [public_6fb306c]
        public_6ec4c43 : nop
        push 6
        mov ecx, esi
        call ebx
        test al, al
        je public_6ec4cdb
        lea eax, ss:[ebp+0x44]
/*FIXUP push offset public_6fb4708 @0x6ec4c54*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        push eax
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6ec4cdb
        mov ecx, dword ptr ss : [ebp+4]
        lea eax, ss:[ebp+0xC]
        push eax
        call public_6f155f0
        mov ebx, eax
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6ec4cdb
        mov ebp, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [ebp+0x320]
        mov edi, dword ptr ss : [ebp+0x324]
        add ebp, 0x31C
        cmp esi, edi
        je public_6ec4cad
        public_6ec4c96 : nop
        push ebx
        mov ecx, esi
        call public_6eb8ef0
        test al, al
        mov ebx, dword ptr ss : [esp+0x1C]
        jne public_6ec4caf
        add esi, 0x34
        cmp esi, edi
        jne public_6ec4c96
        public_6ec4cad : nop
        mov esi, edi
        public_6ec4caf : nop
        cmp esi, edi
        jne public_6ec4cdb
        push ebx
        push 1
        push edi
        mov ecx, ebp
        call public_6ed23d0
        mov esi, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp+8]
        cmp esi, ebp
        je public_6ec4cdb
        public_6ec4cc8 : nop
        push ebx
        mov ecx, esi
        call public_6eb8ef0
        test al, al
        jne public_6ec4cdb
        add esi, 0x34
        cmp esi, ebp
        jne public_6ec4cc8
        public_6ec4cdb : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6ec4ce5 : nop
        mov ebx, dword ptr ss : [esp+0x14]
        jmp public_6ec4bfb
        UNREACHABLE_TRAP(0x6ec49f0)
    }
}

#undef public_6ec4a1a
#undef public_6ec4a2c
#undef public_6ec4a3f
#undef public_6ec4a51
#undef public_6ec4a92
#undef public_6ec4a9c
#undef public_6ec4ae5
#undef public_6ec4b2d
#undef public_6ec4b33
#undef public_6ec4b60
#undef public_6ec4b91
#undef public_6ec4bd4
#undef public_6ec4bf9
#undef public_6ec4bfb
#undef public_6ec4c20
#undef public_6ec4c3d
#undef public_6ec4c43
#undef public_6ec4c96
#undef public_6ec4cad
#undef public_6ec4caf
#undef public_6ec4cc8
#undef public_6ec4cdb
#undef public_6ec4ce5
