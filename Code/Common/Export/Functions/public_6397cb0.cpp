#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_634b6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6397cb8 _public_6397cb8
#define public_6397cc3 _public_6397cc3
#define public_6397cce _public_6397cce
#define public_6397cd9 _public_6397cd9
#define public_6397ce4 _public_6397ce4

PROC_DECLARE(0x6397cb0, internal_6397cb0, public_6397cb0);
/* CHUNK of public_634b710 */
extern "C" NAKED register_t __cdecl internal_6397cb0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_634b6a0
        public_6397cb8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_634b6a0
        public_6397cc3 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_634b6a0
        public_6397cce : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_63449d0
        public_6397cd9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x2C
        jmp public_63449d0
        public_6397ce4 : nop
        mov eax, offset public_63b2058
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397cb0)
        ASM_EXPORT_ENTRY_FIRST(0x6397cb8, public_6397cb8)
        ASM_EXPORT_ENTRY(0x6397cc3, public_6397cc3)
        ASM_EXPORT_ENTRY(0x6397cce, public_6397cce)
        ASM_EXPORT_ENTRY(0x6397cd9, public_6397cd9)
        ASM_EXPORT_ENTRY_LAST(0x6397ce4, public_6397ce4)
    }
}

#undef public_6397cb8
#undef public_6397cc3
#undef public_6397cce
#undef public_6397cd9
#undef public_6397ce4

#pragma init_seg(compiler)
extern "C" void const* const public_6397cb8 = __AsmFindLabelExport(&internal_6397cb0, 0x6397cb8);
extern "C" void const* const public_6397cc3 = __AsmFindLabelExport(&internal_6397cb0, 0x6397cc3);
extern "C" void const* const public_6397cce = __AsmFindLabelExport(&internal_6397cb0, 0x6397cce);
extern "C" void const* const public_6397cd9 = __AsmFindLabelExport(&internal_6397cb0, 0x6397cd9);
extern "C" void const* const public_6397ce4 = __AsmFindLabelExport(&internal_6397cb0, 0x6397ce4);
