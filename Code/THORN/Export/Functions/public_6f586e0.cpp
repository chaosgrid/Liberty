#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2efd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f30cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f586eb _public_6f586eb
#define public_6f586f6 _public_6f586f6

PROC_DECLARE(0x6f586e0, internal_6f586e0, public_6f586e0);
/* CHUNK of public_6f2f090 */
extern "C" NAKED register_t __cdecl internal_6f586e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 4
        jmp public_6f30cd0
        public_6f586eb : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x10
        jmp public_6f2efd0
        public_6f586f6 : nop
        mov eax, offset public_6f5b844
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f586e0)
        ASM_EXPORT_ENTRY_FIRST(0x6f586eb, public_6f586eb)
        ASM_EXPORT_ENTRY_LAST(0x6f586f6, public_6f586f6)
    }
}

#undef public_6f586eb
#undef public_6f586f6

#pragma init_seg(compiler)
extern "C" void const* const public_6f586eb = __AsmFindLabelExport(&internal_6f586e0, 0x6f586eb);
extern "C" void const* const public_6f586f6 = __AsmFindLabelExport(&internal_6f586e0, 0x6f586f6);
