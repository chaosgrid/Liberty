#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620b300);
CLANG_FORWARD_PROC_SYMBOL(public_620c070);
CLANG_FORWARD_PROC_SYMBOL(public_6246126);

#define public_6249798 _public_6249798
#define public_62497a3 _public_62497a3
#define public_62497ae _public_62497ae

PROC_DECLARE(0x6249790, internal_6249790, public_6249790);
/* CHUNK of public_622efc0 */
extern "C" NAKED register_t __cdecl internal_6249790()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_620c070
        public_6249798 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x5C
        jmp public_620b300
        public_62497a3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x7C
        jmp public_620b300
        public_62497ae : nop
        mov eax, offset public_6252740
        jmp public_6246126
        UNREACHABLE_TRAP(0x6249790)
        ASM_EXPORT_ENTRY_FIRST(0x6249798, public_6249798)
        ASM_EXPORT_ENTRY(0x62497a3, public_62497a3)
        ASM_EXPORT_ENTRY_LAST(0x62497ae, public_62497ae)
    }
}

#undef public_6249798
#undef public_62497a3
#undef public_62497ae

#pragma init_seg(compiler)
extern "C" void const* const public_6249798 = __AsmFindLabelExport(&internal_6249790, 0x6249798);
extern "C" void const* const public_62497a3 = __AsmFindLabelExport(&internal_6249790, 0x62497a3);
extern "C" void const* const public_62497ae = __AsmFindLabelExport(&internal_6249790, 0x62497ae);
