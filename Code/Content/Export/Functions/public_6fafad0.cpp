#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fafadb _public_6fafadb
#define public_6fafae6 _public_6fafae6
#define public_6fafaf4 _public_6fafaf4

PROC_DECLARE(0x6fafad0, internal_6fafad0, public_6fafad0);
/* CHUNK of public_6f607e0 */
extern "C" NAKED register_t __cdecl internal_6fafad0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0xDC]
        jmp public_6f28e10
        public_6fafadb : nop
        lea ecx, ss:[ebp-0xDC]
        jmp public_6f28e10
        public_6fafae6 : nop
        mov eax, dword ptr ss : [ebp-0xE0]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fafaf4 : nop
        mov eax, offset public_6fc4b28
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fafad0)
        ASM_EXPORT_ENTRY_FIRST(0x6fafadb, public_6fafadb)
        ASM_EXPORT_ENTRY(0x6fafae6, public_6fafae6)
        ASM_EXPORT_ENTRY_LAST(0x6fafaf4, public_6fafaf4)
    }
}

#undef public_6fafadb
#undef public_6fafae6
#undef public_6fafaf4

#pragma init_seg(compiler)
extern "C" void const* const public_6fafadb = __AsmFindLabelExport(&internal_6fafad0, 0x6fafadb);
extern "C" void const* const public_6fafae6 = __AsmFindLabelExport(&internal_6fafad0, 0x6fafae6);
extern "C" void const* const public_6fafaf4 = __AsmFindLabelExport(&internal_6fafad0, 0x6fafaf4);
