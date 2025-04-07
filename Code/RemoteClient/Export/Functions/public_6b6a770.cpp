#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b39e50);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b810);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a778 _public_6b6a778
#define public_6b6a783 _public_6b6a783

PROC_DECLARE(0x6b6a770, internal_6b6a770, public_6b6a770);
/* CHUNK of public_6b3b0b0 */
extern "C" NAKED register_t __cdecl internal_6b6a770()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_6b39e50
        public_6b6a778 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 8
        jmp public_6b3b810
        public_6b6a783 : nop
        mov eax, offset public_6b6ee48
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a770)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a778, public_6b6a778)
        ASM_EXPORT_ENTRY_LAST(0x6b6a783, public_6b6a783)
    }
}

#undef public_6b6a778
#undef public_6b6a783

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a778 = __AsmFindLabelExport(&internal_6b6a770, 0x6b6a778);
extern "C" void const* const public_6b6a783 = __AsmFindLabelExport(&internal_6b6a770, 0x6b6a783);
