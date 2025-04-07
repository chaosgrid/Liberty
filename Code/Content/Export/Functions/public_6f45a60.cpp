#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f45a60);
CLANG_FORWARD_PROC_SYMBOL(public_6f46820);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f45a84 _public_6f45a84
#define public_6f45aa2 _public_6f45aa2
#define public_6f45aad _public_6f45aad
#define public_6f45ac0 _public_6f45ac0
#define public_6f45ace _public_6f45ace
#define public_6f45aea _public_6f45aea
#define public_6f45b01 _public_6f45b01
#define public_6f45b0e _public_6f45b0e
#define public_6f45b19 _public_6f45b19
#define public_6f45b1c _public_6f45b1c
#define public_6f45b40 _public_6f45b40
#define public_6f45b4b _public_6f45b4b
#define public_6f45b4e _public_6f45b4e
#define public_6f45b63 _public_6f45b63
#define public_6f45b71 _public_6f45b71
#define public_6f45b7f _public_6f45b7f
#define public_6f45b82 _public_6f45b82
#define public_6f45b96 _public_6f45b96
#define public_6f45ba5 _public_6f45ba5
#define public_6f45bb4 _public_6f45bb4
#define public_6f45bb7 _public_6f45bb7
#define public_6f45bd7 _public_6f45bd7
#define public_6f45c22 _public_6f45c22
#define public_6f45c35 _public_6f45c35
#define public_6f45c40 _public_6f45c40
#define public_6f45c43 _public_6f45c43
#define public_6f45c4e _public_6f45c4e
#define public_6f45c67 _public_6f45c67
#define public_6f45c97 _public_6f45c97
#define public_6f45cb1 _public_6f45cb1
#define public_6f45ce0 _public_6f45ce0
#define public_6f45cf3 _public_6f45cf3
#define public_6f45d00 _public_6f45d00
#define public_6f45d02 _public_6f45d02
#define public_6f45d0d _public_6f45d0d
#define public_6f45d2a _public_6f45d2a
#define public_6f45d45 _public_6f45d45
#define public_6f45d52 _public_6f45d52
#define public_6f45d54 _public_6f45d54
#define public_6f45d60 _public_6f45d60
#define public_6f45d96 _public_6f45d96
#define public_6f45dae _public_6f45dae
#define public_6f45dbe _public_6f45dbe
#define public_6f45dc8 _public_6f45dc8
#define public_6f45df4 _public_6f45df4
#define public_6f45e07 _public_6f45e07
#define public_6f45e12 _public_6f45e12
#define public_6f45e15 _public_6f45e15
#define public_6f45e1f _public_6f45e1f
#define public_6f45e54 _public_6f45e54
#define public_6f45e67 _public_6f45e67
#define public_6f45e74 _public_6f45e74
#define public_6f45e76 _public_6f45e76
#define public_6f45e79 _public_6f45e79
#define public_6f45e7c _public_6f45e7c
#define public_6f45e82 _public_6f45e82

PROC_DECLARE(0x6f45a60, internal_6f45a60, public_6f45a60);
extern "C" NAKED register_t __cdecl internal_6f45a60()
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
        call public_6f46820
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f45aa2
        mov eax, dword ptr ds : [esi+8]
        public_6f45a84 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f45b40
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f45b4e
        public_6f45aa2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f45aad
        mov eax, edx
        jmp public_6f45a84
        public_6f45aad : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x149]
        test bl, bl
        jne public_6f45ace
        lea esp, ss:[esp]
        public_6f45ac0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x149]
        test bl, bl
        je public_6f45ac0
        public_6f45ace : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f45a84
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f45aea
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f45b01
        public_6f45aea : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f45b01 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f45b0e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f45b1c
        public_6f45b0e : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f45b19
        mov dword ptr ds : [edx], ecx
        jmp public_6f45b1c
        public_6f45b19 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f45b1c : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x148]
        mov dl, byte ptr ds : [ecx+0x148]
        mov byte ptr ds : [ecx+0x148], bl
        mov byte ptr ds : [esi+0x148], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f45bb7
        public_6f45b40 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f45b4b
        mov dword ptr ds : [ecx], eax
        jmp public_6f45b4e
        public_6f45b4b : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f45b4e : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f45b82
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f45b63
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f45b7f
        public_6f45b63 : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x149]
        test bl, bl
        mov edx, eax
        jne public_6f45b7f
        public_6f45b71 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x149]
        test bl, bl
        je public_6f45b71
        public_6f45b7f : nop
        mov dword ptr ss : [ebp], edx
        public_6f45b82 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f45bb7
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f45b96
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f45bb4
        public_6f45b96 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x149]
        test bl, bl
        mov edx, eax
        jne public_6f45bb4
        public_6f45ba5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x149]
        test bl, bl
        je public_6f45ba5
        public_6f45bb4 : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f45bb7 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x148]
        mov bl, 1
        cmp dl, bl
        jne public_6f45e82
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f45e7c
        public_6f45bd7 : nop
        cmp byte ptr ds : [eax+0x148], bl
        jne public_6f45e7c
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f45cb1
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x148]
        test dl, dl
        jne public_6f45c4e
        mov byte ptr ds : [ecx+0x148], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x148], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f45c22
        mov dword ptr ds : [esi+4], ecx
        public_6f45c22 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45c35
        mov dword ptr ds : [esi+4], edx
        jmp public_6f45c43
        public_6f45c35 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f45c40
        mov dword ptr ds : [esi], edx
        jmp public_6f45c43
        public_6f45c40 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f45c43 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f45c4e : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x148], bl
        jne public_6f45c67
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x148], bl
        je public_6f45d2a
        public_6f45c67 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x148], bl
        jne public_6f45d60
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x148], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x148], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f45c97
        mov dword ptr ds : [esi+4], ecx
        public_6f45c97 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45d45
        mov dword ptr ds : [esi+4], edx
        jmp public_6f45d54
        public_6f45cb1 : nop
        mov dl, byte ptr ds : [ecx+0x148]
        test dl, dl
        jne public_6f45d0d
        mov byte ptr ds : [ecx+0x148], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x148], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f45ce0
        mov dword ptr ds : [esi+4], ecx
        public_6f45ce0 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45cf3
        mov dword ptr ds : [esi+4], edx
        jmp public_6f45d02
        public_6f45cf3 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f45d00
        mov dword ptr ds : [esi+8], edx
        jmp public_6f45d02
        public_6f45d00 : nop
        mov dword ptr ds : [esi], edx
        public_6f45d02 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f45d0d : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x148], bl
        jne public_6f45dc8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x148], bl
        jne public_6f45dc8
        public_6f45d2a : nop
        mov byte ptr ds : [ecx+0x148], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f45bd7
        jmp public_6f45e7c
        public_6f45d45 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f45d52
        mov dword ptr ds : [esi+8], edx
        jmp public_6f45d54
        public_6f45d52 : nop
        mov dword ptr ds : [esi], edx
        public_6f45d54 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f45d60 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x148]
        mov byte ptr ds : [ecx+0x148], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x148], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x148], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f45d96
        mov dword ptr ds : [esi+4], ecx
        public_6f45d96 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45dae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f45e79
        public_6f45dae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f45dbe
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f45e79
        public_6f45dbe : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f45e79
        public_6f45dc8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x148], bl
        jne public_6f45e1f
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x148], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x148], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f45df4
        mov dword ptr ds : [esi+4], ecx
        public_6f45df4 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45e07
        mov dword ptr ds : [esi+4], edx
        jmp public_6f45e15
        public_6f45e07 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f45e12
        mov dword ptr ds : [esi], edx
        jmp public_6f45e15
        public_6f45e12 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f45e15 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f45e1f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x148]
        mov byte ptr ds : [ecx+0x148], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x148], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x148], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f45e54
        mov dword ptr ds : [esi+4], ecx
        public_6f45e54 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f45e67
        mov dword ptr ds : [esi+4], edx
        jmp public_6f45e76
        public_6f45e67 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f45e74
        mov dword ptr ds : [esi+8], edx
        jmp public_6f45e76
        public_6f45e74 : nop
        mov dword ptr ds : [esi], edx
        public_6f45e76 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f45e79 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f45e7c : nop
        mov byte ptr ds : [eax+0x148], bl
        public_6f45e82 : nop
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
        UNREACHABLE_TRAP(0x6f45a60)
    }
}

#undef public_6f45a84
#undef public_6f45aa2
#undef public_6f45aad
#undef public_6f45ac0
#undef public_6f45ace
#undef public_6f45aea
#undef public_6f45b01
#undef public_6f45b0e
#undef public_6f45b19
#undef public_6f45b1c
#undef public_6f45b40
#undef public_6f45b4b
#undef public_6f45b4e
#undef public_6f45b63
#undef public_6f45b71
#undef public_6f45b7f
#undef public_6f45b82
#undef public_6f45b96
#undef public_6f45ba5
#undef public_6f45bb4
#undef public_6f45bb7
#undef public_6f45bd7
#undef public_6f45c22
#undef public_6f45c35
#undef public_6f45c40
#undef public_6f45c43
#undef public_6f45c4e
#undef public_6f45c67
#undef public_6f45c97
#undef public_6f45cb1
#undef public_6f45ce0
#undef public_6f45cf3
#undef public_6f45d00
#undef public_6f45d02
#undef public_6f45d0d
#undef public_6f45d2a
#undef public_6f45d45
#undef public_6f45d52
#undef public_6f45d54
#undef public_6f45d60
#undef public_6f45d96
#undef public_6f45dae
#undef public_6f45dbe
#undef public_6f45dc8
#undef public_6f45df4
#undef public_6f45e07
#undef public_6f45e12
#undef public_6f45e15
#undef public_6f45e1f
#undef public_6f45e54
#undef public_6f45e67
#undef public_6f45e74
#undef public_6f45e76
#undef public_6f45e79
#undef public_6f45e7c
#undef public_6f45e82
