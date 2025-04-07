#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4f040);
CLANG_FORWARD_PROC_SYMBOL(public_6b4f7d0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a092);

#define public_6b4f064 _public_6b4f064
#define public_6b4f082 _public_6b4f082
#define public_6b4f08d _public_6b4f08d
#define public_6b4f096 _public_6b4f096
#define public_6b4f0a1 _public_6b4f0a1
#define public_6b4f0bd _public_6b4f0bd
#define public_6b4f0d4 _public_6b4f0d4
#define public_6b4f0e1 _public_6b4f0e1
#define public_6b4f0ec _public_6b4f0ec
#define public_6b4f0ef _public_6b4f0ef
#define public_6b4f107 _public_6b4f107
#define public_6b4f112 _public_6b4f112
#define public_6b4f115 _public_6b4f115
#define public_6b4f12a _public_6b4f12a
#define public_6b4f135 _public_6b4f135
#define public_6b4f140 _public_6b4f140
#define public_6b4f143 _public_6b4f143
#define public_6b4f157 _public_6b4f157
#define public_6b4f163 _public_6b4f163
#define public_6b4f16f _public_6b4f16f
#define public_6b4f172 _public_6b4f172
#define public_6b4f190 _public_6b4f190
#define public_6b4f1cf _public_6b4f1cf
#define public_6b4f1e2 _public_6b4f1e2
#define public_6b4f1ed _public_6b4f1ed
#define public_6b4f1f0 _public_6b4f1f0
#define public_6b4f1fb _public_6b4f1fb
#define public_6b4f20e _public_6b4f20e
#define public_6b4f235 _public_6b4f235
#define public_6b4f24f _public_6b4f24f
#define public_6b4f275 _public_6b4f275
#define public_6b4f288 _public_6b4f288
#define public_6b4f295 _public_6b4f295
#define public_6b4f297 _public_6b4f297
#define public_6b4f2a2 _public_6b4f2a2
#define public_6b4f2b9 _public_6b4f2b9
#define public_6b4f2d1 _public_6b4f2d1
#define public_6b4f2de _public_6b4f2de
#define public_6b4f2e0 _public_6b4f2e0
#define public_6b4f2ec _public_6b4f2ec
#define public_6b4f316 _public_6b4f316
#define public_6b4f32e _public_6b4f32e
#define public_6b4f33e _public_6b4f33e
#define public_6b4f348 _public_6b4f348
#define public_6b4f36b _public_6b4f36b
#define public_6b4f37e _public_6b4f37e
#define public_6b4f389 _public_6b4f389
#define public_6b4f38c _public_6b4f38c
#define public_6b4f396 _public_6b4f396
#define public_6b4f3bf _public_6b4f3bf
#define public_6b4f3d2 _public_6b4f3d2
#define public_6b4f3df _public_6b4f3df
#define public_6b4f3e1 _public_6b4f3e1
#define public_6b4f3e4 _public_6b4f3e4
#define public_6b4f3e7 _public_6b4f3e7
#define public_6b4f3ea _public_6b4f3ea

PROC_DECLARE(0x6b4f040, internal_6b4f040, public_6b4f040);
extern "C" NAKED register_t __cdecl internal_6b4f040()
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
        call public_6b4f7d0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6b4f082
        mov eax, dword ptr ds : [esi+8]
        public_6b4f064 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6b4f107
        mov dword ptr ds : [ecx+4], eax
        jmp public_6b4f115
        public_6b4f082 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6b4f08d
        mov eax, edx
        jmp public_6b4f064
        public_6b4f08d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        jne public_6b4f0a1
        public_6b4f096 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x49]
        test bl, bl
        je public_6b4f096
        public_6b4f0a1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6b4f064
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b4f0bd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6b4f0d4
        public_6b4f0bd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6b4f0d4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6b4f0e1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b4f0ef
        public_6b4f0e1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6b4f0ec
        mov dword ptr ds : [edx], ecx
        jmp public_6b4f0ef
        public_6b4f0ec : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b4f0ef : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x48]
        mov dl, byte ptr ds : [ecx+0x48]
        mov byte ptr ds : [ecx+0x48], bl
        mov byte ptr ds : [esi+0x48], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6b4f172
        public_6b4f107 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6b4f112
        mov dword ptr ds : [ecx], eax
        jmp public_6b4f115
        public_6b4f112 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6b4f115 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6b4f143
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b4f12a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6b4f140
        public_6b4f12a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_6b4f140
        public_6b4f135 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_6b4f135
        public_6b4f140 : nop
        mov dword ptr ss : [ebp], edx
        public_6b4f143 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6b4f172
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b4f157
        mov edx, dword ptr ds : [esi+4]
        jmp public_6b4f16f
        public_6b4f157 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        mov edx, eax
        jne public_6b4f16f
        public_6b4f163 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x49]
        test bl, bl
        je public_6b4f163
        public_6b4f16f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6b4f172 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x48]
        mov bl, 1
        cmp dl, bl
        jne public_6b4f3ea
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6b4f3e7
        nop 
        public_6b4f190 : nop
        cmp byte ptr ds : [eax+0x48], bl
        jne public_6b4f3e7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6b4f24f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6b4f1fb
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b4f1cf
        mov dword ptr ds : [esi+4], ecx
        public_6b4f1cf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b4f1e2
        mov dword ptr ds : [esi+4], edx
        jmp public_6b4f1f0
        public_6b4f1e2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b4f1ed
        mov dword ptr ds : [esi], edx
        jmp public_6b4f1f0
        public_6b4f1ed : nop
        mov dword ptr ds : [esi+8], edx
        public_6b4f1f0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6b4f1fb : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6b4f20e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        je public_6b4f2b9
        public_6b4f20e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6b4f2ec
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b4f235
        mov dword ptr ds : [esi+4], ecx
        public_6b4f235 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b4f2d1
        mov dword ptr ds : [esi+4], edx
        jmp public_6b4f2e0
        public_6b4f24f : nop
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6b4f2a2
        mov byte ptr ds : [ecx+0x48], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b4f275
        mov dword ptr ds : [esi+4], ecx
        public_6b4f275 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b4f288
        mov dword ptr ds : [esi+4], edx
        jmp public_6b4f297
        public_6b4f288 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b4f295
        mov dword ptr ds : [esi+8], edx
        jmp public_6b4f297
        public_6b4f295 : nop
        mov dword ptr ds : [esi], edx
        public_6b4f297 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6b4f2a2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6b4f348
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6b4f348
        public_6b4f2b9 : nop
        mov byte ptr ds : [ecx+0x48], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6b4f190
        jmp public_6b4f3e7
        public_6b4f2d1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b4f2de
        mov dword ptr ds : [esi+8], edx
        jmp public_6b4f2e0
        public_6b4f2de : nop
        mov dword ptr ds : [esi], edx
        public_6b4f2e0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6b4f2ec : nop
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
        je public_6b4f316
        mov dword ptr ds : [esi+4], ecx
        public_6b4f316 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b4f32e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b4f3e4
        public_6b4f32e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b4f33e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b4f3e4
        public_6b4f33e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6b4f3e4
        public_6b4f348 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x48], bl
        jne public_6b4f396
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x48], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x48], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6b4f36b
        mov dword ptr ds : [esi+4], ecx
        public_6b4f36b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b4f37e
        mov dword ptr ds : [esi+4], edx
        jmp public_6b4f38c
        public_6b4f37e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6b4f389
        mov dword ptr ds : [esi], edx
        jmp public_6b4f38c
        public_6b4f389 : nop
        mov dword ptr ds : [esi+8], edx
        public_6b4f38c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6b4f396 : nop
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
        je public_6b4f3bf
        mov dword ptr ds : [esi+4], ecx
        public_6b4f3bf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6b4f3d2
        mov dword ptr ds : [esi+4], edx
        jmp public_6b4f3e1
        public_6b4f3d2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6b4f3df
        mov dword ptr ds : [esi+8], edx
        jmp public_6b4f3e1
        public_6b4f3df : nop
        mov dword ptr ds : [esi], edx
        public_6b4f3e1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b4f3e4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6b4f3e7 : nop
        mov byte ptr ds : [eax+0x48], bl
        public_6b4f3ea : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6b6a092
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
        UNREACHABLE_TRAP(0x6b4f040)
    }
}

#undef public_6b4f064
#undef public_6b4f082
#undef public_6b4f08d
#undef public_6b4f096
#undef public_6b4f0a1
#undef public_6b4f0bd
#undef public_6b4f0d4
#undef public_6b4f0e1
#undef public_6b4f0ec
#undef public_6b4f0ef
#undef public_6b4f107
#undef public_6b4f112
#undef public_6b4f115
#undef public_6b4f12a
#undef public_6b4f135
#undef public_6b4f140
#undef public_6b4f143
#undef public_6b4f157
#undef public_6b4f163
#undef public_6b4f16f
#undef public_6b4f172
#undef public_6b4f190
#undef public_6b4f1cf
#undef public_6b4f1e2
#undef public_6b4f1ed
#undef public_6b4f1f0
#undef public_6b4f1fb
#undef public_6b4f20e
#undef public_6b4f235
#undef public_6b4f24f
#undef public_6b4f275
#undef public_6b4f288
#undef public_6b4f295
#undef public_6b4f297
#undef public_6b4f2a2
#undef public_6b4f2b9
#undef public_6b4f2d1
#undef public_6b4f2de
#undef public_6b4f2e0
#undef public_6b4f2ec
#undef public_6b4f316
#undef public_6b4f32e
#undef public_6b4f33e
#undef public_6b4f348
#undef public_6b4f36b
#undef public_6b4f37e
#undef public_6b4f389
#undef public_6b4f38c
#undef public_6b4f396
#undef public_6b4f3bf
#undef public_6b4f3d2
#undef public_6b4f3df
#undef public_6b4f3e1
#undef public_6b4f3e4
#undef public_6b4f3e7
#undef public_6b4f3ea
