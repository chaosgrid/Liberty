#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263310);
CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6395fdb _public_6395fdb
#define public_6395fe6 _public_6395fe6
#define public_6395ff2 _public_6395ff2
#define public_6395ffe _public_6395ffe
#define public_6396009 _public_6396009
#define public_6396015 _public_6396015
#define public_6396021 _public_6396021

PROC_DECLARE(0x6395fd0, internal_6395fd0, public_6395fd0);
/* CHUNK of public_6304990 */
extern "C" NAKED register_t __cdecl internal_6395fd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1678]
        jmp public_6263860
        public_6395fdb : nop
        lea ecx, ss:[ebp-0x1678]
        jmp public_6263310
        public_6395fe6 : nop
        mov ecx, dword ptr ss : [ebp-0x167C]
        jmp dword ptr ds : [public_63991ac]
        public_6395ff2 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_63991ac]
        public_6395ffe : nop
        lea ecx, ss:[ebp-0x1678]
        jmp public_6263310
        public_6396009 : nop
        mov ecx, dword ptr ss : [ebp-0x167C]
        jmp dword ptr ds : [public_63991ac]
        public_6396015 : nop
        lea ecx, ss:[ebp-0x1678]
        jmp dword ptr ds : [public_63991ac]
        public_6396021 : nop
        mov eax, offset public_63afdc4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395fd0)
        ASM_EXPORT_ENTRY_FIRST(0x6395fdb, public_6395fdb)
        ASM_EXPORT_ENTRY(0x6395fe6, public_6395fe6)
        ASM_EXPORT_ENTRY(0x6395ff2, public_6395ff2)
        ASM_EXPORT_ENTRY(0x6395ffe, public_6395ffe)
        ASM_EXPORT_ENTRY(0x6396009, public_6396009)
        ASM_EXPORT_ENTRY(0x6396015, public_6396015)
        ASM_EXPORT_ENTRY_LAST(0x6396021, public_6396021)
    }
}

#undef public_6395fdb
#undef public_6395fe6
#undef public_6395ff2
#undef public_6395ffe
#undef public_6396009
#undef public_6396015
#undef public_6396021

#pragma init_seg(compiler)
extern "C" void const* const public_6395fdb = __AsmFindLabelExport(&internal_6395fd0, 0x6395fdb);
extern "C" void const* const public_6395fe6 = __AsmFindLabelExport(&internal_6395fd0, 0x6395fe6);
extern "C" void const* const public_6395ff2 = __AsmFindLabelExport(&internal_6395fd0, 0x6395ff2);
extern "C" void const* const public_6395ffe = __AsmFindLabelExport(&internal_6395fd0, 0x6395ffe);
extern "C" void const* const public_6396009 = __AsmFindLabelExport(&internal_6395fd0, 0x6396009);
extern "C" void const* const public_6396015 = __AsmFindLabelExport(&internal_6395fd0, 0x6396015);
extern "C" void const* const public_6396021 = __AsmFindLabelExport(&internal_6395fd0, 0x6396021);
