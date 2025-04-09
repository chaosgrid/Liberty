#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_444ee0);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5a1af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd0e8 _public_5bd0e8
#define public_5bd0f6 _public_5bd0f6
#define public_5bd101 _public_5bd101
#define public_5bd109 _public_5bd109
#define public_5bd114 _public_5bd114

PROC_DECLARE(0x5bd0e0, internal_5bd0e0, public_5bd0e0);
/* CHUNK of public_4b5340 */
extern "C" NAKED register_t __cdecl internal_5bd0e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_5a1af0
        public_5bd0e8 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0xEC
        jmp public_444ee0
        public_5bd0f6 : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        add ecx, 8
        jmp public_444e20
        public_5bd101 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_444e20
        public_5bd109 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_445d70
        public_5bd114 : nop
        mov eax, offset public_5f7394
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd0e0)
        ASM_EXPORT_ENTRY_FIRST(0x5bd0e8, public_5bd0e8)
        ASM_EXPORT_ENTRY(0x5bd0f6, public_5bd0f6)
        ASM_EXPORT_ENTRY(0x5bd101, public_5bd101)
        ASM_EXPORT_ENTRY(0x5bd109, public_5bd109)
        ASM_EXPORT_ENTRY_LAST(0x5bd114, public_5bd114)
    }
}

#undef public_5bd0e8
#undef public_5bd0f6
#undef public_5bd101
#undef public_5bd109
#undef public_5bd114

#pragma init_seg(compiler)
extern "C" void const* const public_5bd0e8 = __AsmFindLabelExport(&internal_5bd0e0, 0x5bd0e8);
extern "C" void const* const public_5bd0f6 = __AsmFindLabelExport(&internal_5bd0e0, 0x5bd0f6);
extern "C" void const* const public_5bd101 = __AsmFindLabelExport(&internal_5bd0e0, 0x5bd101);
extern "C" void const* const public_5bd109 = __AsmFindLabelExport(&internal_5bd0e0, 0x5bd109);
extern "C" void const* const public_5bd114 = __AsmFindLabelExport(&internal_5bd0e0, 0x5bd114);
