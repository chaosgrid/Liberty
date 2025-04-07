#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cc50);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcb98 _public_5bcb98
#define public_5bcbb2 _public_5bcbb2
#define public_5bcbb9 _public_5bcbb9
#define public_5bcbc1 _public_5bcbc1
#define public_5bcbcf _public_5bcbcf

PROC_DECLARE(0x5bcb90, internal_5bcb90, public_5bcb90);
/* CHUNK of public_4a4110 */
extern "C" NAKED register_t __cdecl internal_5bcb90()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bcb98 : nop
        cmp dword ptr ss : [ebp-0x10], 0
        je public_5bcbb2
        mov eax, dword ptr ss : [ebp-0x10]
        add eax, 0x32C
        mov dword ptr ss : [ebp-0x14], eax
        jmp public_5bcbb9
        public_5bcbb2 : nop
        mov dword ptr ss : [ebp-0x14], 0
        public_5bcbb9 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
        public_5bcbc1 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x564
        jmp public_42cc50
        public_5bcbcf : nop
        mov eax, offset public_5f6e3c
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcb90)
        ASM_EXPORT_ENTRY_FIRST(0x5bcb98, public_5bcb98)
        ASM_EXPORT_ENTRY(0x5bcbb2, public_5bcbb2)
        ASM_EXPORT_ENTRY(0x5bcbb9, public_5bcbb9)
        ASM_EXPORT_ENTRY(0x5bcbc1, public_5bcbc1)
        ASM_EXPORT_ENTRY_LAST(0x5bcbcf, public_5bcbcf)
    }
}

#undef public_5bcb98
#undef public_5bcbb2
#undef public_5bcbb9
#undef public_5bcbc1
#undef public_5bcbcf

#pragma init_seg(compiler)
extern "C" void const* const public_5bcb98 = __AsmFindLabelExport(&internal_5bcb90, 0x5bcb98);
extern "C" void const* const public_5bcbb2 = __AsmFindLabelExport(&internal_5bcb90, 0x5bcbb2);
extern "C" void const* const public_5bcbb9 = __AsmFindLabelExport(&internal_5bcb90, 0x5bcbb9);
extern "C" void const* const public_5bcbc1 = __AsmFindLabelExport(&internal_5bcb90, 0x5bcbc1);
extern "C" void const* const public_5bcbcf = __AsmFindLabelExport(&internal_5bcb90, 0x5bcbcf);
