#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_62d2700);
CLANG_FORWARD_PROC_SYMBOL(public_62d27b0);
CLANG_FORWARD_PROC_SYMBOL(public_62d27d0);
CLANG_FORWARD_PROC_SYMBOL(public_62e6470);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395358 _public_6395358
#define public_6395363 _public_6395363
#define public_639536e _public_639536e
#define public_639537c _public_639537c
#define public_639538a _public_639538a
#define public_6395392 _public_6395392
#define public_639539d _public_639539d
#define public_63953ab _public_63953ab

PROC_DECLARE(0x6395350, internal_6395350, public_6395350);
/* CHUNK of public_62e6260 */
extern "C" NAKED register_t __cdecl internal_6395350()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-8]
        jmp public_62881d0
        public_6395358 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_62881d0
        public_6395363 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x34
        jmp public_62d2700
        public_639536e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x12C
        jmp public_62d27b0
        public_639537c : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x1364
        jmp public_62d27d0
        public_639538a : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62881d0
        public_6395392 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_62881d0
        public_639539d : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x1498
        jmp public_62e6470
        public_63953ab : nop
        mov eax, offset public_63aee44
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395350)
        ASM_EXPORT_ENTRY_FIRST(0x6395358, public_6395358)
        ASM_EXPORT_ENTRY(0x6395363, public_6395363)
        ASM_EXPORT_ENTRY(0x639536e, public_639536e)
        ASM_EXPORT_ENTRY(0x639537c, public_639537c)
        ASM_EXPORT_ENTRY(0x639538a, public_639538a)
        ASM_EXPORT_ENTRY(0x6395392, public_6395392)
        ASM_EXPORT_ENTRY(0x639539d, public_639539d)
        ASM_EXPORT_ENTRY_LAST(0x63953ab, public_63953ab)
    }
}

#undef public_6395358
#undef public_6395363
#undef public_639536e
#undef public_639537c
#undef public_639538a
#undef public_6395392
#undef public_639539d
#undef public_63953ab

#pragma init_seg(compiler)
extern "C" void const* const public_6395358 = __AsmFindLabelExport(&internal_6395350, 0x6395358);
extern "C" void const* const public_6395363 = __AsmFindLabelExport(&internal_6395350, 0x6395363);
extern "C" void const* const public_639536e = __AsmFindLabelExport(&internal_6395350, 0x639536e);
extern "C" void const* const public_639537c = __AsmFindLabelExport(&internal_6395350, 0x639537c);
extern "C" void const* const public_639538a = __AsmFindLabelExport(&internal_6395350, 0x639538a);
extern "C" void const* const public_6395392 = __AsmFindLabelExport(&internal_6395350, 0x6395392);
extern "C" void const* const public_639539d = __AsmFindLabelExport(&internal_6395350, 0x639539d);
extern "C" void const* const public_63953ab = __AsmFindLabelExport(&internal_6395350, 0x63953ab);
