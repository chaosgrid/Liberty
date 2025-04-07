#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda1b0);
CLANG_FORWARD_PROC_SYMBOL(public_6be1ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a668 _public_6c0a668
#define public_6c0a673 _public_6c0a673

PROC_DECLARE(0x6c0a660, internal_6c0a660, public_6c0a660);
/* CHUNK of public_6be1380 */
extern "C" NAKED register_t __cdecl internal_6c0a660()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6bda1b0
        public_6c0a668 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 8
        jmp public_6be1ae0
        public_6c0a673 : nop
        mov eax, offset public_6c0ed0c
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a660)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a668, public_6c0a668)
        ASM_EXPORT_ENTRY_LAST(0x6c0a673, public_6c0a673)
    }
}

#undef public_6c0a668
#undef public_6c0a673

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a668 = __AsmFindLabelExport(&internal_6c0a660, 0x6c0a668);
extern "C" void const* const public_6c0a673 = __AsmFindLabelExport(&internal_6c0a660, 0x6c0a673);
