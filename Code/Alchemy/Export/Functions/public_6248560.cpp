#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b700);
CLANG_FORWARD_PROC_SYMBOL(public_620b710);
CLANG_FORWARD_PROC_SYMBOL(public_620ce80);
CLANG_FORWARD_PROC_SYMBOL(public_6217c00);
CLANG_FORWARD_PROC_SYMBOL(public_62184a0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248568 _public_6248568
#define public_6248576 _public_6248576
#define public_624857e _public_624857e
#define public_6248586 _public_6248586
#define public_624858e _public_624858e

PROC_DECLARE(0x6248560, internal_6248560, public_6248560);
/* CHUNK of public_6219070 */
extern "C" NAKED register_t __cdecl internal_6248560()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620ce80
        public_6248568 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 0xB4
        jmp public_620b700
        public_6248576 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_62184a0
        public_624857e : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6217c00
        public_6248586 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        jmp public_620b710
        public_624858e : nop
        mov eax, offset public_6251450
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248560)
        ASM_EXPORT_ENTRY_FIRST(0x6248568, public_6248568)
        ASM_EXPORT_ENTRY(0x6248576, public_6248576)
        ASM_EXPORT_ENTRY(0x624857e, public_624857e)
        ASM_EXPORT_ENTRY(0x6248586, public_6248586)
        ASM_EXPORT_ENTRY_LAST(0x624858e, public_624858e)
    }
}

#undef public_6248568
#undef public_6248576
#undef public_624857e
#undef public_6248586
#undef public_624858e

#pragma init_seg(compiler)
extern "C" void const* const public_6248568 = __AsmFindLabelExport(&internal_6248560, 0x6248568);
extern "C" void const* const public_6248576 = __AsmFindLabelExport(&internal_6248560, 0x6248576);
extern "C" void const* const public_624857e = __AsmFindLabelExport(&internal_6248560, 0x624857e);
extern "C" void const* const public_6248586 = __AsmFindLabelExport(&internal_6248560, 0x6248586);
extern "C" void const* const public_624858e = __AsmFindLabelExport(&internal_6248560, 0x624858e);
