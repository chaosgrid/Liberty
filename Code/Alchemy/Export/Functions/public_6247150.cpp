#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62022b0);
CLANG_FORWARD_PROC_SYMBOL(public_62022d0);
CLANG_FORWARD_PROC_SYMBOL(public_6202550);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6247168 _public_6247168
#define public_624716f _public_624716f
#define public_6247177 _public_6247177
#define public_6247182 _public_6247182
#define public_624718d _public_624718d

PROC_DECLARE(0x6247150, internal_6247150, public_6247150);
/* CHUNK of public_6201190 */
extern "C" NAKED register_t __cdecl internal_6247150()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        cmp dword ptr ss : [ebp-0x14], 0
        je public_6247168
        mov eax, dword ptr ss : [ebp-0x14]
        add eax, 4
        mov dword ptr ss : [ebp-0x10], eax
        jmp public_624716f
        public_6247168 : nop
        mov dword ptr ss : [ebp-0x10], 0
        public_624716f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6202550
        public_6247177 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x28
        jmp public_62022b0
        public_6247182 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_62022d0
        public_624718d : nop
        mov eax, offset public_624ff08
        jmp public_6246126
        UNREACHABLE_TRAP(0x6247150)
        ASM_EXPORT_ENTRY_FIRST(0x6247168, public_6247168)
        ASM_EXPORT_ENTRY(0x624716f, public_624716f)
        ASM_EXPORT_ENTRY(0x6247177, public_6247177)
        ASM_EXPORT_ENTRY(0x6247182, public_6247182)
        ASM_EXPORT_ENTRY_LAST(0x624718d, public_624718d)
    }
}

#undef public_6247168
#undef public_624716f
#undef public_6247177
#undef public_6247182
#undef public_624718d

#pragma init_seg(compiler)
extern "C" void const* const public_6247168 = __AsmFindLabelExport(&internal_6247150, 0x6247168);
extern "C" void const* const public_624716f = __AsmFindLabelExport(&internal_6247150, 0x624716f);
extern "C" void const* const public_6247177 = __AsmFindLabelExport(&internal_6247150, 0x6247177);
extern "C" void const* const public_6247182 = __AsmFindLabelExport(&internal_6247150, 0x6247182);
extern "C" void const* const public_624718d = __AsmFindLabelExport(&internal_6247150, 0x624718d);
