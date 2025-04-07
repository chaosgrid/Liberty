#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63939b8 _public_63939b8
#define public_63939c3 _public_63939c3
#define public_63939ce _public_63939ce
#define public_63939d6 _public_63939d6
#define public_63939e4 _public_63939e4

PROC_DECLARE(0x63939b0, internal_63939b0, public_63939b0);
/* CHUNK of public_629d530 */
extern "C" NAKED register_t __cdecl internal_63939b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627cae0
        public_63939b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6269110
        public_63939c3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x78
        jmp public_62a68e0
        public_63939ce : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62af440
        public_63939d6 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp public_6280b30
        public_63939e4 : nop
        mov eax, offset public_63accc4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63939b0)
        ASM_EXPORT_ENTRY_FIRST(0x63939b8, public_63939b8)
        ASM_EXPORT_ENTRY(0x63939c3, public_63939c3)
        ASM_EXPORT_ENTRY(0x63939ce, public_63939ce)
        ASM_EXPORT_ENTRY(0x63939d6, public_63939d6)
        ASM_EXPORT_ENTRY_LAST(0x63939e4, public_63939e4)
    }
}

#undef public_63939b8
#undef public_63939c3
#undef public_63939ce
#undef public_63939d6
#undef public_63939e4

#pragma init_seg(compiler)
extern "C" void const* const public_63939b8 = __AsmFindLabelExport(&internal_63939b0, 0x63939b8);
extern "C" void const* const public_63939c3 = __AsmFindLabelExport(&internal_63939b0, 0x63939c3);
extern "C" void const* const public_63939ce = __AsmFindLabelExport(&internal_63939b0, 0x63939ce);
extern "C" void const* const public_63939d6 = __AsmFindLabelExport(&internal_63939b0, 0x63939d6);
extern "C" void const* const public_63939e4 = __AsmFindLabelExport(&internal_63939b0, 0x63939e4);
