#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631e700);
CLANG_FORWARD_PROC_SYMBOL(public_6336c20);
CLANG_FORWARD_PROC_SYMBOL(public_6336cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6336dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63976d8 _public_63976d8
#define public_63976e3 _public_63976e3
#define public_63976ee _public_63976ee
#define public_63976f9 _public_63976f9

PROC_DECLARE(0x63976d0, internal_63976d0, public_63976d0);
/* CHUNK of public_6336ea0 */
extern "C" NAKED register_t __cdecl internal_63976d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6336c20
        public_63976d8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x14
        jmp public_6336cf0
        public_63976e3 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x28
        jmp public_6336dc0
        public_63976ee : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x3C
        jmp public_631e700
        public_63976f9 : nop
        mov eax, offset public_63b18cc
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63976d0)
        ASM_EXPORT_ENTRY_FIRST(0x63976d8, public_63976d8)
        ASM_EXPORT_ENTRY(0x63976e3, public_63976e3)
        ASM_EXPORT_ENTRY(0x63976ee, public_63976ee)
        ASM_EXPORT_ENTRY_LAST(0x63976f9, public_63976f9)
    }
}

#undef public_63976d8
#undef public_63976e3
#undef public_63976ee
#undef public_63976f9

#pragma init_seg(compiler)
extern "C" void const* const public_63976d8 = __AsmFindLabelExport(&internal_63976d0, 0x63976d8);
extern "C" void const* const public_63976e3 = __AsmFindLabelExport(&internal_63976d0, 0x63976e3);
extern "C" void const* const public_63976ee = __AsmFindLabelExport(&internal_63976d0, 0x63976ee);
extern "C" void const* const public_63976f9 = __AsmFindLabelExport(&internal_63976d0, 0x63976f9);
