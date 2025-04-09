#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444e50);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_4eee10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bf00b _public_5bf00b
#define public_5bf016 _public_5bf016
#define public_5bf021 _public_5bf021
#define public_5bf02f _public_5bf02f
#define public_5bf03a _public_5bf03a
#define public_5bf045 _public_5bf045

PROC_DECLARE(0x5bf000, internal_5bf000, public_5bf000);
/* CHUNK of public_4ee260 */
extern "C" NAKED register_t __cdecl internal_5bf000()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x390]
        jmp public_444e50
        public_5bf00b : nop
        lea ecx, ss:[ebp-0x350]
        jmp public_4eee10
        public_5bf016 : nop
        mov ecx, dword ptr ss : [ebp-0x3AC]
        jmp public_444e20
        public_5bf021 : nop
        mov ecx, dword ptr ss : [ebp-0x3AC]
        add ecx, 0xC
        jmp public_445d70
        public_5bf02f : nop
        lea ecx, ss:[ebp-0x390]
        jmp public_444e20
        public_5bf03a : nop
        lea ecx, ss:[ebp-0x384]
        jmp public_445d70
        public_5bf045 : nop
        mov eax, offset public_5f8f90
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bf000)
        ASM_EXPORT_ENTRY_FIRST(0x5bf00b, public_5bf00b)
        ASM_EXPORT_ENTRY(0x5bf016, public_5bf016)
        ASM_EXPORT_ENTRY(0x5bf021, public_5bf021)
        ASM_EXPORT_ENTRY(0x5bf02f, public_5bf02f)
        ASM_EXPORT_ENTRY(0x5bf03a, public_5bf03a)
        ASM_EXPORT_ENTRY_LAST(0x5bf045, public_5bf045)
    }
}

#undef public_5bf00b
#undef public_5bf016
#undef public_5bf021
#undef public_5bf02f
#undef public_5bf03a
#undef public_5bf045

#pragma init_seg(compiler)
extern "C" void const* const public_5bf00b = __AsmFindLabelExport(&internal_5bf000, 0x5bf00b);
extern "C" void const* const public_5bf016 = __AsmFindLabelExport(&internal_5bf000, 0x5bf016);
extern "C" void const* const public_5bf021 = __AsmFindLabelExport(&internal_5bf000, 0x5bf021);
extern "C" void const* const public_5bf02f = __AsmFindLabelExport(&internal_5bf000, 0x5bf02f);
extern "C" void const* const public_5bf03a = __AsmFindLabelExport(&internal_5bf000, 0x5bf03a);
extern "C" void const* const public_5bf045 = __AsmFindLabelExport(&internal_5bf000, 0x5bf045);
