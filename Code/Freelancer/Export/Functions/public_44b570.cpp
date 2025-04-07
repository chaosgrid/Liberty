#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a670);
CLANG_FORWARD_PROC_SYMBOL(public_41a6b0);
CLANG_FORWARD_PROC_SYMBOL(public_41a6f0);
CLANG_FORWARD_PROC_SYMBOL(public_41a720);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_422120);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_422610);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_44b450);
CLANG_FORWARD_PROC_SYMBOL(public_44b570);
CLANG_FORWARD_PROC_SYMBOL(public_44c4b0);
CLANG_FORWARD_PROC_SYMBOL(public_44c520);
CLANG_FORWARD_PROC_SYMBOL(public_44c730);
CLANG_FORWARD_PROC_SYMBOL(public_44cb00);
CLANG_FORWARD_PROC_SYMBOL(public_44cd90);
CLANG_FORWARD_PROC_SYMBOL(public_454760);
CLANG_FORWARD_PROC_SYMBOL(public_456740);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_556f20);
CLANG_FORWARD_PROC_SYMBOL(public_557350);
CLANG_FORWARD_PROC_SYMBOL(public_558000);
CLANG_FORWARD_PROC_SYMBOL(public_5593c0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5b9c50);

#define public_44b630 _public_44b630
#define public_44b665 _public_44b665
#define public_44b66c _public_44b66c
#define public_44b684 _public_44b684
#define public_44b6a0 _public_44b6a0
#define public_44b6ce _public_44b6ce
#define public_44b6d5 _public_44b6d5
#define public_44b6e8 _public_44b6e8
#define public_44b700 _public_44b700
#define public_44b713 _public_44b713
#define public_44b72c _public_44b72c
#define public_44b733 _public_44b733
#define public_44b746 _public_44b746
#define public_44b77f _public_44b77f
#define public_44b832 _public_44b832
#define public_44b850 _public_44b850
#define public_44b86d _public_44b86d
#define public_44b874 _public_44b874
#define public_44b887 _public_44b887
#define public_44b892 _public_44b892
#define public_44b896 _public_44b896
#define public_44b8a0 _public_44b8a0
#define public_44b8aa _public_44b8aa
#define public_44b8b1 _public_44b8b1
#define public_44b8bb _public_44b8bb
#define public_44b8dd _public_44b8dd
#define public_44b944 _public_44b944
#define public_44b948 _public_44b948
#define public_44b96a _public_44b96a
#define public_44b96e _public_44b96e

PROC_DECLARE(0x44b570, internal_44b570, public_44b570);
/* CHUNK of public_43bbc0 */
extern "C" NAKED register_t __cdecl internal_44b570()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_5b9c50 @0x44b572*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b9c50
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        call public_41a670
        mov eax, dword ptr ss : [ebp+0x500]
        push 0x748
/*FIXUP push offset public_5cbf24 @0x44b59e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbf24
        push eax
        call public_422610
        mov ecx, dword ptr ss : [ebp+0x500]
        push ecx
        call public_422950
        push 2
        call public_422120
        push 0xB71
        call public_421dd0
        push 1
        call public_422190
        push 0xB44
        call public_421dd0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        mov edx, dword ptr ss : [ebp+0x500]
        add esp, 0x2C
        push edx
        mov ecx, ebp
        call public_44b450
        call public_454760
        lea eax, ss:[esp+0x12]
        push eax
        push 0
        lea ecx, ss:[esp+0x1B]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_44c4b0
        mov dword ptr ss : [esp+0x4C], 0
        call public_5593c0
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_44b66c
        lea ecx, ds:[ecx]
        public_44b630 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+8], ebp
        jne public_44b665
        mov al, byte ptr ds : [eax+0x16]
        lea edx, ss:[esp+0x11]
        mov byte ptr ss : [esp+0x11], al
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x38]
        call public_44c520
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_46d660
        public_44b665 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_44b630
        public_44b66c : nop
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_53e430
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ss : [esp+0x34]
        je public_44b6e8
        public_44b684 : nop
        mov cl, byte ptr ds : [eax+0xC]
        mov byte ptr ss : [esp+0x11], cl
        call public_5593c0
        mov ebx, eax
        mov eax, dword ptr ds : [ebx+4]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_44b6d5
        nop 
        lea esp, ss:[esp]
        public_44b6a0 : nop
        mov esi, dword ptr ds : [edi+8]
        cmp dword ptr ds : [esi+8], ebp
        jne public_44b6ce
        mov dl, byte ptr ss : [esp+0x11]
        cmp byte ptr ds : [esi+0x16], dl
        jne public_44b6ce
        push esi
        push ebp
        call public_41a6f0
        mov ecx, dword ptr ss : [ebp+0x500]
        mov eax, dword ptr ds : [esi]
        add esp, 8
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        call public_41a720
        public_44b6ce : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [ebx+4]
        jne public_44b6a0
        public_44b6d5 : nop
        lea ecx, ss:[esp+0x14]
        call public_44cd90
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ss : [esp+0x34]
        jne public_44b684
        public_44b6e8 : nop
        call public_41a6b0
        mov ecx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_44b746
        nop 
        lea esp, ss:[esp]
        public_44b700 : nop
        mov bl, byte ptr ds : [eax+0xC]
        call public_5593c0
        mov edi, eax
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_44b733
        public_44b713 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [ecx+8], ebp
        jne public_44b72c
        cmp byte ptr ds : [ecx+0x16], bl
        jne public_44b72c
        mov eax, dword ptr ss : [ebp+0x500]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x20]
        public_44b72c : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+4]
        jne public_44b713
        public_44b733 : nop
        lea ecx, ss:[esp+0x14]
        call public_44cd90
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ss : [esp+0x34]
        jne public_44b700
        public_44b746 : nop
        push 0x25
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_44b77f
        push 0x29
        call public_5792b0
        add esp, 4
        test eax, eax
        jle public_44b77f
        mov ecx, dword ptr ss : [ebp+0x500]
        mov edx, dword ptr ss : [ebp+0x101C]
        push ecx
        push edx
        lea eax, ss:[ebp+0x81C]
        push eax
        call public_558000
        add esp, 0xC
        public_44b77f : nop
        push 2
        call public_422120
        push 0xB71
        call public_421dd0
        push 1
        call public_422190
        push 0xB44
        call public_421dd0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        push 0x3F800000
        push 0x3F800000
        push 0x3F800000
        call public_556f20
        add esp, 0x28
        call public_557350
        mov ecx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push 0x1A
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], 0x1A
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0xF4]
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        xor ebx, ebx
        push ebx
        push ecx
        push eax
        call dword ptr ds : [edx+0xF0]
        mov edx, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        mov byte ptr ss : [esp+0x50], 1
        call dword ptr ds : [ecx+0x74]
        cmp eax, ebx
        jl public_44b8dd
        mov eax, dword ptr ss : [esp+0x34]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_44b8bb
        public_44b832 : nop
        mov dl, byte ptr ds : [edi+0xC]
        mov byte ptr ss : [esp+0x11], dl
        call public_5593c0
        mov ebx, eax
        mov eax, dword ptr ds : [ebx+4]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_44b874
        lea esp, ss:[esp]
        public_44b850 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp dword ptr ds : [ecx+8], ebp
        jne public_44b86d
        mov al, byte ptr ss : [esp+0x11]
        cmp byte ptr ds : [ecx+0x16], al
        jne public_44b86d
        mov eax, dword ptr ss : [ebp+0x500]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x24]
        public_44b86d : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+4]
        jne public_44b850
        public_44b874 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov al, byte ptr ds : [ecx+0xE]
        test al, al
        jne public_44b896
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0xE]
        test dl, dl
        jne public_44b892
        public_44b887 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0xE]
        test dl, dl
        je public_44b887
        public_44b892 : nop
        mov edi, ecx
        jmp public_44b8b1
        public_44b896 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_44b8aa
        mov edi, edi
        public_44b8a0 : nop
        mov edi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp edi, dword ptr ds : [eax+8]
        je public_44b8a0
        public_44b8aa : nop
        cmp dword ptr ds : [edi+8], eax
        je public_44b8b1
        mov edi, eax
        public_44b8b1 : nop
        cmp edi, dword ptr ss : [esp+0x34]
        jne public_44b832
        public_44b8bb : nop
        mov ecx, dword ptr ss : [ebp+0x500]
        push ecx
        push ebp
        mov ecx, offset public_66d2d0
        call public_456740
        mov edx, dword ptr ds : [public_5c6ddc]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x78]
        xor ebx, ebx
        public_44b8dd : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2C]
        push ecx
        push eax
        mov byte ptr ss : [esp+0x58], 0
        call dword ptr ds : [edx+0xF0]
        mov ecx, dword ptr ss : [esp+0x34]
        cmp dword ptr ss : [esp+0x40], ebx
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        mov edi, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_44b944
        mov edx, eax
        cmp eax, edx
        jne public_44b944
        mov edx, dword ptr ds : [ecx+4]
        push edx
        lea ecx, ss:[esp+0x34]
        call public_44cb00
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+4], ecx
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [eax+8], eax
        jmp public_44b96a
        public_44b944 : nop
        cmp eax, ecx
        je public_44b96e
        public_44b948 : nop
        lea ecx, ss:[esp+0x14]
        mov esi, eax
        call public_44cd90
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        lea ecx, ss:[esp+0x38]
        call public_44c730
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        jne public_44b948
        public_44b96a : nop
        mov ecx, dword ptr ss : [esp+0x34]
        public_44b96e : nop
        push ecx
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x48], ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x4C]
        add esp, 8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x44b570)
        ASM_EXPORT_ENTRY_FIRST(0x44b630, public_44b630)
        ASM_EXPORT_ENTRY(0x44b665, public_44b665)
        ASM_EXPORT_ENTRY(0x44b66c, public_44b66c)
        ASM_EXPORT_ENTRY(0x44b684, public_44b684)
        ASM_EXPORT_ENTRY(0x44b6a0, public_44b6a0)
        ASM_EXPORT_ENTRY(0x44b6ce, public_44b6ce)
        ASM_EXPORT_ENTRY(0x44b6d5, public_44b6d5)
        ASM_EXPORT_ENTRY(0x44b6e8, public_44b6e8)
        ASM_EXPORT_ENTRY(0x44b700, public_44b700)
        ASM_EXPORT_ENTRY(0x44b713, public_44b713)
        ASM_EXPORT_ENTRY(0x44b72c, public_44b72c)
        ASM_EXPORT_ENTRY(0x44b733, public_44b733)
        ASM_EXPORT_ENTRY(0x44b746, public_44b746)
        ASM_EXPORT_ENTRY(0x44b77f, public_44b77f)
        ASM_EXPORT_ENTRY(0x44b832, public_44b832)
        ASM_EXPORT_ENTRY(0x44b850, public_44b850)
        ASM_EXPORT_ENTRY(0x44b86d, public_44b86d)
        ASM_EXPORT_ENTRY(0x44b874, public_44b874)
        ASM_EXPORT_ENTRY(0x44b887, public_44b887)
        ASM_EXPORT_ENTRY(0x44b892, public_44b892)
        ASM_EXPORT_ENTRY(0x44b896, public_44b896)
        ASM_EXPORT_ENTRY(0x44b8a0, public_44b8a0)
        ASM_EXPORT_ENTRY(0x44b8aa, public_44b8aa)
        ASM_EXPORT_ENTRY(0x44b8b1, public_44b8b1)
        ASM_EXPORT_ENTRY(0x44b8bb, public_44b8bb)
        ASM_EXPORT_ENTRY(0x44b8dd, public_44b8dd)
        ASM_EXPORT_ENTRY(0x44b944, public_44b944)
        ASM_EXPORT_ENTRY(0x44b948, public_44b948)
        ASM_EXPORT_ENTRY(0x44b96a, public_44b96a)
        ASM_EXPORT_ENTRY_LAST(0x44b96e, public_44b96e)
    }
}

#undef public_44b630
#undef public_44b665
#undef public_44b66c
#undef public_44b684
#undef public_44b6a0
#undef public_44b6ce
#undef public_44b6d5
#undef public_44b6e8
#undef public_44b700
#undef public_44b713
#undef public_44b72c
#undef public_44b733
#undef public_44b746
#undef public_44b77f
#undef public_44b832
#undef public_44b850
#undef public_44b86d
#undef public_44b874
#undef public_44b887
#undef public_44b892
#undef public_44b896
#undef public_44b8a0
#undef public_44b8aa
#undef public_44b8b1
#undef public_44b8bb
#undef public_44b8dd
#undef public_44b944
#undef public_44b948
#undef public_44b96a
#undef public_44b96e

#pragma init_seg(compiler)
extern "C" void const* const public_44b630 = __AsmFindLabelExport(&internal_44b570, 0x44b630);
extern "C" void const* const public_44b665 = __AsmFindLabelExport(&internal_44b570, 0x44b665);
extern "C" void const* const public_44b66c = __AsmFindLabelExport(&internal_44b570, 0x44b66c);
extern "C" void const* const public_44b684 = __AsmFindLabelExport(&internal_44b570, 0x44b684);
extern "C" void const* const public_44b6a0 = __AsmFindLabelExport(&internal_44b570, 0x44b6a0);
extern "C" void const* const public_44b6ce = __AsmFindLabelExport(&internal_44b570, 0x44b6ce);
extern "C" void const* const public_44b6d5 = __AsmFindLabelExport(&internal_44b570, 0x44b6d5);
extern "C" void const* const public_44b6e8 = __AsmFindLabelExport(&internal_44b570, 0x44b6e8);
extern "C" void const* const public_44b700 = __AsmFindLabelExport(&internal_44b570, 0x44b700);
extern "C" void const* const public_44b713 = __AsmFindLabelExport(&internal_44b570, 0x44b713);
extern "C" void const* const public_44b72c = __AsmFindLabelExport(&internal_44b570, 0x44b72c);
extern "C" void const* const public_44b733 = __AsmFindLabelExport(&internal_44b570, 0x44b733);
extern "C" void const* const public_44b746 = __AsmFindLabelExport(&internal_44b570, 0x44b746);
extern "C" void const* const public_44b77f = __AsmFindLabelExport(&internal_44b570, 0x44b77f);
extern "C" void const* const public_44b832 = __AsmFindLabelExport(&internal_44b570, 0x44b832);
extern "C" void const* const public_44b850 = __AsmFindLabelExport(&internal_44b570, 0x44b850);
extern "C" void const* const public_44b86d = __AsmFindLabelExport(&internal_44b570, 0x44b86d);
extern "C" void const* const public_44b874 = __AsmFindLabelExport(&internal_44b570, 0x44b874);
extern "C" void const* const public_44b887 = __AsmFindLabelExport(&internal_44b570, 0x44b887);
extern "C" void const* const public_44b892 = __AsmFindLabelExport(&internal_44b570, 0x44b892);
extern "C" void const* const public_44b896 = __AsmFindLabelExport(&internal_44b570, 0x44b896);
extern "C" void const* const public_44b8a0 = __AsmFindLabelExport(&internal_44b570, 0x44b8a0);
extern "C" void const* const public_44b8aa = __AsmFindLabelExport(&internal_44b570, 0x44b8aa);
extern "C" void const* const public_44b8b1 = __AsmFindLabelExport(&internal_44b570, 0x44b8b1);
extern "C" void const* const public_44b8bb = __AsmFindLabelExport(&internal_44b570, 0x44b8bb);
extern "C" void const* const public_44b8dd = __AsmFindLabelExport(&internal_44b570, 0x44b8dd);
extern "C" void const* const public_44b944 = __AsmFindLabelExport(&internal_44b570, 0x44b944);
extern "C" void const* const public_44b948 = __AsmFindLabelExport(&internal_44b570, 0x44b948);
extern "C" void const* const public_44b96a = __AsmFindLabelExport(&internal_44b570, 0x44b96a);
extern "C" void const* const public_44b96e = __AsmFindLabelExport(&internal_44b570, 0x44b96e);
