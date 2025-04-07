#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7c300);
CLANG_FORWARD_PROC_SYMBOL(public_6f7db30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7c369 _public_6f7c369
#define public_6f7c37d _public_6f7c37d
#define public_6f7c383 _public_6f7c383
#define public_6f7c391 _public_6f7c391
#define public_6f7c3d2 _public_6f7c3d2
#define public_6f7c3eb _public_6f7c3eb
#define public_6f7c3fe _public_6f7c3fe
#define public_6f7c409 _public_6f7c409
#define public_6f7c40c _public_6f7c40c
#define public_6f7c411 _public_6f7c411
#define public_6f7c43a _public_6f7c43a
#define public_6f7c453 _public_6f7c453
#define public_6f7c466 _public_6f7c466
#define public_6f7c470 _public_6f7c470
#define public_6f7c493 _public_6f7c493
#define public_6f7c4ab _public_6f7c4ab
#define public_6f7c4be _public_6f7c4be
#define public_6f7c4cb _public_6f7c4cb
#define public_6f7c4cd _public_6f7c4cd
#define public_6f7c4d3 _public_6f7c4d3
#define public_6f7c4fc _public_6f7c4fc
#define public_6f7c50f _public_6f7c50f
#define public_6f7c51a _public_6f7c51a
#define public_6f7c51d _public_6f7c51d
#define public_6f7c51f _public_6f7c51f
#define public_6f7c522 _public_6f7c522
#define public_6f7c52e _public_6f7c52e

PROC_DECLARE(0x6f7c300, internal_6f7c300, public_6f7c300);
extern "C" NAKED register_t __cdecl internal_6f7c300()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x60
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x5C], 0
        mov byte ptr ds : [ebx+0x5D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f7db30
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f7c369
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f7c369
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f7c369
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f7c383
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f7c383
        public_6f7c369 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f7c37d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f7c383
        public_6f7c37d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f7c383
        mov dword ptr ds : [eax], ebx
        public_6f7c383 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f7c52e
        public_6f7c391 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x5C]
        test dl, dl
        jne public_6f7c52e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f7c470
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x5C], 0
        jne public_6f7c3d2
        mov byte ptr ds : [ecx+0x5C], 1
        mov byte ptr ds : [edx+0x5C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f7c522
        public_6f7c3d2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f7c411
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f7c3eb
        mov dword ptr ds : [edx+4], eax
        public_6f7c3eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f7c3fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f7c40c
        public_6f7c3fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f7c409
        mov dword ptr ds : [edx], ecx
        jmp public_6f7c40c
        public_6f7c409 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f7c40c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f7c411 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f7c43a
        mov dword ptr ds : [edi+4], ecx
        public_6f7c43a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f7c453
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7c51f
        public_6f7c453 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f7c466
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7c51f
        public_6f7c466 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7c51f
        public_6f7c470 : nop
        cmp byte ptr ds : [edx+0x5C], 0
        jne public_6f7c493
        mov byte ptr ds : [ecx+0x5C], 1
        mov byte ptr ds : [edx+0x5C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x5C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f7c522
        public_6f7c493 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f7c4d3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f7c4ab
        mov dword ptr ds : [edx+4], eax
        public_6f7c4ab : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f7c4be
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f7c4cd
        public_6f7c4be : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f7c4cb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f7c4cd
        public_6f7c4cb : nop
        mov dword ptr ds : [edx], ecx
        public_6f7c4cd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f7c4d3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x5C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f7c4fc
        mov dword ptr ds : [edi+4], ecx
        public_6f7c4fc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f7c50f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f7c51d
        public_6f7c50f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f7c51a
        mov dword ptr ds : [edi], edx
        jmp public_6f7c51d
        public_6f7c51a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f7c51d : nop
        mov dword ptr ds : [edx], ecx
        public_6f7c51f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f7c522 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f7c391
        public_6f7c52e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x5C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f7c300)
    }
}

#undef public_6f7c369
#undef public_6f7c37d
#undef public_6f7c383
#undef public_6f7c391
#undef public_6f7c3d2
#undef public_6f7c3eb
#undef public_6f7c3fe
#undef public_6f7c409
#undef public_6f7c40c
#undef public_6f7c411
#undef public_6f7c43a
#undef public_6f7c453
#undef public_6f7c466
#undef public_6f7c470
#undef public_6f7c493
#undef public_6f7c4ab
#undef public_6f7c4be
#undef public_6f7c4cb
#undef public_6f7c4cd
#undef public_6f7c4d3
#undef public_6f7c4fc
#undef public_6f7c50f
#undef public_6f7c51a
#undef public_6f7c51d
#undef public_6f7c51f
#undef public_6f7c522
#undef public_6f7c52e
