#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6296220);
CLANG_FORWARD_PROC_SYMBOL(public_62969c0);
CLANG_FORWARD_PROC_SYMBOL(public_6298440);
CLANG_FORWARD_PROC_SYMBOL(public_6298e70);
CLANG_FORWARD_PROC_SYMBOL(public_6299f60);
CLANG_FORWARD_PROC_SYMBOL(public_629b6c0);
CLANG_FORWARD_PROC_SYMBOL(public_629d2b0);
CLANG_FORWARD_PROC_SYMBOL(public_629e790);
CLANG_FORWARD_PROC_SYMBOL(public_629f880);
CLANG_FORWARD_PROC_SYMBOL(public_629fb90);

#define public_62c04ab _public_62c04ab
#define public_62c04b2 _public_62c04b2
#define public_62c04b6 _public_62c04b6
#define public_62c0532 _public_62c0532
#define public_62c0543 _public_62c0543
#define public_62c054b _public_62c054b
#define public_62c054f _public_62c054f
#define public_62c056a _public_62c056a
#define public_62c0585 _public_62c0585
#define public_62c05a7 _public_62c05a7
#define public_62c05bb _public_62c05bb
#define public_62c05e9 _public_62c05e9
#define public_62c05f8 _public_62c05f8
#define public_62c0611 _public_62c0611
#define public_62c0648 _public_62c0648
#define public_62c0664 _public_62c0664
#define public_62c067d _public_62c067d
#define public_62c0693 _public_62c0693
#define public_62c06b6 _public_62c06b6
#define public_62c06d9 _public_62c06d9
#define public_62c06fc _public_62c06fc
#define public_62c0718 _public_62c0718
#define public_62c0734 _public_62c0734
#define public_62c0755 _public_62c0755
#define public_62c0786 _public_62c0786
#define public_62c079b _public_62c079b
#define public_62c07bb _public_62c07bb
#define public_62c07d0 _public_62c07d0
#define public_62c07fd _public_62c07fd
#define public_62c0824 _public_62c0824
#define public_62c0833 _public_62c0833

PROC_DECLARE(0x62c0460, internal_62c0460, public_62c0460);
extern "C" NAKED register_t __cdecl internal_62c0460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ds : [ecx+0x10]
        sub esp, 8
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFD
        je public_62c04b2
        mov edx, dword ptr ds : [ecx+0x4C]
        and edx, 0x103
        cmp edx, 0x103
        jne public_62c04b2
        mov eax, dword ptr ss : [esp+0x14]
        xor edx, edx
        mov dx, word ptr ds : [eax]
        add ecx, 0xE4
        push edx
        call public_629b6c0
        mov esi, eax
        test esi, esi
        je public_62c04ab
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+8]
        test al, al
        jne public_62c04ab
        xor eax, eax
        jmp public_62c04b6
        public_62c04ab : nop
        mov eax, 0xFFFFFFFE
        jmp public_62c04b6
        public_62c04b2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        public_62c04b6 : nop
        test eax, eax
        jne public_62c0833
        mov ecx, dword ptr ds : [esi+0x14]
        cmp ecx, 0x40000
        mov eax, 0xFFFFFFFD
        ja public_62c07d0
        je public_62c0755
        cmp ecx, 0x80
        je public_62c05a7
        cmp ecx, 0x400
        je public_62c0585
        cmp ecx, 0x20000
        jne public_62c0833
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        jne public_62c0833
        fld dword ptr ds : [public_639a1d0]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jnp public_62c0543
        fld dword ptr ds : [public_6399404]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x41
        jne public_62c0532
        fld dword ptr ds : [public_6399404]
        jmp public_62c054f
        public_62c0532 : nop
        fld dword ptr ds : [public_639a1d0]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 5
        jp public_62c054b
        public_62c0543 : nop
        fld dword ptr ds : [public_639a1d0]
        jmp public_62c054f
        public_62c054b : nop
        fld dword ptr ss : [esp+0x1C]
        public_62c054f : nop
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x1C]
        fnstsw ax
        test ah, 0x44
        jnp public_62c056a
        mov eax, 0xFFFFFFFC
        pop esi
        add esp, 8
        ret 0x10
        public_62c056a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        push ecx
        mov ecx, esi
        call public_6296220
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx]
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c0585 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        jne public_62c0833
        mov ecx, esi
        call public_629d2b0
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax]
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c05a7 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, 0xB
        ja public_62c0833
/*FIXUP jmp dword ptr ds : [ecx*4+public_62c083c] @0x62c05b4*/
  JMPTB cmp ecx, 0
  JMPTB je public_62c05f8
  JMPTB cmp ecx, 1
  JMPTB je public_62c0611
  JMPTB cmp ecx, 2
  JMPTB je public_62c0648
  JMPTB cmp ecx, 3
  JMPTB je public_62c0664
  JMPTB cmp ecx, 4
  JMPTB je public_62c0833
  JMPTB cmp ecx, 5
  JMPTB je public_62c067d
  JMPTB cmp ecx, 6
  JMPTB je public_62c0693
  JMPTB cmp ecx, 7
  JMPTB je public_62c0833
  JMPTB cmp ecx, 8
  JMPTB je public_62c06fc
  JMPTB cmp ecx, 9
  JMPTB je public_62c0718
  JMPTB cmp ecx, 0xA
  JMPTB je public_62c0734
  JMPTB cmp ecx, 0xB
  JMPTB je public_62c05bb
  JMPTB int 3
        public_62c05bb : nop
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        mov ecx, esi
        call public_6298440
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        je public_62c05e9
        mov eax, dword ptr ds : [eax+0xB0]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c05e9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        xor eax, eax
        mov dword ptr ds : [ecx], eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c05f8 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [eax]
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c0611 : nop
        push edi
        mov ecx, esi
        call public_62969c0
        mov ecx, esi
        mov edi, eax
        call public_6299f60
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        xor eax, eax
        fmul dword ptr ds : [edi+0x80]
        pop edi
        pop esi
        fstp dword ptr ds : [ecx]
        add esp, 8
        ret 0x10
        public_62c0648 : nop
        mov ecx, esi
        call public_629fb90
        mov edx, dword ptr ds : [eax+0x90]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c0664 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0xA0]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c067d : nop
        mov ecx, esi
        call public_6298e70
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx]
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c0693 : nop
        mov ecx, esi
        call public_62969c0
        cmp byte ptr ds : [eax+0xAC], 1
        jne public_62c06b6
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], 3
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c06b6 : nop
        mov ecx, esi
        call public_62969c0
        cmp dword ptr ds : [eax+0xA8], 0xA
        jne public_62c06d9
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], 2
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c06d9 : nop
        mov ecx, esi
        call public_62969c0
        mov ecx, dword ptr ds : [eax+0x90]
        mov eax, dword ptr ss : [esp+0x10]
        xor edx, edx
        test ecx, ecx
        setne dl
        pop esi
        mov dword ptr ds : [eax], edx
        xor eax, eax
        add esp, 8
        ret 0x10
        public_62c06fc : nop
        mov ecx, esi
        call public_629fb90
        mov ecx, dword ptr ds : [eax+0x94]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c0718 : nop
        mov ecx, esi
        call public_629fb90
        mov al, byte ptr ds : [eax+0xBA]
        mov ecx, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [ecx], al
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c0734 : nop
        mov ecx, esi
        call public_62969c0
        mov ecx, dword ptr ds : [eax+0x90]
        mov eax, dword ptr ss : [esp+0x10]
        test ecx, ecx
        setne dl
        mov byte ptr ds : [eax], dl
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c0755 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        test ecx, ecx
        je public_62c079b
        cmp ecx, 4
        jne public_62c0833
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        je public_62c0786
        fld dword ptr ds : [public_6399408]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx]
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c0786 : nop
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [eax+0x70]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx]
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c079b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+8]
        test al, al
        je public_62c07bb
        fld dword ptr ds : [public_6399408]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx]
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c07bb : nop
        mov eax, dword ptr ds : [esi+0xC]
        fld dword ptr ds : [eax+0x74]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx]
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c07d0 : nop
        cmp ecx, 0x80000
        je public_62c07fd
        cmp ecx, 0x100000
        jne public_62c0833
        cmp dword ptr ss : [esp+0x18], 5
        jne public_62c0833
        mov ecx, esi
        call public_629e790
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx]
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c07fd : nop
        mov ecx, dword ptr ss : [esp+0x18]
        sub ecx, 5
        je public_62c0824
        sub ecx, 2
        jne public_62c0833
        mov ecx, esi
        call public_629fb90
        mov eax, dword ptr ds : [eax+0x78]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        add esp, 8
        ret 0x10
        public_62c0824 : nop
        mov ecx, esi
        call public_629f880
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx]
        xor eax, eax
        public_62c0833 : nop
        pop esi
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x62c0460)
        ASM_EXPORT_ENTRY_FIRST(0x62c05bb, public_62c05bb)
        ASM_EXPORT_ENTRY(0x62c05f8, public_62c05f8)
        ASM_EXPORT_ENTRY(0x62c0611, public_62c0611)
        ASM_EXPORT_ENTRY(0x62c0648, public_62c0648)
        ASM_EXPORT_ENTRY(0x62c0664, public_62c0664)
        ASM_EXPORT_ENTRY(0x62c067d, public_62c067d)
        ASM_EXPORT_ENTRY(0x62c0693, public_62c0693)
        ASM_EXPORT_ENTRY(0x62c06fc, public_62c06fc)
        ASM_EXPORT_ENTRY(0x62c0718, public_62c0718)
        ASM_EXPORT_ENTRY(0x62c0734, public_62c0734)
        ASM_EXPORT_ENTRY_LAST(0x62c0833, public_62c0833)
    }
}

#undef public_62c04ab
#undef public_62c04b2
#undef public_62c04b6
#undef public_62c0532
#undef public_62c0543
#undef public_62c054b
#undef public_62c054f
#undef public_62c056a
#undef public_62c0585
#undef public_62c05a7
#undef public_62c05bb
#undef public_62c05e9
#undef public_62c05f8
#undef public_62c0611
#undef public_62c0648
#undef public_62c0664
#undef public_62c067d
#undef public_62c0693
#undef public_62c06b6
#undef public_62c06d9
#undef public_62c06fc
#undef public_62c0718
#undef public_62c0734
#undef public_62c0755
#undef public_62c0786
#undef public_62c079b
#undef public_62c07bb
#undef public_62c07d0
#undef public_62c07fd
#undef public_62c0824
#undef public_62c0833

#pragma init_seg(compiler)
extern "C" void const* const public_62c05bb = __AsmFindLabelExport(&internal_62c0460, 0x62c05bb);
extern "C" void const* const public_62c05f8 = __AsmFindLabelExport(&internal_62c0460, 0x62c05f8);
extern "C" void const* const public_62c0611 = __AsmFindLabelExport(&internal_62c0460, 0x62c0611);
extern "C" void const* const public_62c0648 = __AsmFindLabelExport(&internal_62c0460, 0x62c0648);
extern "C" void const* const public_62c0664 = __AsmFindLabelExport(&internal_62c0460, 0x62c0664);
extern "C" void const* const public_62c067d = __AsmFindLabelExport(&internal_62c0460, 0x62c067d);
extern "C" void const* const public_62c0693 = __AsmFindLabelExport(&internal_62c0460, 0x62c0693);
extern "C" void const* const public_62c06fc = __AsmFindLabelExport(&internal_62c0460, 0x62c06fc);
extern "C" void const* const public_62c0718 = __AsmFindLabelExport(&internal_62c0460, 0x62c0718);
extern "C" void const* const public_62c0734 = __AsmFindLabelExport(&internal_62c0460, 0x62c0734);
extern "C" void const* const public_62c0833 = __AsmFindLabelExport(&internal_62c0460, 0x62c0833);
