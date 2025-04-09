#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42c370);
CLANG_FORWARD_PROC_SYMBOL(public_438930);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42c394 _public_42c394
#define public_42c3b2 _public_42c3b2
#define public_42c3bd _public_42c3bd
#define public_42c3c6 _public_42c3c6
#define public_42c3d1 _public_42c3d1
#define public_42c3ed _public_42c3ed
#define public_42c404 _public_42c404
#define public_42c411 _public_42c411
#define public_42c41c _public_42c41c
#define public_42c41f _public_42c41f
#define public_42c437 _public_42c437
#define public_42c442 _public_42c442
#define public_42c445 _public_42c445
#define public_42c45a _public_42c45a
#define public_42c465 _public_42c465
#define public_42c470 _public_42c470
#define public_42c473 _public_42c473
#define public_42c487 _public_42c487
#define public_42c493 _public_42c493
#define public_42c49f _public_42c49f
#define public_42c4a2 _public_42c4a2
#define public_42c4c0 _public_42c4c0
#define public_42c4ff _public_42c4ff
#define public_42c512 _public_42c512
#define public_42c51d _public_42c51d
#define public_42c520 _public_42c520
#define public_42c52b _public_42c52b
#define public_42c53e _public_42c53e
#define public_42c565 _public_42c565
#define public_42c57f _public_42c57f
#define public_42c5a5 _public_42c5a5
#define public_42c5b8 _public_42c5b8
#define public_42c5c5 _public_42c5c5
#define public_42c5c7 _public_42c5c7
#define public_42c5d2 _public_42c5d2
#define public_42c5e9 _public_42c5e9
#define public_42c601 _public_42c601
#define public_42c60e _public_42c60e
#define public_42c610 _public_42c610
#define public_42c61c _public_42c61c
#define public_42c646 _public_42c646
#define public_42c65e _public_42c65e
#define public_42c66e _public_42c66e
#define public_42c678 _public_42c678
#define public_42c69b _public_42c69b
#define public_42c6ae _public_42c6ae
#define public_42c6b9 _public_42c6b9
#define public_42c6bc _public_42c6bc
#define public_42c6c6 _public_42c6c6
#define public_42c6ef _public_42c6ef
#define public_42c702 _public_42c702
#define public_42c70f _public_42c70f
#define public_42c711 _public_42c711
#define public_42c714 _public_42c714
#define public_42c717 _public_42c717
#define public_42c71e _public_42c71e

PROC_DECLARE(0x42c370, internal_42c370, public_42c370);
extern "C" NAKED register_t __cdecl internal_42c370()
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
        call public_438930
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_42c3b2
        mov eax, dword ptr ds : [esi+8]
        public_42c394 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_42c437
        mov dword ptr ds : [ecx+4], eax
        jmp public_42c445
        public_42c3b2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_42c3bd
        mov eax, edx
        jmp public_42c394
        public_42c3bd : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        jne public_42c3d1
        public_42c3c6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x39]
        test bl, bl
        je public_42c3c6
        public_42c3d1 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_42c394
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42c3ed
        mov dword ptr ds : [eax+4], ecx
        jmp public_42c404
        public_42c3ed : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_42c404 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_42c411
        mov dword ptr ds : [edx+4], ecx
        jmp public_42c41f
        public_42c411 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_42c41c
        mov dword ptr ds : [edx], ecx
        jmp public_42c41f
        public_42c41c : nop
        mov dword ptr ds : [edx+8], ecx
        public_42c41f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x38]
        mov dl, byte ptr ds : [ecx+0x38]
        mov byte ptr ds : [ecx+0x38], bl
        mov byte ptr ds : [esi+0x38], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_42c4a2
        public_42c437 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_42c442
        mov dword ptr ds : [ecx], eax
        jmp public_42c445
        public_42c442 : nop
        mov dword ptr ds : [ecx+8], eax
        public_42c445 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_42c473
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_42c45a
        mov edx, dword ptr ds : [esi+4]
        jmp public_42c470
        public_42c45a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        mov edx, eax
        jne public_42c470
        public_42c465 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        je public_42c465
        public_42c470 : nop
        mov dword ptr ss : [ebp], edx
        public_42c473 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_42c4a2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_42c487
        mov edx, dword ptr ds : [esi+4]
        jmp public_42c49f
        public_42c487 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        mov edx, eax
        jne public_42c49f
        public_42c493 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x39]
        test bl, bl
        je public_42c493
        public_42c49f : nop
        mov dword ptr ss : [ebp+8], edx
        public_42c4a2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x38]
        mov bl, 1
        cmp dl, bl
        jne public_42c71e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_42c717
        nop 
        public_42c4c0 : nop
        cmp byte ptr ds : [eax+0x38], bl
        jne public_42c717
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_42c57f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_42c52b
        mov byte ptr ds : [ecx+0x38], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x38], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42c4ff
        mov dword ptr ds : [esi+4], ecx
        public_42c4ff : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42c512
        mov dword ptr ds : [esi+4], edx
        jmp public_42c520
        public_42c512 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_42c51d
        mov dword ptr ds : [esi], edx
        jmp public_42c520
        public_42c51d : nop
        mov dword ptr ds : [esi+8], edx
        public_42c520 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_42c52b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_42c53e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x38], bl
        je public_42c5e9
        public_42c53e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_42c61c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x38], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x38], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_42c565
        mov dword ptr ds : [esi+4], ecx
        public_42c565 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42c601
        mov dword ptr ds : [esi+4], edx
        jmp public_42c610
        public_42c57f : nop
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_42c5d2
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_42c5a5
        mov dword ptr ds : [esi+4], ecx
        public_42c5a5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42c5b8
        mov dword ptr ds : [esi+4], edx
        jmp public_42c5c7
        public_42c5b8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42c5c5
        mov dword ptr ds : [esi+8], edx
        jmp public_42c5c7
        public_42c5c5 : nop
        mov dword ptr ds : [esi], edx
        public_42c5c7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_42c5d2 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_42c678
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_42c678
        public_42c5e9 : nop
        mov byte ptr ds : [ecx+0x38], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_42c4c0
        jmp public_42c717
        public_42c601 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42c60e
        mov dword ptr ds : [esi+8], edx
        jmp public_42c610
        public_42c60e : nop
        mov dword ptr ds : [esi], edx
        public_42c610 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_42c61c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x38]
        mov byte ptr ds : [ecx+0x38], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x38], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42c646
        mov dword ptr ds : [esi+4], ecx
        public_42c646 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42c65e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_42c714
        public_42c65e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_42c66e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_42c714
        public_42c66e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_42c714
        public_42c678 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x38], bl
        jne public_42c6c6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x38], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x38], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_42c69b
        mov dword ptr ds : [esi+4], ecx
        public_42c69b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42c6ae
        mov dword ptr ds : [esi+4], edx
        jmp public_42c6bc
        public_42c6ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_42c6b9
        mov dword ptr ds : [esi], edx
        jmp public_42c6bc
        public_42c6b9 : nop
        mov dword ptr ds : [esi+8], edx
        public_42c6bc : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_42c6c6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x38]
        mov byte ptr ds : [ecx+0x38], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x38], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x38], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_42c6ef
        mov dword ptr ds : [esi+4], ecx
        public_42c6ef : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_42c702
        mov dword ptr ds : [esi+4], edx
        jmp public_42c711
        public_42c702 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_42c70f
        mov dword ptr ds : [esi+8], edx
        jmp public_42c711
        public_42c70f : nop
        mov dword ptr ds : [esi], edx
        public_42c711 : nop
        mov dword ptr ds : [edx+8], ecx
        public_42c714 : nop
        mov dword ptr ds : [ecx+4], edx
        public_42c717 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x38], bl
        public_42c71e : nop
        push ecx
        mov dword ptr ds : [ecx+0xC], offset public_5ca36c
        call public_5b7e1d
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
        UNREACHABLE_TRAP(0x42c370)
    }
}

#undef public_42c394
#undef public_42c3b2
#undef public_42c3bd
#undef public_42c3c6
#undef public_42c3d1
#undef public_42c3ed
#undef public_42c404
#undef public_42c411
#undef public_42c41c
#undef public_42c41f
#undef public_42c437
#undef public_42c442
#undef public_42c445
#undef public_42c45a
#undef public_42c465
#undef public_42c470
#undef public_42c473
#undef public_42c487
#undef public_42c493
#undef public_42c49f
#undef public_42c4a2
#undef public_42c4c0
#undef public_42c4ff
#undef public_42c512
#undef public_42c51d
#undef public_42c520
#undef public_42c52b
#undef public_42c53e
#undef public_42c565
#undef public_42c57f
#undef public_42c5a5
#undef public_42c5b8
#undef public_42c5c5
#undef public_42c5c7
#undef public_42c5d2
#undef public_42c5e9
#undef public_42c601
#undef public_42c60e
#undef public_42c610
#undef public_42c61c
#undef public_42c646
#undef public_42c65e
#undef public_42c66e
#undef public_42c678
#undef public_42c69b
#undef public_42c6ae
#undef public_42c6b9
#undef public_42c6bc
#undef public_42c6c6
#undef public_42c6ef
#undef public_42c702
#undef public_42c70f
#undef public_42c711
#undef public_42c714
#undef public_42c717
#undef public_42c71e
