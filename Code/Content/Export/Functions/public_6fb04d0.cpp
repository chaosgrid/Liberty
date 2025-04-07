#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef38e0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb04db _public_6fb04db
#define public_6fb04e6 _public_6fb04e6

PROC_DECLARE(0x6fb04d0, internal_6fb04d0, public_6fb04d0);
/* CHUNK of public_6f79100 */
extern "C" NAKED register_t __cdecl internal_6fb04d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x18
        jmp public_6ef38e0
        public_6fb04db : nop
        mov ecx, dword ptr ss : [ebp+4]
        add ecx, 0x2C
        jmp public_6ef6640
        public_6fb04e6 : nop
        mov eax, offset public_6fc57a0
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb04d0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb04db, public_6fb04db)
        ASM_EXPORT_ENTRY_LAST(0x6fb04e6, public_6fb04e6)
    }
}

#undef public_6fb04db
#undef public_6fb04e6

#pragma init_seg(compiler)
extern "C" void const* const public_6fb04db = __AsmFindLabelExport(&internal_6fb04d0, 0x6fb04db);
extern "C" void const* const public_6fb04e6 = __AsmFindLabelExport(&internal_6fb04d0, 0x6fb04e6);
