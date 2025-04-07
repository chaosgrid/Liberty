#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36050);
CLANG_FORWARD_PROC_SYMBOL(public_6f37280);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f36074 _public_6f36074
#define public_6f36092 _public_6f36092
#define public_6f3609d _public_6f3609d
#define public_6f360a6 _public_6f360a6
#define public_6f360b1 _public_6f360b1
#define public_6f360cd _public_6f360cd
#define public_6f360e4 _public_6f360e4
#define public_6f360f1 _public_6f360f1
#define public_6f360fc _public_6f360fc
#define public_6f360ff _public_6f360ff
#define public_6f36117 _public_6f36117
#define public_6f36122 _public_6f36122
#define public_6f36125 _public_6f36125
#define public_6f3613a _public_6f3613a
#define public_6f36145 _public_6f36145
#define public_6f36150 _public_6f36150
#define public_6f36153 _public_6f36153
#define public_6f36167 _public_6f36167
#define public_6f36173 _public_6f36173
#define public_6f3617f _public_6f3617f
#define public_6f36182 _public_6f36182
#define public_6f361a0 _public_6f361a0
#define public_6f361df _public_6f361df
#define public_6f361f2 _public_6f361f2
#define public_6f361fd _public_6f361fd
#define public_6f36200 _public_6f36200
#define public_6f3620b _public_6f3620b
#define public_6f3621e _public_6f3621e
#define public_6f36245 _public_6f36245
#define public_6f3625f _public_6f3625f
#define public_6f36285 _public_6f36285
#define public_6f36298 _public_6f36298
#define public_6f362a5 _public_6f362a5
#define public_6f362a7 _public_6f362a7
#define public_6f362b2 _public_6f362b2
#define public_6f362c9 _public_6f362c9
#define public_6f362e1 _public_6f362e1
#define public_6f362ee _public_6f362ee
#define public_6f362f0 _public_6f362f0
#define public_6f362fc _public_6f362fc
#define public_6f36326 _public_6f36326
#define public_6f3633e _public_6f3633e
#define public_6f3634e _public_6f3634e
#define public_6f36358 _public_6f36358
#define public_6f3637b _public_6f3637b
#define public_6f3638e _public_6f3638e
#define public_6f36399 _public_6f36399
#define public_6f3639c _public_6f3639c
#define public_6f363a6 _public_6f363a6
#define public_6f363cf _public_6f363cf
#define public_6f363e2 _public_6f363e2
#define public_6f363ef _public_6f363ef
#define public_6f363f1 _public_6f363f1
#define public_6f363f4 _public_6f363f4
#define public_6f363f7 _public_6f363f7
#define public_6f363fa _public_6f363fa

PROC_DECLARE(0x6f36050, internal_6f36050, public_6f36050);
extern "C" NAKED register_t __cdecl internal_6f36050()
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
        call public_6f37280
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f36092
        mov eax, dword ptr ds : [esi+8]
        public_6f36074 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f36117
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f36125
        public_6f36092 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f3609d
        mov eax, edx
        jmp public_6f36074
        public_6f3609d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        jne public_6f360b1
        public_6f360a6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x1D]
        test bl, bl
        je public_6f360a6
        public_6f360b1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f36074
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f360cd
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f360e4
        public_6f360cd : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f360e4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f360f1
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f360ff
        public_6f360f1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f360fc
        mov dword ptr ds : [edx], ecx
        jmp public_6f360ff
        public_6f360fc : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f360ff : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x1C]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov byte ptr ds : [ecx+0x1C], bl
        mov byte ptr ds : [esi+0x1C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f36182
        public_6f36117 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f36122
        mov dword ptr ds : [ecx], eax
        jmp public_6f36125
        public_6f36122 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f36125 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f36153
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3613a
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f36150
        public_6f3613a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6f36150
        public_6f36145 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f36145
        public_6f36150 : nop
        mov dword ptr ss : [ebp], edx
        public_6f36153 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f36182
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f36167
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f3617f
        public_6f36167 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        mov edx, eax
        jne public_6f3617f
        public_6f36173 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x1D]
        test bl, bl
        je public_6f36173
        public_6f3617f : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f36182 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x1C]
        mov bl, 1
        cmp dl, bl
        jne public_6f363fa
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f363f7
        nop 
        public_6f361a0 : nop
        cmp byte ptr ds : [eax+0x1C], bl
        jne public_6f363f7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f3625f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f3620b
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f361df
        mov dword ptr ds : [esi+4], ecx
        public_6f361df : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f361f2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f36200
        public_6f361f2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f361fd
        mov dword ptr ds : [esi], edx
        jmp public_6f36200
        public_6f361fd : nop
        mov dword ptr ds : [esi+8], edx
        public_6f36200 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f3620b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f3621e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        je public_6f362c9
        public_6f3621e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f362fc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f36245
        mov dword ptr ds : [esi+4], ecx
        public_6f36245 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f362e1
        mov dword ptr ds : [esi+4], edx
        jmp public_6f362f0
        public_6f3625f : nop
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f362b2
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f36285
        mov dword ptr ds : [esi+4], ecx
        public_6f36285 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f36298
        mov dword ptr ds : [esi+4], edx
        jmp public_6f362a7
        public_6f36298 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f362a5
        mov dword ptr ds : [esi+8], edx
        jmp public_6f362a7
        public_6f362a5 : nop
        mov dword ptr ds : [esi], edx
        public_6f362a7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f362b2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f36358
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f36358
        public_6f362c9 : nop
        mov byte ptr ds : [ecx+0x1C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f361a0
        jmp public_6f363f7
        public_6f362e1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f362ee
        mov dword ptr ds : [esi+8], edx
        jmp public_6f362f0
        public_6f362ee : nop
        mov dword ptr ds : [esi], edx
        public_6f362f0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f362fc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f36326
        mov dword ptr ds : [esi+4], ecx
        public_6f36326 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3633e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f363f4
        public_6f3633e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f3634e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f363f4
        public_6f3634e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f363f4
        public_6f36358 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x1C], bl
        jne public_6f363a6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x1C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x1C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f3637b
        mov dword ptr ds : [esi+4], ecx
        public_6f3637b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f3638e
        mov dword ptr ds : [esi+4], edx
        jmp public_6f3639c
        public_6f3638e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f36399
        mov dword ptr ds : [esi], edx
        jmp public_6f3639c
        public_6f36399 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f3639c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f363a6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x1C]
        mov byte ptr ds : [ecx+0x1C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x1C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x1C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f363cf
        mov dword ptr ds : [esi+4], ecx
        public_6f363cf : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f363e2
        mov dword ptr ds : [esi+4], edx
        jmp public_6f363f1
        public_6f363e2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f363ef
        mov dword ptr ds : [esi+8], edx
        jmp public_6f363f1
        public_6f363ef : nop
        mov dword ptr ds : [esi], edx
        public_6f363f1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f363f4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f363f7 : nop
        mov byte ptr ds : [eax+0x1C], bl
        public_6f363fa : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6f57e26
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
        UNREACHABLE_TRAP(0x6f36050)
    }
}

#undef public_6f36074
#undef public_6f36092
#undef public_6f3609d
#undef public_6f360a6
#undef public_6f360b1
#undef public_6f360cd
#undef public_6f360e4
#undef public_6f360f1
#undef public_6f360fc
#undef public_6f360ff
#undef public_6f36117
#undef public_6f36122
#undef public_6f36125
#undef public_6f3613a
#undef public_6f36145
#undef public_6f36150
#undef public_6f36153
#undef public_6f36167
#undef public_6f36173
#undef public_6f3617f
#undef public_6f36182
#undef public_6f361a0
#undef public_6f361df
#undef public_6f361f2
#undef public_6f361fd
#undef public_6f36200
#undef public_6f3620b
#undef public_6f3621e
#undef public_6f36245
#undef public_6f3625f
#undef public_6f36285
#undef public_6f36298
#undef public_6f362a5
#undef public_6f362a7
#undef public_6f362b2
#undef public_6f362c9
#undef public_6f362e1
#undef public_6f362ee
#undef public_6f362f0
#undef public_6f362fc
#undef public_6f36326
#undef public_6f3633e
#undef public_6f3634e
#undef public_6f36358
#undef public_6f3637b
#undef public_6f3638e
#undef public_6f36399
#undef public_6f3639c
#undef public_6f363a6
#undef public_6f363cf
#undef public_6f363e2
#undef public_6f363ef
#undef public_6f363f1
#undef public_6f363f4
#undef public_6f363f7
#undef public_6f363fa
