#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_622d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_622da20);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249758 _public_6249758
#define public_6249766 _public_6249766
#define public_624976e _public_624976e
#define public_6249776 _public_6249776
#define public_624977e _public_624977e

PROC_DECLARE(0x6249750, internal_6249750, public_6249750);
/* CHUNK of public_622e0a0 */
extern "C" NAKED register_t __cdecl internal_6249750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6249758 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xB4
        jmp public_620b700
        public_6249766 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_622da20
        public_624976e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_622d2c0
        public_6249776 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620b710
        public_624977e : nop
        mov eax, offset public_625270c
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249750)
        ASM_EXPORT_ENTRY_FIRST(0x6249758, public_6249758)
        ASM_EXPORT_ENTRY(0x6249766, public_6249766)
        ASM_EXPORT_ENTRY(0x624976e, public_624976e)
        ASM_EXPORT_ENTRY(0x6249776, public_6249776)
        ASM_EXPORT_ENTRY_LAST(0x624977e, public_624977e)
    }
}

#undef public_6249758
#undef public_6249766
#undef public_624976e
#undef public_6249776
#undef public_624977e

#pragma init_seg(compiler)
extern "C" void const* const public_6249758 = __AsmFindLabelExport(&internal_6249750, 0x6249758);
extern "C" void const* const public_6249766 = __AsmFindLabelExport(&internal_6249750, 0x6249766);
extern "C" void const* const public_624976e = __AsmFindLabelExport(&internal_6249750, 0x624976e);
extern "C" void const* const public_6249776 = __AsmFindLabelExport(&internal_6249750, 0x6249776);
extern "C" void const* const public_624977e = __AsmFindLabelExport(&internal_6249750, 0x624977e);
