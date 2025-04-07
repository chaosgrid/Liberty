#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed37d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f28e10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fadedb _public_6fadedb
#define public_6fadee6 _public_6fadee6

PROC_DECLARE(0x6faded0, internal_6faded0, public_6faded0);
/* CHUNK of public_6f228c0 */
extern "C" NAKED register_t __cdecl internal_6faded0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x30
        jmp public_6ed37d0
        public_6fadedb : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x3C
        jmp public_6f28e10
        public_6fadee6 : nop
        mov eax, offset public_6fc2e78
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faded0)
        ASM_EXPORT_ENTRY_FIRST(0x6fadedb, public_6fadedb)
        ASM_EXPORT_ENTRY_LAST(0x6fadee6, public_6fadee6)
    }
}

#undef public_6fadedb
#undef public_6fadee6

#pragma init_seg(compiler)
extern "C" void const* const public_6fadedb = __AsmFindLabelExport(&internal_6faded0, 0x6fadedb);
extern "C" void const* const public_6fadee6 = __AsmFindLabelExport(&internal_6faded0, 0x6fadee6);
