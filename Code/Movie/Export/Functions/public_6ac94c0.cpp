#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac4160);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4250);
CLANG_FORWARD_PROC_SYMBOL(public_6ac42e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac94c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9a30);
CLANG_FORWARD_PROC_SYMBOL(public_6acb290);

#define public_6ac94cf _public_6ac94cf
#define public_6ac94dd _public_6ac94dd
#define public_6ac94ed _public_6ac94ed
#define public_6ac9508 _public_6ac9508
#define public_6ac9594 _public_6ac9594
#define public_6ac959f _public_6ac959f
#define public_6ac95ac _public_6ac95ac
#define public_6ac95b1 _public_6ac95b1
#define public_6ac95c9 _public_6ac95c9
#define public_6ac95d1 _public_6ac95d1
#define public_6ac96a8 _public_6ac96a8
#define public_6ac96ab _public_6ac96ab
#define public_6ac9706 _public_6ac9706
#define public_6ac970c _public_6ac970c
#define public_6ac9730 _public_6ac9730
#define public_6ac9746 _public_6ac9746
#define public_6ac97b2 _public_6ac97b2
#define public_6ac97d4 _public_6ac97d4
#define public_6ac9837 _public_6ac9837
#define public_6ac9840 _public_6ac9840
#define public_6ac9879 _public_6ac9879
#define public_6ac987c _public_6ac987c
#define public_6ac988c _public_6ac988c
#define public_6ac9891 _public_6ac9891
#define public_6ac9897 _public_6ac9897
#define public_6ac989a _public_6ac989a
#define public_6ac98cc _public_6ac98cc
#define public_6ac98d1 _public_6ac98d1
#define public_6ac98d4 _public_6ac98d4
#define public_6ac98fb _public_6ac98fb
#define public_6ac991b _public_6ac991b
#define public_6ac992b _public_6ac992b
#define public_6ac9962 _public_6ac9962
#define public_6ac9971 _public_6ac9971
#define public_6ac9983 _public_6ac9983
#define public_6ac99a0 _public_6ac99a0
#define public_6ac99b3 _public_6ac99b3
#define public_6ac99dc _public_6ac99dc
#define public_6ac99ee _public_6ac99ee

PROC_DECLARE(0x6ac94c0, internal_6ac94c0, public_6ac94c0);
extern "C" NAKED register_t __cdecl internal_6ac94c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x4C
        push ebx
        push esi
        push edi
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0xC]
        public_6ac94cf : nop
        test eax, eax
        je public_6ac94dd
        mov ecx, dword ptr ds : [edx+eax*4-4]
        dec eax
        test ecx, ecx
        je public_6ac94cf
        inc eax
        public_6ac94dd : nop
        mov edx, eax
        cmp edx, 1
        ja public_6ac9508
        test edx, edx
        je public_6ac94ed
        mov eax, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [eax]
        public_6ac94ed : nop
        mov ecx, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x14]
        push ecx
        push edx
        push eax
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_6ac9a30
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
        public_6ac9508 : nop
        mov ebx, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ds : [ebx+0x108]
        mov eax, dword ptr ds : [edi+edx*4-4]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov dword ptr ss : [ebp+0x10], eax
        mov eax, dword ptr ss : [ebp+0x10]
        bsr eax, eax
        add eax, 1
        mov esi, dword ptr ds : [edi+edx*4-8]
        lea ecx, ds:[edx+0x7FFFFFF]
        shl ecx, 5
        add ecx, eax
        mov edx, dword ptr ds : [edi+edx*4-4]
        mov dword ptr ss : [ebp-0x44], ecx
        lea ecx, ds:[eax-1]
        shr esi, 1
        shr esi, cl
        mov ecx, 0x20
        push 0x1721C
        sub ecx, eax
        mov dword ptr ss : [ebp-0x2C], 0xFFFFFFFF
        shl edx, cl
        or esi, edx
        mov dword ptr ss : [ebp-0x40], esi
        xor esi, esi
        mov dword ptr ss : [ebp-0x38], esi
        mov dword ptr ss : [ebp-0x34], esi
        call public_6ac4f80
        mov edx, eax
        cmp edx, esi
        mov dword ptr ss : [ebp+0x10], edx
        jne public_6ac959f
        mov edi, dword ptr ss : [ebp+0x14]
        cmp edi, esi
        je public_6ac9594
        mov ecx, dword ptr ds : [ebx+0x100]
        xor eax, eax
        shl ecx, 2
        mov edx, ecx
        shr ecx, 2
        rep stosd
        mov ecx, edx
        and ecx, 3
        rep stosb
        public_6ac9594 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
        public_6ac959f : nop
        mov edi, dword ptr ss : [ebp+0x14]
        mov eax, 3
        mov dword ptr ss : [ebp-0x30], eax
        jmp public_6ac95b1
        public_6ac95ac : nop
        mov eax, dword ptr ss : [ebp-0x30]
        xor esi, esi
        public_6ac95b1 : nop
        cmp eax, 8
        jne public_6ac95c9
        cmp edi, esi
        je public_6ac95c9
        mov ebx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-8], 1
        mov dword ptr ss : [ebp-0x28], ebx
        jmp public_6ac95d1
        public_6ac95c9 : nop
        mov dword ptr ss : [ebp-8], esi
        mov dword ptr ss : [ebp-0x28], eax
        mov ebx, eax
        public_6ac95d1 : nop
        mov eax, dword ptr ss : [ebp-0x40]
        mov esi, 1
        mov ecx, ebx
        mov dword ptr ss : [ebp-0x10], 1
        shl esi, cl
        mov ecx, 0x1E
        sub ecx, ebx
        shr eax, cl
        mov ecx, dword ptr ss : [ebp-0x44]
        mov dword ptr ss : [ebp-0x24], esi
        sub ecx, ebx
        xor ebx, ebx
        shr esi, 1
        sub ecx, 2
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0x14], ecx
        lea ecx, ds:[esi-1]
        mov dword ptr ss : [ebp-0xC], ecx
        mov ecx, dword ptr ss : [ebp-8]
        test ecx, ecx
        mov dword ptr ss : [ebp+0x14], ebx
        mov dword ptr ss : [ebp-4], ebx
        je public_6ac970c
        mov eax, esi
        shl eax, 5
        add eax, esi
        lea eax, ds:[esi+eax*2]
        lea ecx, ds:[eax+eax*4]
        lea eax, ds:[edx+ecx*4-0x53C]
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x3C], eax
        lea eax, ds:[edx+0x514]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        push eax
        push edx
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ds : [edx+0x100]
        push eax
        push ecx
        call public_6acb290
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x18]
        lea eax, ds:[ecx+0x14F00]
        push eax
        push edx
        lea eax, ds:[ecx+0x514]
        push edi
        push eax
        push ecx
        push eax
        push ecx
        call public_6ac42e0
        mov eax, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        lea ecx, ds:[eax+0x514]
        add eax, 4
        push ecx
        mov dword ptr ss : [ebp-0x4C], eax
        push eax
        mov eax, dword ptr ss : [ebp+0x18]
        mov dword ptr ss : [ebp-0x48], ecx
        mov ecx, dword ptr ds : [eax+0x100]
        push ecx
        push edi
        call public_6acb290
        cmp esi, 1
        je public_6ac9706
        mov eax, dword ptr ss : [ebp+0x10]
        lea edx, ds:[esi-1]
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x3C], edx
        jmp public_6ac96ab
        public_6ac96a8 : nop
        mov eax, dword ptr ss : [ebp-0x20]
        public_6ac96ab : nop
        mov ecx, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x18]
        add ecx, 0x14F00
        push ecx
        mov ecx, dword ptr ss : [ebp-0x48]
        push edx
        mov edx, dword ptr ss : [ebp-0x4C]
        push edi
        push ecx
        lea ecx, ds:[eax+0x514]
        push edx
        push ecx
        push eax
        call public_6ac42e0
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-0x1C]
        push edx
        lea eax, ds:[ecx+0x53C]
        add ecx, 0xA50
        push ecx
        mov dword ptr ss : [ebp-0x20], eax
        push eax
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax+0x100]
        push ecx
        push edi
        call public_6acb290
        mov eax, dword ptr ss : [ebp-0x3C]
        mov edx, dword ptr ss : [ebp-0x20]
        dec eax
        mov dword ptr ss : [ebp-0x20], edx
        mov dword ptr ss : [ebp-0x3C], eax
        jne public_6ac96a8
        public_6ac9706 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0x18]
        public_6ac970c : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        lea ecx, ds:[ecx+ecx*2-2]
        cmp eax, ecx
        ja public_6ac97d4
        mov ecx, eax
        and ecx, 3
        cmp ecx, 3
        ja public_6ac9891
/*FIXUP jmp dword ptr ds : [ecx*4+public_6ac9a18] @0x6ac9729*/
  JMPTB cmp ecx, 0
  JMPTB je public_6ac9730
  JMPTB cmp ecx, 1
  JMPTB je public_6ac9730
  JMPTB cmp ecx, 2
  JMPTB je public_6ac9746
  JMPTB cmp ecx, 3
  JMPTB je public_6ac9730
  JMPTB int 3
        public_6ac9730 : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp+0x14], 1
        add ecx, ecx
        sub eax, ecx
        add eax, 2
        jmp public_6ac988c
        public_6ac9746 : nop
        mov ecx, dword ptr ss : [ebp-8]
        test ecx, ecx
        je public_6ac97b2
        mov ebx, dword ptr ss : [ebp-0x24]
        shr eax, 1
        sub eax, ebx
        mov ebx, eax
        mov eax, esi
        shl eax, 5
        add eax, esi
        lea eax, ds:[esi+eax*2]
        lea ecx, ds:[eax+eax*4]
        lea eax, ds:[edx+ecx*4]
        add edx, 0x14F00
        push edx
        mov edx, dword ptr ss : [ebp+0x18]
        lea ecx, ds:[eax-0x28]
        push edx
        add eax, 0xFFFFFAC4
        push edi
        push ecx
        push eax
        push ecx
        push eax
        call public_6ac42e0
        mov eax, ebx
        mov edx, dword ptr ss : [ebp+0x18]
        shl eax, 5
        add eax, ebx
        lea eax, ds:[ebx+eax*2]
        lea ecx, ds:[eax+eax*4]
        mov eax, dword ptr ss : [ebp+0x10]
        lea ecx, ds:[eax+ecx*4]
        add eax, 0x14F00
        push eax
        push edx
        lea eax, ds:[ecx+0x514]
        push edi
        push eax
        push ecx
        push edi
        call public_6ac4250
        mov edx, dword ptr ss : [ebp+0x10]
        public_6ac97b2 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ebx, 1
        inc eax
        mov dword ptr ss : [ebp-0x10], 2
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-4], ebx
        mov dword ptr ss : [ebp+0x14], 0
        jmp public_6ac9891
        public_6ac97d4 : nop
        mov ebx, eax
        shr ebx, 2
        mov ecx, ebx
        not ecx
        test cl, 1
        mov ecx, dword ptr ss : [ebp-8]
        je public_6ac9840
        test ecx, ecx
        je public_6ac9837
        mov eax, ebx
        sub eax, esi
        mov ecx, eax
        shl ecx, 5
        add ecx, eax
        lea eax, ds:[eax+ecx*2]
        mov ecx, esi
        shl ecx, 5
        add ecx, esi
        lea eax, ds:[eax+eax*4]
        lea ecx, ds:[esi+ecx*2]
        lea eax, ds:[edx+eax*4]
        lea ecx, ds:[ecx+ecx*4]
        lea ecx, ds:[edx+ecx*4]
        add edx, 0x14F00
        push edx
        mov edx, dword ptr ss : [ebp+0x18]
        push edx
        lea edx, ds:[eax+0x514]
        push edi
        push edx
        push eax
        lea eax, ds:[ecx-0x28]
        add ecx, 0xFFFFFAC4
        push eax
        push ecx
        call public_6ac42e0
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0x18]
        public_6ac9837 : nop
        mov dword ptr ss : [ebp-0x10], 2
        jmp public_6ac987c
        public_6ac9840 : nop
        test ecx, ecx
        je public_6ac9879
        mov eax, ebx
        shr eax, 1
        mov ecx, eax
        shl ecx, 5
        add ecx, eax
        lea eax, ds:[eax+ecx*2]
        lea eax, ds:[eax+eax*4]
        lea eax, ds:[edx+eax*4]
        add edx, 0x14F00
        push edx
        mov edx, dword ptr ss : [ebp+0x18]
        lea ecx, ds:[eax+0x514]
        push edx
        push edi
        push ecx
        push eax
        push ecx
        push eax
        call public_6ac42e0
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0x18]
        public_6ac9879 : nop
        inc dword ptr ss : [ebp-0xC]
        public_6ac987c : nop
        lea ecx, ds:[ebx*4]
        mov dword ptr ss : [ebp+0x14], 1
        sub eax, ecx
        public_6ac988c : nop
        mov ebx, eax
        mov dword ptr ss : [ebp-4], ebx
        public_6ac9891 : nop
        cmp ebx, esi
        jae public_6ac98cc
        jmp public_6ac989a
        public_6ac9897 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        public_6ac989a : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        test ecx, ecx
        je public_6ac98d1
        mov edx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0xC]
        dec ecx
        inc edx
        mov dword ptr ss : [ebp+0x14], edx
        mov edx, ecx
        shr edx, 5
        mov dword ptr ss : [ebp-0x14], ecx
        and ecx, 0x1F
        mov edx, dword ptr ds : [eax+edx*4]
        shr edx, cl
        and edx, 1
        lea ebx, ds:[edx+ebx*2]
        cmp ebx, esi
        jb public_6ac9897
        mov edx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-4], ebx
        public_6ac98cc : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ac98d4
        public_6ac98d1 : nop
        mov dword ptr ss : [ebp-4], ebx
        public_6ac98d4 : nop
        test ebx, ebx
        je public_6ac9971
        mov eax, dword ptr ss : [ebp-4]
        bsf eax, eax
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+0x14]
        cmp eax, ecx
        mov dword ptr ss : [ebp-0x4C], ecx
        je public_6ac992b
        sub eax, ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, eax
        mov dword ptr ss : [ebp-0x3C], eax
        mov dword ptr ss : [ebp-0x10], ecx
        public_6ac98fb : nop
        mov ecx, dword ptr ss : [ebp-8]
        test ecx, ecx
        je public_6ac991b
        mov eax, dword ptr ss : [ebp+0x18]
        add edx, 0x14F00
        push edx
        push eax
        push edi
        push edi
        push edi
        call public_6ac4160
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp-0x3C]
        public_6ac991b : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        dec ecx
        dec eax
        mov dword ptr ss : [ebp+0x14], ecx
        mov dword ptr ss : [ebp-0x3C], eax
        jne public_6ac98fb
        mov ecx, dword ptr ss : [ebp-0x4C]
        public_6ac992b : nop
        mov eax, dword ptr ss : [ebp-8]
        test eax, eax
        je public_6ac9962
        inc ecx
        shr ebx, cl
        mov ecx, ebx
        shl ecx, 5
        add ecx, ebx
        lea eax, ds:[ebx+ecx*2]
        mov ecx, dword ptr ss : [ebp+0x18]
        lea eax, ds:[eax+eax*4]
        lea eax, ds:[edx+eax*4]
        add edx, 0x14F00
        push edx
        push ecx
        lea edx, ds:[eax+0x514]
        push edi
        push edx
        push eax
        push edi
        call public_6ac4250
        mov edx, dword ptr ss : [ebp+0x10]
        public_6ac9962 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ss : [ebp-0x14]
        inc eax
        xor ebx, ebx
        mov dword ptr ss : [ebp-0xC], eax
        mov dword ptr ss : [ebp-4], ebx
        public_6ac9971 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        je public_6ac99b3
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x3C], eax
        add ecx, eax
        mov dword ptr ss : [ebp-0x10], ecx
        public_6ac9983 : nop
        mov eax, dword ptr ss : [ebp-8]
        test eax, eax
        je public_6ac99a0
        mov eax, dword ptr ss : [ebp+0x18]
        add edx, 0x14F00
        push edx
        push eax
        push edi
        push edi
        push edi
        call public_6ac4160
        mov edx, dword ptr ss : [ebp+0x10]
        public_6ac99a0 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp-0x3C]
        dec ecx
        dec eax
        mov dword ptr ss : [ebp+0x14], ecx
        mov dword ptr ss : [ebp-0x3C], eax
        jne public_6ac9983
        mov ecx, dword ptr ss : [ebp-0x14]
        public_6ac99b3 : nop
        test ecx, ecx
        jne public_6ac9891
        mov eax, dword ptr ss : [ebp-0x2C]
        test eax, eax
        jl public_6ac99dc
        mov eax, dword ptr ss : [ebp-0x10]
        mov ebx, dword ptr ss : [ebp-0x34]
        mov esi, dword ptr ss : [ebp-0x38]
        sub eax, ebx
        lea ecx, ds:[eax+eax*2]
        mov eax, dword ptr ss : [ebp-0xC]
        sub eax, esi
        lea ecx, ds:[ecx+eax*4]
        test ecx, ecx
        jge public_6ac99ee
        public_6ac99dc : nop
        mov eax, dword ptr ss : [ebp-0x28]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x2C], eax
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x38], ecx
        mov dword ptr ss : [ebp-0x34], eax
        public_6ac99ee : nop
        mov eax, dword ptr ss : [ebp-0x30]
        inc eax
        cmp eax, 8
        mov dword ptr ss : [ebp-0x30], eax
        jle public_6ac95ac
        push edx
        call public_6ac4fb0
        mov ecx, dword ptr ss : [ebp-0x34]
        mov edx, dword ptr ss : [ebp-0x38]
        pop edi
        pop esi
        lea eax, ds:[ecx+edx]
        pop ebx
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6ac94c0)
        ASM_EXPORT_ENTRY_FIRST(0x6ac9730, public_6ac9730)
        ASM_EXPORT_ENTRY_LAST(0x6ac9746, public_6ac9746)
    }
}

#undef public_6ac94cf
#undef public_6ac94dd
#undef public_6ac94ed
#undef public_6ac9508
#undef public_6ac9594
#undef public_6ac959f
#undef public_6ac95ac
#undef public_6ac95b1
#undef public_6ac95c9
#undef public_6ac95d1
#undef public_6ac96a8
#undef public_6ac96ab
#undef public_6ac9706
#undef public_6ac970c
#undef public_6ac9730
#undef public_6ac9746
#undef public_6ac97b2
#undef public_6ac97d4
#undef public_6ac9837
#undef public_6ac9840
#undef public_6ac9879
#undef public_6ac987c
#undef public_6ac988c
#undef public_6ac9891
#undef public_6ac9897
#undef public_6ac989a
#undef public_6ac98cc
#undef public_6ac98d1
#undef public_6ac98d4
#undef public_6ac98fb
#undef public_6ac991b
#undef public_6ac992b
#undef public_6ac9962
#undef public_6ac9971
#undef public_6ac9983
#undef public_6ac99a0
#undef public_6ac99b3
#undef public_6ac99dc
#undef public_6ac99ee

#pragma init_seg(compiler)
extern "C" void const* const public_6ac9730 = __AsmFindLabelExport(&internal_6ac94c0, 0x6ac9730);
extern "C" void const* const public_6ac9746 = __AsmFindLabelExport(&internal_6ac94c0, 0x6ac9746);
