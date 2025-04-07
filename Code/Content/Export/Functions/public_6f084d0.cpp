#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb70f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);

#define public_6f08507 _public_6f08507
#define public_6f08528 _public_6f08528
#define public_6f085e7 _public_6f085e7
#define public_6f08616 _public_6f08616
#define public_6f08645 _public_6f08645
#define public_6f08704 _public_6f08704
#define public_6f0872f _public_6f0872f
#define public_6f08776 _public_6f08776
#define public_6f08794 _public_6f08794
#define public_6f08796 _public_6f08796
#define public_6f087a4 _public_6f087a4

PROC_DECLARE(0x6f084d0, internal_6f084d0, public_6f084d0);
extern "C" NAKED register_t __cdecl internal_6f084d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x54
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x188]
        push esi
        xor bl, bl
        test eax, eax
        push edi
        je public_6f087a4
        mov eax, dword ptr ss : [ebp+0x184]
        mov esi, dword ptr ds : [eax]
        add esi, 8
        mov ecx, 9
        lea edi, ss:[esp+0x40]
        rep movsd
        mov esi, dword ptr ss : [esp+0x74]
        mov edi, dword ptr ss : [esp+0x6C]
        public_6f08507 : nop
        test bl, bl
        jne public_6f087a4
        mov eax, dword ptr ss : [ebp+0x178]
        add eax, 0xFFFFFFFE
        cmp eax, 8
        ja public_6f08794
/*FIXUP jmp dword ptr ds : [eax*4+public_6f087b0] @0x6f08521*/
  JMPTB cmp eax, 0
  JMPTB je public_6f08528
  JMPTB cmp eax, 1
  JMPTB je public_6f08616
  JMPTB cmp eax, 2
  JMPTB je public_6f08794
  JMPTB cmp eax, 3
  JMPTB je public_6f08616
  JMPTB cmp eax, 4
  JMPTB je public_6f08645
  JMPTB cmp eax, 5
  JMPTB je public_6f08794
  JMPTB cmp eax, 6
  JMPTB je public_6f08794
  JMPTB cmp eax, 7
  JMPTB je public_6f0872f
  JMPTB cmp eax, 8
  JMPTB je public_6f08794
  JMPTB int 3
        public_6f08528 : nop
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ss : [ebp+8]
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x4C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x18]
        mov eax, 0x5F3759DF
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fst dword ptr ss : [esp+0x74]
        mov edx, dword ptr ss : [esp+0x74]
        sar edx, 1
        sub eax, edx
        mov dword ptr ss : [esp+0x74], eax
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb8108]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6f085e7
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 6
        je public_6f08796
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 6
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f08796
        public_6f085e7 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [ecx], 3
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, edi
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        mov ecx, dword ptr ds : [public_6fb8108]
        mov dword ptr ds : [esi], ecx
        mov bl, 1
        jmp public_6f08796
        public_6f08616 : nop
        mov edx, dword ptr ss : [esp+0x68]
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [edx], 3
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, edi
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [public_6fb8108]
        mov dword ptr ds : [esi], edx
        mov bl, 1
        jmp public_6f08796
        public_6f08645 : nop
        mov ecx, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x34]
        push eax
        call public_6eb70f0
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x58]
        sub esp, 0xC
        lea ecx, ss:[esp+0x28]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp]
        call public_6eb7810
        fld dword ptr ss : [esp+0x24]
        mov edx, 0x5F3759DF
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fst dword ptr ss : [esp+0x74]
        mov ecx, dword ptr ss : [esp+0x74]
        sar ecx, 1
        sub edx, ecx
        mov dword ptr ss : [esp+0x74], edx
        fld dword ptr ss : [esp+0x74]
        fmul dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fmul dword ptr ds : [public_6fb605c]
        fsubr dword ptr ds : [public_6fb6058]
        fmul dword ptr ss : [esp+0x74]
        fmul st, st(1)
        fcomp dword ptr ds : [public_6fb8108]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6f08704
        mov eax, dword ptr ss : [ebp+0x174]
        cmp eax, 9
        je public_6f08796
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 9
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f08796
        public_6f08704 : nop
        mov eax, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [eax], 3
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [public_6fb8108]
        mov dword ptr ds : [esi], eax
        mov bl, 1
        jmp public_6f08796
        public_6f0872f : nop
        mov edx, dword ptr ss : [ebp+0x184]
        mov eax, dword ptr ds : [edx]
        lea ecx, ss:[ebp+0x180]
        push eax
        lea eax, ss:[esp+0x70]
        push eax
        call public_6ecfe80
        mov eax, dword ptr ss : [ebp+0x188]
        test eax, eax
        mov eax, dword ptr ss : [ebp+0x174]
        je public_6f08776
        cmp eax, 2
        je public_6f08796
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 2
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f08796
        public_6f08776 : nop
        cmp eax, 0xA
        je public_6f08796
        mov dword ptr ss : [ebp+0x178], eax
        mov dword ptr ss : [ebp+0x174], 0xA
        mov byte ptr ss : [ebp+0x1AC], 1
        jmp public_6f08796
        public_6f08794 : nop
        xor bl, bl
        public_6f08796 : nop
        mov eax, dword ptr ss : [ebp+0x188]
        test eax, eax
        jne public_6f08507
        public_6f087a4 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x54
        ret 0x10
        UNREACHABLE_TRAP(0x6f084d0)
        ASM_EXPORT_ENTRY_FIRST(0x6f08528, public_6f08528)
        ASM_EXPORT_ENTRY(0x6f08616, public_6f08616)
        ASM_EXPORT_ENTRY(0x6f08645, public_6f08645)
        ASM_EXPORT_ENTRY(0x6f0872f, public_6f0872f)
        ASM_EXPORT_ENTRY_LAST(0x6f08794, public_6f08794)
    }
}

#undef public_6f08507
#undef public_6f08528
#undef public_6f085e7
#undef public_6f08616
#undef public_6f08645
#undef public_6f08704
#undef public_6f0872f
#undef public_6f08776
#undef public_6f08794
#undef public_6f08796
#undef public_6f087a4

#pragma init_seg(compiler)
extern "C" void const* const public_6f08528 = __AsmFindLabelExport(&internal_6f084d0, 0x6f08528);
extern "C" void const* const public_6f08616 = __AsmFindLabelExport(&internal_6f084d0, 0x6f08616);
extern "C" void const* const public_6f08645 = __AsmFindLabelExport(&internal_6f084d0, 0x6f08645);
extern "C" void const* const public_6f0872f = __AsmFindLabelExport(&internal_6f084d0, 0x6f0872f);
extern "C" void const* const public_6f08794 = __AsmFindLabelExport(&internal_6f084d0, 0x6f08794);
