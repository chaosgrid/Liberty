#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecbfe0);

#define public_6ecc054 _public_6ecc054
#define public_6ecc094 _public_6ecc094
#define public_6ecc0a0 _public_6ecc0a0
#define public_6ecc0a8 _public_6ecc0a8
#define public_6ecc0b2 _public_6ecc0b2
#define public_6ecc0c2 _public_6ecc0c2
#define public_6ecc0ca _public_6ecc0ca
#define public_6ecc0e7 _public_6ecc0e7
#define public_6ecc0f0 _public_6ecc0f0
#define public_6ecc0f8 _public_6ecc0f8
#define public_6ecc104 _public_6ecc104
#define public_6ecc10c _public_6ecc10c
#define public_6ecc116 _public_6ecc116
#define public_6ecc126 _public_6ecc126
#define public_6ecc12e _public_6ecc12e
#define public_6ecc140 _public_6ecc140
#define public_6ecc14c _public_6ecc14c
#define public_6ecc154 _public_6ecc154
#define public_6ecc170 _public_6ecc170
#define public_6ecc17c _public_6ecc17c
#define public_6ecc184 _public_6ecc184
#define public_6ecc198 _public_6ecc198
#define public_6ecc1c1 _public_6ecc1c1
#define public_6ecc1cc _public_6ecc1cc
#define public_6ecc1dc _public_6ecc1dc

PROC_DECLARE(0x6ecbfe0, internal_6ecbfe0, public_6ecbfe0);
extern "C" NAKED register_t __cdecl internal_6ecbfe0()
{
    __asm
    {
        sub esp, 0x414
        push ebx
        push esi
        mov dword ptr ss : [esp+0x10], ecx
        call dword ptr ds : [public_6ed1008]
        lea edx, ss:[esp+8]
        push edx
        xor ebx, ebx
/*FIXUP push offset public_6ed48b4 @0x6ecbff9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed48b4
        mov dword ptr ss : [esp+0x10], ebx
        mov ecx, dword ptr ds : [eax]
        push eax
        mov dword ptr ss : [esp+0x18], ebx
        call dword ptr ds : [ecx]
        test eax, eax
        jl public_6ecc1cc
        mov edx, dword ptr ds : [public_6ed504c]
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push 3
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov esi, eax
        cmp esi, ebx
        mov dword ptr ss : [esp+0x14], esi
        je public_6ecc1cc
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push 0x400
        lea edx, ss:[esp+0x1C]
        push edx
        push ebx
        push esi
        push eax
        call dword ptr ds : [ecx+0x1C]
        test eax, eax
        je public_6ecc1c1
        push ebp
        push edi
        public_6ecc054 : nop
        lea eax, ss:[esp+0x20]
        push 0x3D
        push eax
        call dword ptr ds : [public_6ed1064]
        mov edi, eax
        add esp, 8
        cmp edi, ebx
        je public_6ecc198
        lea ecx, ss:[esp+0x20]
        push 0x3D
        push ecx
        call dword ptr ds : [public_6ed1048]
        mov esi, eax
        add esp, 8
        cmp esi, ebx
        je public_6ecc0e7
        cmp esi, edi
        je public_6ecc0e7
        mov al, byte ptr ss : [esp+0x20]
        cmp al, bl
        lea ecx, ss:[esp+0x20]
        je public_6ecc0a8
        public_6ecc094 : nop
        cmp al, 0x3B
        je public_6ecc0a8
        cmp al, 0x20
        je public_6ecc0a0
        cmp al, 9
        jne public_6ecc0a8
        public_6ecc0a0 : nop
        mov al, byte ptr ds : [ecx+1]
        inc ecx
        cmp al, bl
        jne public_6ecc094
        public_6ecc0a8 : nop
        mov al, byte ptr ds : [esi]
        cmp al, bl
        mov edx, ecx
        mov ecx, esi
        je public_6ecc0ca
        public_6ecc0b2 : nop
        cmp al, 0x3D
        je public_6ecc0c2
        cmp al, 0x3B
        je public_6ecc0c2
        cmp al, 0x20
        je public_6ecc0c2
        cmp al, 9
        jne public_6ecc0ca
        public_6ecc0c2 : nop
        mov al, byte ptr ds : [ecx-1]
        dec ecx
        cmp al, bl
        jne public_6ecc0b2
/*FIXUP public_6ecc0ca : nop
        push offset public_6ed4f3c @0x6ecc0ca*/
  FIXUP public_6ecc0ca : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed4f3c
        push edx
        mov byte ptr ds : [ecx+1], bl
        call dword ptr ds : [public_6ed100c]
        add esp, 8
        mov ebp, eax
        neg ebp
        sbb ebp, ebp
        neg ebp
        inc esi
        jmp public_6ecc0f0
        public_6ecc0e7 : nop
        lea esi, ss:[esp+0x20]
        mov ebp, 1
        public_6ecc0f0 : nop
        mov al, byte ptr ds : [esi]
        cmp al, bl
        mov ecx, esi
        je public_6ecc10c
        public_6ecc0f8 : nop
        cmp al, 0x3B
        je public_6ecc10c
        cmp al, 0x20
        je public_6ecc104
        cmp al, 9
        jne public_6ecc10c
        public_6ecc104 : nop
        mov al, byte ptr ds : [ecx+1]
        inc ecx
        cmp al, bl
        jne public_6ecc0f8
        public_6ecc10c : nop
        mov al, byte ptr ds : [edi]
        cmp al, bl
        mov esi, ecx
        mov ecx, edi
        je public_6ecc12e
        public_6ecc116 : nop
        cmp al, 0x3D
        je public_6ecc126
        cmp al, 0x3B
        je public_6ecc126
        cmp al, 0x20
        je public_6ecc126
        cmp al, 9
        jne public_6ecc12e
        public_6ecc126 : nop
        mov al, byte ptr ds : [ecx-1]
        dec ecx
        cmp al, bl
        jne public_6ecc116
        public_6ecc12e : nop
        lea edx, ds:[edi+1]
        mov byte ptr ds : [ecx+1], bl
        mov al, byte ptr ds : [edx]
        cmp al, bl
        je public_6ecc154
        lea ebx, ds:[ebx]
        public_6ecc140 : nop
        cmp al, 0x3B
        je public_6ecc154
        cmp al, 0x20
        je public_6ecc14c
        cmp al, 9
        jne public_6ecc154
        public_6ecc14c : nop
        mov al, byte ptr ds : [edx+1]
        inc edx
        cmp al, bl
        jne public_6ecc140
        public_6ecc154 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov al, byte ptr ds : [edx+ecx-1]
        cmp al, bl
        lea ecx, ds:[edx+ecx-1]
        je public_6ecc184
        lea esp, ss:[esp]
        public_6ecc170 : nop
        cmp al, 0x3B
        je public_6ecc17c
        cmp al, 0x20
        je public_6ecc17c
        cmp al, 9
        jne public_6ecc184
        public_6ecc17c : nop
        mov al, byte ptr ds : [ecx-1]
        dec ecx
        cmp al, bl
        jne public_6ecc170
        public_6ecc184 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push esi
        push ebp
        mov byte ptr ds : [ecx+1], bl
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov esi, dword ptr ss : [esp+0x1C]
        public_6ecc198 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [eax]
        push 0x400
        inc ecx
        lea edi, ss:[esp+0x24]
        push edi
        push ecx
        push esi
        push eax
        mov dword ptr ss : [esp+0x28], ecx
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6ecc054
        pop edi
        pop ebp
        public_6ecc1c1 : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x18]
        public_6ecc1cc : nop
        mov eax, dword ptr ss : [esp+8]
        pop esi
        cmp eax, ebx
        pop ebx
        je public_6ecc1dc
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6ecc1dc : nop
        xor eax, eax
        add esp, 0x414
        ret 
        UNREACHABLE_TRAP(0x6ecbfe0)
    }
}

#undef public_6ecc054
#undef public_6ecc094
#undef public_6ecc0a0
#undef public_6ecc0a8
#undef public_6ecc0b2
#undef public_6ecc0c2
#undef public_6ecc0ca
#undef public_6ecc0e7
#undef public_6ecc0f0
#undef public_6ecc0f8
#undef public_6ecc104
#undef public_6ecc10c
#undef public_6ecc116
#undef public_6ecc126
#undef public_6ecc12e
#undef public_6ecc140
#undef public_6ecc14c
#undef public_6ecc154
#undef public_6ecc170
#undef public_6ecc17c
#undef public_6ecc184
#undef public_6ecc198
#undef public_6ecc1c1
#undef public_6ecc1cc
#undef public_6ecc1dc
