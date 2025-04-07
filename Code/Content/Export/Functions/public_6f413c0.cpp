#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f413c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f465a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f413e4 _public_6f413e4
#define public_6f41402 _public_6f41402
#define public_6f4140d _public_6f4140d
#define public_6f41416 _public_6f41416
#define public_6f41421 _public_6f41421
#define public_6f4143d _public_6f4143d
#define public_6f41454 _public_6f41454
#define public_6f41461 _public_6f41461
#define public_6f4146c _public_6f4146c
#define public_6f4146f _public_6f4146f
#define public_6f41487 _public_6f41487
#define public_6f41492 _public_6f41492
#define public_6f41495 _public_6f41495
#define public_6f414aa _public_6f414aa
#define public_6f414b5 _public_6f414b5
#define public_6f414c0 _public_6f414c0
#define public_6f414c3 _public_6f414c3
#define public_6f414d7 _public_6f414d7
#define public_6f414e3 _public_6f414e3
#define public_6f414ef _public_6f414ef
#define public_6f414f2 _public_6f414f2
#define public_6f41510 _public_6f41510
#define public_6f4154f _public_6f4154f
#define public_6f41562 _public_6f41562
#define public_6f4156d _public_6f4156d
#define public_6f41570 _public_6f41570
#define public_6f4157b _public_6f4157b
#define public_6f4158e _public_6f4158e
#define public_6f415b5 _public_6f415b5
#define public_6f415cf _public_6f415cf
#define public_6f415f5 _public_6f415f5
#define public_6f41608 _public_6f41608
#define public_6f41615 _public_6f41615
#define public_6f41617 _public_6f41617
#define public_6f41622 _public_6f41622
#define public_6f41639 _public_6f41639
#define public_6f41651 _public_6f41651
#define public_6f4165e _public_6f4165e
#define public_6f41660 _public_6f41660
#define public_6f4166c _public_6f4166c
#define public_6f41696 _public_6f41696
#define public_6f416ae _public_6f416ae
#define public_6f416be _public_6f416be
#define public_6f416c8 _public_6f416c8
#define public_6f416eb _public_6f416eb
#define public_6f416fe _public_6f416fe
#define public_6f41709 _public_6f41709
#define public_6f4170c _public_6f4170c
#define public_6f41716 _public_6f41716
#define public_6f4173f _public_6f4173f
#define public_6f41752 _public_6f41752
#define public_6f4175f _public_6f4175f
#define public_6f41761 _public_6f41761
#define public_6f41764 _public_6f41764
#define public_6f41767 _public_6f41767
#define public_6f4176a _public_6f4176a

PROC_DECLARE(0x6f413c0, internal_6f413c0, public_6f413c0);
extern "C" NAKED register_t __cdecl internal_6f413c0()
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
        call public_6f465a0
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_6f41402
        mov eax, dword ptr ds : [esi+8]
        public_6f413e4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_6f41487
        mov dword ptr ds : [ecx+4], eax
        jmp public_6f41495
        public_6f41402 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_6f4140d
        mov eax, edx
        jmp public_6f413e4
        public_6f4140d : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        jne public_6f41421
        public_6f41416 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x71]
        test bl, bl
        je public_6f41416
        public_6f41421 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f413e4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4143d
        mov dword ptr ds : [eax+4], ecx
        jmp public_6f41454
        public_6f4143d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_6f41454 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_6f41461
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4146f
        public_6f41461 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_6f4146c
        mov dword ptr ds : [edx], ecx
        jmp public_6f4146f
        public_6f4146c : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4146f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x70]
        mov dl, byte ptr ds : [ecx+0x70]
        mov byte ptr ds : [ecx+0x70], bl
        mov byte ptr ds : [esi+0x70], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_6f414f2
        public_6f41487 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_6f41492
        mov dword ptr ds : [ecx], eax
        jmp public_6f41495
        public_6f41492 : nop
        mov dword ptr ds : [ecx+8], eax
        public_6f41495 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_6f414c3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f414aa
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f414c0
        public_6f414aa : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x71]
        test bl, bl
        mov edx, eax
        jne public_6f414c0
        public_6f414b5 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x71]
        test bl, bl
        je public_6f414b5
        public_6f414c0 : nop
        mov dword ptr ss : [ebp], edx
        public_6f414c3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_6f414f2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f414d7
        mov edx, dword ptr ds : [esi+4]
        jmp public_6f414ef
        public_6f414d7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x71]
        test bl, bl
        mov edx, eax
        jne public_6f414ef
        public_6f414e3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x71]
        test bl, bl
        je public_6f414e3
        public_6f414ef : nop
        mov dword ptr ss : [ebp+8], edx
        public_6f414f2 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dl, byte ptr ds : [ecx+0x70]
        mov bl, 1
        cmp dl, bl
        jne public_6f4176a
        mov edx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [edx+4]
        je public_6f41767
        nop 
        public_6f41510 : nop
        cmp byte ptr ds : [eax+0x70], bl
        jne public_6f41767
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6f415cf
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_6f4157b
        mov byte ptr ds : [ecx+0x70], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4154f
        mov dword ptr ds : [esi+4], ecx
        public_6f4154f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41562
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41570
        public_6f41562 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f4156d
        mov dword ptr ds : [esi], edx
        jmp public_6f41570
        public_6f4156d : nop
        mov dword ptr ds : [esi+8], edx
        public_6f41570 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+8]
        public_6f4157b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_6f4158e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x70], bl
        je public_6f41639
        public_6f4158e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_6f4166c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x70], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x70], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f415b5
        mov dword ptr ds : [esi+4], ecx
        public_6f415b5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41651
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41660
        public_6f415cf : nop
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_6f41622
        mov byte ptr ds : [ecx+0x70], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f415f5
        mov dword ptr ds : [esi+4], ecx
        public_6f415f5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41608
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41617
        public_6f41608 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f41615
        mov dword ptr ds : [esi+8], edx
        jmp public_6f41617
        public_6f41615 : nop
        mov dword ptr ds : [esi], edx
        public_6f41617 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_6f41622 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_6f416c8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_6f416c8
        public_6f41639 : nop
        mov byte ptr ds : [ecx+0x70], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f41510
        jmp public_6f41767
        public_6f41651 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4165e
        mov dword ptr ds : [esi+8], edx
        jmp public_6f41660
        public_6f4165e : nop
        mov dword ptr ds : [esi], edx
        public_6f41660 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_6f4166c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x70]
        mov byte ptr ds : [ecx+0x70], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x70], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x70], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f41696
        mov dword ptr ds : [esi+4], ecx
        public_6f41696 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f416ae
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f41764
        public_6f416ae : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f416be
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f41764
        public_6f416be : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_6f41764
        public_6f416c8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x70], bl
        jne public_6f41716
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x70], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x70], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f416eb
        mov dword ptr ds : [esi+4], ecx
        public_6f416eb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f416fe
        mov dword ptr ds : [esi+4], edx
        jmp public_6f4170c
        public_6f416fe : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_6f41709
        mov dword ptr ds : [esi], edx
        jmp public_6f4170c
        public_6f41709 : nop
        mov dword ptr ds : [esi+8], edx
        public_6f4170c : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_6f41716 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x70]
        mov byte ptr ds : [ecx+0x70], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x70], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x70], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_6f4173f
        mov dword ptr ds : [esi+4], ecx
        public_6f4173f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_6f41752
        mov dword ptr ds : [esi+4], edx
        jmp public_6f41761
        public_6f41752 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_6f4175f
        mov dword ptr ds : [esi+8], edx
        jmp public_6f41761
        public_6f4175f : nop
        mov dword ptr ds : [esi], edx
        public_6f41761 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f41764 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f41767 : nop
        mov byte ptr ds : [eax+0x70], bl
        public_6f4176a : nop
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
        UNREACHABLE_TRAP(0x6f413c0)
    }
}

#undef public_6f413e4
#undef public_6f41402
#undef public_6f4140d
#undef public_6f41416
#undef public_6f41421
#undef public_6f4143d
#undef public_6f41454
#undef public_6f41461
#undef public_6f4146c
#undef public_6f4146f
#undef public_6f41487
#undef public_6f41492
#undef public_6f41495
#undef public_6f414aa
#undef public_6f414b5
#undef public_6f414c0
#undef public_6f414c3
#undef public_6f414d7
#undef public_6f414e3
#undef public_6f414ef
#undef public_6f414f2
#undef public_6f41510
#undef public_6f4154f
#undef public_6f41562
#undef public_6f4156d
#undef public_6f41570
#undef public_6f4157b
#undef public_6f4158e
#undef public_6f415b5
#undef public_6f415cf
#undef public_6f415f5
#undef public_6f41608
#undef public_6f41615
#undef public_6f41617
#undef public_6f41622
#undef public_6f41639
#undef public_6f41651
#undef public_6f4165e
#undef public_6f41660
#undef public_6f4166c
#undef public_6f41696
#undef public_6f416ae
#undef public_6f416be
#undef public_6f416c8
#undef public_6f416eb
#undef public_6f416fe
#undef public_6f41709
#undef public_6f4170c
#undef public_6f41716
#undef public_6f4173f
#undef public_6f41752
#undef public_6f4175f
#undef public_6f41761
#undef public_6f41764
#undef public_6f41767
#undef public_6f4176a
