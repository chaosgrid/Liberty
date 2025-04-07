#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62084b0);
CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_6212ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6248698 _public_6248698
#define public_62486a3 _public_62486a3
#define public_62486ae _public_62486ae
#define public_62486b9 _public_62486b9

PROC_DECLARE(0x6248690, internal_6248690, public_6248690);
/* CHUNK of public_621b0f0 */
extern "C" NAKED register_t __cdecl internal_6248690()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6212ec0
        public_6248698 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x4C
        jmp public_62084b0
        public_62486a3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x50
        jmp public_62084b0
        public_62486ae : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 4
        jmp public_620b300
        public_62486b9 : nop
        mov eax, offset public_6251584
        jmp public_6246126
        UNREACHABLE_TRAP(0x6248690)
        ASM_EXPORT_ENTRY_FIRST(0x6248698, public_6248698)
        ASM_EXPORT_ENTRY(0x62486a3, public_62486a3)
        ASM_EXPORT_ENTRY(0x62486ae, public_62486ae)
        ASM_EXPORT_ENTRY_LAST(0x62486b9, public_62486b9)
    }
}

#undef public_6248698
#undef public_62486a3
#undef public_62486ae
#undef public_62486b9

#pragma init_seg(compiler)
extern "C" void const* const public_6248698 = __AsmFindLabelExport(&internal_6248690, 0x6248698);
extern "C" void const* const public_62486a3 = __AsmFindLabelExport(&internal_6248690, 0x62486a3);
extern "C" void const* const public_62486ae = __AsmFindLabelExport(&internal_6248690, 0x62486ae);
extern "C" void const* const public_62486b9 = __AsmFindLabelExport(&internal_6248690, 0x62486b9);
