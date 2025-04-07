#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fe5c0);
CLANG_FORWARD_PROC_SYMBOL(public_65fe620);
CLANG_FORWARD_PROC_SYMBOL(public_65fe930);
CLANG_FORWARD_PROC_SYMBOL(public_66003a0);
CLANG_FORWARD_PROC_SYMBOL(public_66006d0);
CLANG_FORWARD_PROC_SYMBOL(public_6600790);
CLANG_FORWARD_PROC_SYMBOL(public_6600850);

#define public_65fe6b7 _public_65fe6b7
#define public_65fe6e3 _public_65fe6e3
#define public_65fe70e _public_65fe70e
#define public_65fe716 _public_65fe716
#define public_65fe71d _public_65fe71d
#define public_65fe72b _public_65fe72b
#define public_65fe733 _public_65fe733
#define public_65fe741 _public_65fe741
#define public_65fe74f _public_65fe74f
#define public_65fe755 _public_65fe755
#define public_65fe76c _public_65fe76c
#define public_65fe780 _public_65fe780
#define public_65fe794 _public_65fe794
#define public_65fe7a1 _public_65fe7a1
#define public_65fe7ac _public_65fe7ac
#define public_65fe7b2 _public_65fe7b2
#define public_65fe7b5 _public_65fe7b5
#define public_65fe7bd _public_65fe7bd
#define public_65fe7ce _public_65fe7ce
#define public_65fe7fc _public_65fe7fc
#define public_65fe817 _public_65fe817
#define public_65fe85a _public_65fe85a
#define public_65fe887 _public_65fe887
#define public_65fe896 _public_65fe896
#define public_65fe8a4 _public_65fe8a4
#define public_65fe8be _public_65fe8be
#define public_65fe8cc _public_65fe8cc
#define public_65fe8db _public_65fe8db

PROC_DECLARE(0x65fe680, internal_65fe680, public_65fe680);
extern "C" NAKED register_t __cdecl internal_65fe680()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x28
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [ecx]
        push ebp
        lea edx, ss:[esp+0x10]
        push edx
        call dword ptr ds : [eax+0x6C]
        xor ebp, ebp
        xor ecx, ecx
        cmp eax, ebp
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+4], ebp
        jbe public_65fe8db
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        push esi
        xor esi, esi
        push edi
        mov dword ptr ss : [esp+0x14], esi
        public_65fe6b7 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov cl, byte ptr ds : [esi+eax]
        add esi, eax
        not cl
        test cl, 1
        je public_65fe7ce
        mov edi, dword ptr ds : [esi+0x10]
        cmp edi, ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        je public_65fe6e3
        lea ecx, ss:[esp+0x24]
        call public_65fe5c0
        public_65fe6e3 : nop
        mov ecx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov dword ptr ss : [esp+0x28], edi
        call dword ptr ds : [edx+0x70]
        cmp eax, ebp
        je public_65fe7bd
        mov ecx, dword ptr ss : [esp+0x24]
        dec ecx
        cmp ecx, 9
        ja public_65fe755
/*FIXUP jmp dword ptr ds : [ecx*4+public_65fe8e4] @0x65fe707*/
  JMPTB cmp ecx, 0
  JMPTB je public_65fe72b
  JMPTB cmp ecx, 1
  JMPTB je public_65fe70e
  JMPTB cmp ecx, 2
  JMPTB je public_65fe71d
  JMPTB cmp ecx, 3
  JMPTB je public_65fe716
  JMPTB cmp ecx, 4
  JMPTB je public_65fe733
  JMPTB cmp ecx, 5
  JMPTB je public_65fe741
  JMPTB cmp ecx, 6
  JMPTB je public_65fe733
  JMPTB cmp ecx, 7
  JMPTB je public_65fe72b
  JMPTB cmp ecx, 8
  JMPTB je public_65fe70e
  JMPTB cmp ecx, 9
  JMPTB je public_65fe74f
  JMPTB int 3
        public_65fe70e : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], eax
        jmp public_65fe755
        public_65fe716 : nop
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x34], ecx
        public_65fe71d : nop
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x30], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], ecx
        public_65fe72b : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], edx
        jmp public_65fe755
        public_65fe733 : nop
        mov eax, dword ptr ds : [eax]
        push eax
        lea ecx, ss:[esp+0x28]
        call public_65fe620
        jmp public_65fe755
        public_65fe741 : nop
        mov ecx, dword ptr ds : [eax]
        push ecx
        lea ecx, ss:[esp+0x28]
        call public_65fe930
        jmp public_65fe755
        public_65fe74f : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], ecx
        public_65fe755 : nop
        mov edx, dword ptr ss : [esp+0x24]
        lea eax, ds:[edx-1]
        cmp eax, 8
        ja public_65fe8be
/*FIXUP jmp dword ptr ds : [eax*4+public_65fe90c] @0x65fe765*/
  JMPTB cmp eax, 0
  JMPTB je public_65fe76c
  JMPTB cmp eax, 1
  JMPTB je public_65fe780
  JMPTB cmp eax, 2
  JMPTB je public_65fe794
  JMPTB cmp eax, 3
  JMPTB je public_65fe7a1
  JMPTB cmp eax, 4
  JMPTB je public_65fe7fc
  JMPTB cmp eax, 5
  JMPTB je public_65fe8be
  JMPTB cmp eax, 6
  JMPTB je public_65fe7fc
  JMPTB cmp eax, 7
  JMPTB je public_65fe817
  JMPTB cmp eax, 8
  JMPTB je public_65fe85a
  JMPTB int 3
        public_65fe76c : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x28]
        push eax
        push ecx
        push ebx
        call public_66006d0
        add esp, 0xC
        jmp public_65fe7b5
        public_65fe780 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        push ebx
        call public_66006d0
        add esp, 0xC
        jmp public_65fe7b5
        public_65fe794 : nop
        mov edx, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x28]
        push ecx
        push 3
        push edx
        jmp public_65fe7ac
        public_65fe7a1 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x28]
        push eax
        push 4
        push ecx
        public_65fe7ac : nop
        push ebx
        call public_6600790
        public_65fe7b2 : nop
        add esp, 0x10
        public_65fe7b5 : nop
        test eax, eax
        jge public_65fe8be
        public_65fe7bd : nop
        lea ecx, ss:[esp+0x24]
        call public_65fe5c0
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        public_65fe7ce : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        add esi, 0x4C
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], esi
        jb public_65fe6b7
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebx
        pop ebp
        add esp, 0x28
        ret 8
        public_65fe7fc : nop
        mov edi, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [esi+4]
        push edi
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        push ecx
        push edx
        push ebx
        call public_6600850
        jmp public_65fe7b2
        public_65fe817 : nop
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x40]
        push eax
        push ecx
        push ebx
        mov dword ptr ss : [esp+0x4C], ebp
        call public_66003a0
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [esi+4]
        shl edx, 4
        xor edx, eax
        and edx, 0xF0
        xor eax, edx
        mov dword ptr ss : [esp+0x4C], eax
        lea eax, ss:[esp+0x4C]
        push eax
        push ecx
        push ebx
        call public_66006d0
        add esp, 0x18
        jmp public_65fe7b5
        public_65fe85a : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        push ebx
        mov dword ptr ss : [esp+0x4C], ebp
        xor edi, edi
        call public_66003a0
        mov eax, dword ptr ds : [esi]
        add esp, 0xC
        test eax, 0x20000
        jne public_65fe887
        test eax, 0x40000
        je public_65fe887
        mov edi, 1
        public_65fe887 : nop
        sub edi, ebp
        mov ecx, dword ptr ss : [esp+0x28]
        je public_65fe8cc
        dec edi
        jne public_65fe8a4
        mov eax, dword ptr ss : [esp+0x40]
        public_65fe896 : nop
        shl ecx, 2
        xor ecx, eax
        and ecx, 0xC
        xor eax, ecx
        mov dword ptr ss : [esp+0x40], eax
        public_65fe8a4 : nop
        mov eax, dword ptr ds : [esi+4]
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        push ebx
        call public_66006d0
        add esp, 0xC
        test eax, eax
        jl public_65fe7bd
        public_65fe8be : nop
        lea ecx, ss:[esp+0x24]
        call public_65fe5c0
        jmp public_65fe7ce
        public_65fe8cc : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov edx, eax
        xor edx, ecx
        and edx, 3
        xor eax, edx
        jmp public_65fe896
        public_65fe8db : nop
        mov eax, ecx
        pop ebp
        add esp, 0x28
        ret 8
        UNREACHABLE_TRAP(0x65fe680)
        ASM_EXPORT_ENTRY_FIRST(0x65fe70e, public_65fe70e)
        ASM_EXPORT_ENTRY(0x65fe716, public_65fe716)
        ASM_EXPORT_ENTRY(0x65fe71d, public_65fe71d)
        ASM_EXPORT_ENTRY(0x65fe72b, public_65fe72b)
        ASM_EXPORT_ENTRY(0x65fe733, public_65fe733)
        ASM_EXPORT_ENTRY(0x65fe741, public_65fe741)
        ASM_EXPORT_ENTRY(0x65fe74f, public_65fe74f)
        ASM_EXPORT_ENTRY(0x65fe76c, public_65fe76c)
        ASM_EXPORT_ENTRY(0x65fe780, public_65fe780)
        ASM_EXPORT_ENTRY(0x65fe794, public_65fe794)
        ASM_EXPORT_ENTRY(0x65fe7a1, public_65fe7a1)
        ASM_EXPORT_ENTRY(0x65fe7fc, public_65fe7fc)
        ASM_EXPORT_ENTRY(0x65fe817, public_65fe817)
        ASM_EXPORT_ENTRY(0x65fe85a, public_65fe85a)
        ASM_EXPORT_ENTRY_LAST(0x65fe8be, public_65fe8be)
    }
}

#undef public_65fe6b7
#undef public_65fe6e3
#undef public_65fe70e
#undef public_65fe716
#undef public_65fe71d
#undef public_65fe72b
#undef public_65fe733
#undef public_65fe741
#undef public_65fe74f
#undef public_65fe755
#undef public_65fe76c
#undef public_65fe780
#undef public_65fe794
#undef public_65fe7a1
#undef public_65fe7ac
#undef public_65fe7b2
#undef public_65fe7b5
#undef public_65fe7bd
#undef public_65fe7ce
#undef public_65fe7fc
#undef public_65fe817
#undef public_65fe85a
#undef public_65fe887
#undef public_65fe896
#undef public_65fe8a4
#undef public_65fe8be
#undef public_65fe8cc
#undef public_65fe8db

#pragma init_seg(compiler)
extern "C" void const* const public_65fe70e = __AsmFindLabelExport(&internal_65fe680, 0x65fe70e);
extern "C" void const* const public_65fe716 = __AsmFindLabelExport(&internal_65fe680, 0x65fe716);
extern "C" void const* const public_65fe71d = __AsmFindLabelExport(&internal_65fe680, 0x65fe71d);
extern "C" void const* const public_65fe72b = __AsmFindLabelExport(&internal_65fe680, 0x65fe72b);
extern "C" void const* const public_65fe733 = __AsmFindLabelExport(&internal_65fe680, 0x65fe733);
extern "C" void const* const public_65fe741 = __AsmFindLabelExport(&internal_65fe680, 0x65fe741);
extern "C" void const* const public_65fe74f = __AsmFindLabelExport(&internal_65fe680, 0x65fe74f);
extern "C" void const* const public_65fe76c = __AsmFindLabelExport(&internal_65fe680, 0x65fe76c);
extern "C" void const* const public_65fe780 = __AsmFindLabelExport(&internal_65fe680, 0x65fe780);
extern "C" void const* const public_65fe794 = __AsmFindLabelExport(&internal_65fe680, 0x65fe794);
extern "C" void const* const public_65fe7a1 = __AsmFindLabelExport(&internal_65fe680, 0x65fe7a1);
extern "C" void const* const public_65fe7fc = __AsmFindLabelExport(&internal_65fe680, 0x65fe7fc);
extern "C" void const* const public_65fe817 = __AsmFindLabelExport(&internal_65fe680, 0x65fe817);
extern "C" void const* const public_65fe85a = __AsmFindLabelExport(&internal_65fe680, 0x65fe85a);
extern "C" void const* const public_65fe8be = __AsmFindLabelExport(&internal_65fe680, 0x65fe8be);
