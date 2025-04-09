#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_436420);
CLANG_FORWARD_PROC_SYMBOL(public_436a90);
CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_436444 _public_436444
#define public_436462 _public_436462
#define public_43646d _public_43646d
#define public_436476 _public_436476
#define public_436481 _public_436481
#define public_43649d _public_43649d
#define public_4364b4 _public_4364b4
#define public_4364c1 _public_4364c1
#define public_4364cc _public_4364cc
#define public_4364cf _public_4364cf
#define public_4364e7 _public_4364e7
#define public_4364f2 _public_4364f2
#define public_4364f5 _public_4364f5
#define public_43650a _public_43650a
#define public_436515 _public_436515
#define public_436520 _public_436520
#define public_436523 _public_436523
#define public_436537 _public_436537
#define public_436543 _public_436543
#define public_43654f _public_43654f
#define public_436552 _public_436552
#define public_436570 _public_436570
#define public_4365af _public_4365af
#define public_4365c2 _public_4365c2
#define public_4365cd _public_4365cd
#define public_4365d0 _public_4365d0
#define public_4365db _public_4365db
#define public_4365ee _public_4365ee
#define public_436615 _public_436615
#define public_43662f _public_43662f
#define public_436655 _public_436655
#define public_436668 _public_436668
#define public_436675 _public_436675
#define public_436677 _public_436677
#define public_436682 _public_436682
#define public_436699 _public_436699
#define public_4366b1 _public_4366b1
#define public_4366be _public_4366be
#define public_4366c0 _public_4366c0
#define public_4366cc _public_4366cc
#define public_4366f6 _public_4366f6
#define public_43670e _public_43670e
#define public_43671e _public_43671e
#define public_436728 _public_436728
#define public_43674b _public_43674b
#define public_43675e _public_43675e
#define public_436769 _public_436769
#define public_43676c _public_43676c
#define public_436776 _public_436776
#define public_43679f _public_43679f
#define public_4367b2 _public_4367b2
#define public_4367bf _public_4367bf
#define public_4367c1 _public_4367c1
#define public_4367c4 _public_4367c4
#define public_4367c7 _public_4367c7
#define public_4367ce _public_4367ce

PROC_DECLARE(0x436420, internal_436420, public_436420);
extern "C" NAKED register_t __cdecl internal_436420()
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
        call public_436a90
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_436462
        mov eax, dword ptr ds : [esi+8]
        public_436444 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_4364e7
        mov dword ptr ds : [ecx+4], eax
        jmp public_4364f5
        public_436462 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_43646d
        mov eax, edx
        jmp public_436444
        public_43646d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        jne public_436481
        public_436476 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x2D]
        test bl, bl
        je public_436476
        public_436481 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_436444
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_43649d
        mov dword ptr ds : [eax+4], ecx
        jmp public_4364b4
        public_43649d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_4364b4 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_4364c1
        mov dword ptr ds : [edx+4], ecx
        jmp public_4364cf
        public_4364c1 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_4364cc
        mov dword ptr ds : [edx], ecx
        jmp public_4364cf
        public_4364cc : nop
        mov dword ptr ds : [edx+8], ecx
        public_4364cf : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x2C]
        mov dl, byte ptr ds : [ecx+0x2C]
        mov byte ptr ds : [ecx+0x2C], bl
        mov byte ptr ds : [esi+0x2C], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_436552
        public_4364e7 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_4364f2
        mov dword ptr ds : [ecx], eax
        jmp public_4364f5
        public_4364f2 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4364f5 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_436523
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_43650a
        mov edx, dword ptr ds : [esi+4]
        jmp public_436520
        public_43650a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_436520
        public_436515 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_436515
        public_436520 : nop
        mov dword ptr ss : [ebp], edx
        public_436523 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_436552
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_436537
        mov edx, dword ptr ds : [esi+4]
        jmp public_43654f
        public_436537 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        mov edx, eax
        jne public_43654f
        public_436543 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x2D]
        test bl, bl
        je public_436543
        public_43654f : nop
        mov dword ptr ss : [ebp+8], edx
        public_436552 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x2C]
        mov bl, 1
        cmp cl, bl
        jne public_4367ce
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_4367c7
        nop 
        public_436570 : nop
        cmp byte ptr ds : [eax+0x2C], bl
        jne public_4367c7
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_43662f
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_4365db
        mov byte ptr ds : [ecx+0x2C], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4365af
        mov dword ptr ds : [esi+4], ecx
        public_4365af : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4365c2
        mov dword ptr ds : [esi+4], edx
        jmp public_4365d0
        public_4365c2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4365cd
        mov dword ptr ds : [esi], edx
        jmp public_4365d0
        public_4365cd : nop
        mov dword ptr ds : [esi+8], edx
        public_4365d0 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4365db : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_4365ee
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        je public_436699
        public_4365ee : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_4366cc
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_436615
        mov dword ptr ds : [esi+4], ecx
        public_436615 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4366b1
        mov dword ptr ds : [esi+4], edx
        jmp public_4366c0
        public_43662f : nop
        mov dl, byte ptr ds : [ecx+0x2C]
        test dl, dl
        jne public_436682
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_436655
        mov dword ptr ds : [esi+4], ecx
        public_436655 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_436668
        mov dword ptr ds : [esi+4], edx
        jmp public_436677
        public_436668 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_436675
        mov dword ptr ds : [esi+8], edx
        jmp public_436677
        public_436675 : nop
        mov dword ptr ds : [esi], edx
        public_436677 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_436682 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_436728
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_436728
        public_436699 : nop
        mov byte ptr ds : [ecx+0x2C], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_436570
        jmp public_4367c7
        public_4366b1 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4366be
        mov dword ptr ds : [esi+8], edx
        jmp public_4366c0
        public_4366be : nop
        mov dword ptr ds : [esi], edx
        public_4366c0 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4366cc : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4366f6
        mov dword ptr ds : [esi+4], ecx
        public_4366f6 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_43670e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4367c4
        public_43670e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_43671e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4367c4
        public_43671e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4367c4
        public_436728 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x2C], bl
        jne public_436776
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x2C], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x2C], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_43674b
        mov dword ptr ds : [esi+4], ecx
        public_43674b : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_43675e
        mov dword ptr ds : [esi+4], edx
        jmp public_43676c
        public_43675e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_436769
        mov dword ptr ds : [esi], edx
        jmp public_43676c
        public_436769 : nop
        mov dword ptr ds : [esi+8], edx
        public_43676c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_436776 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x2C]
        mov byte ptr ds : [ecx+0x2C], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x2C], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x2C], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_43679f
        mov dword ptr ds : [esi+4], ecx
        public_43679f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4367b2
        mov dword ptr ds : [esi+4], edx
        jmp public_4367c1
        public_4367b2 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4367bf
        mov dword ptr ds : [esi+8], edx
        jmp public_4367c1
        public_4367bf : nop
        mov dword ptr ds : [esi], edx
        public_4367c1 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4367c4 : nop
        mov dword ptr ds : [ecx+4], edx
        public_4367c7 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x2C], bl
        public_4367ce : nop
        lea ecx, ds:[esi+0xC]
        call public_455e90
        push esi
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
        UNREACHABLE_TRAP(0x436420)
    }
}

#undef public_436444
#undef public_436462
#undef public_43646d
#undef public_436476
#undef public_436481
#undef public_43649d
#undef public_4364b4
#undef public_4364c1
#undef public_4364cc
#undef public_4364cf
#undef public_4364e7
#undef public_4364f2
#undef public_4364f5
#undef public_43650a
#undef public_436515
#undef public_436520
#undef public_436523
#undef public_436537
#undef public_436543
#undef public_43654f
#undef public_436552
#undef public_436570
#undef public_4365af
#undef public_4365c2
#undef public_4365cd
#undef public_4365d0
#undef public_4365db
#undef public_4365ee
#undef public_436615
#undef public_43662f
#undef public_436655
#undef public_436668
#undef public_436675
#undef public_436677
#undef public_436682
#undef public_436699
#undef public_4366b1
#undef public_4366be
#undef public_4366c0
#undef public_4366cc
#undef public_4366f6
#undef public_43670e
#undef public_43671e
#undef public_436728
#undef public_43674b
#undef public_43675e
#undef public_436769
#undef public_43676c
#undef public_436776
#undef public_43679f
#undef public_4367b2
#undef public_4367bf
#undef public_4367c1
#undef public_4367c4
#undef public_4367c7
#undef public_4367ce
