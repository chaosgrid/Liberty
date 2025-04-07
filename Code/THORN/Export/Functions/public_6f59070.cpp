#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a890);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a8b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59078 _public_6f59078
#define public_6f59086 _public_6f59086
#define public_6f59094 _public_6f59094

PROC_DECLARE(0x6f59070, internal_6f59070, public_6f59070);
/* CHUNK of public_6f41960 */
extern "C" NAKED register_t __cdecl internal_6f59070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f59078 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x158
        jmp public_6f4a890
        public_6f59086 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x15C
        jmp public_6f4a8b0
        public_6f59094 : nop
        mov eax, offset public_6f5c22c
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59070)
        ASM_EXPORT_ENTRY_FIRST(0x6f59078, public_6f59078)
        ASM_EXPORT_ENTRY(0x6f59086, public_6f59086)
        ASM_EXPORT_ENTRY_LAST(0x6f59094, public_6f59094)
    }
}

#undef public_6f59078
#undef public_6f59086
#undef public_6f59094

#pragma init_seg(compiler)
extern "C" void const* const public_6f59078 = __AsmFindLabelExport(&internal_6f59070, 0x6f59078);
extern "C" void const* const public_6f59086 = __AsmFindLabelExport(&internal_6f59070, 0x6f59086);
extern "C" void const* const public_6f59094 = __AsmFindLabelExport(&internal_6f59070, 0x6f59094);
