#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6facac8 _public_6facac8
#define public_6facad3 _public_6facad3
#define public_6facadb _public_6facadb

PROC_DECLARE(0x6facac0, internal_6facac0, public_6facac0);
/* CHUNK of public_6f00200 */
extern "C" NAKED register_t __cdecl internal_6facac0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6f28e10
        public_6facac8 : nop
        mov ecx, dword ptr ss : [ebp-0x18]
        add ecx, 0x50
        jmp public_6eec8d0
        public_6facad3 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6f15350
        public_6facadb : nop
        mov eax, offset public_6fc176c
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6facac0)
        ASM_EXPORT_ENTRY_FIRST(0x6facac8, public_6facac8)
        ASM_EXPORT_ENTRY(0x6facad3, public_6facad3)
        ASM_EXPORT_ENTRY_LAST(0x6facadb, public_6facadb)
    }
}

#undef public_6facac8
#undef public_6facad3
#undef public_6facadb

#pragma init_seg(compiler)
extern "C" void const* const public_6facac8 = __AsmFindLabelExport(&internal_6facac0, 0x6facac8);
extern "C" void const* const public_6facad3 = __AsmFindLabelExport(&internal_6facac0, 0x6facad3);
extern "C" void const* const public_6facadb = __AsmFindLabelExport(&internal_6facac0, 0x6facadb);
