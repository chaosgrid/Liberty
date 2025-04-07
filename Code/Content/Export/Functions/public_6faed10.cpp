#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faed18 _public_6faed18

PROC_DECLARE(0x6faed10, internal_6faed10, public_6faed10);
/* CHUNK of public_6f36d80 */
extern "C" NAKED register_t __cdecl internal_6faed10()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6faed18 : nop
        mov eax, offset public_6fc3cac
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faed10)
        ASM_EXPORT_ENTRY_SINGLE(0x6faed18, public_6faed18)
    }
}

#undef public_6faed18

#pragma init_seg(compiler)
extern "C" void const* const public_6faed18 = __AsmFindLabelExport(&internal_6faed10, 0x6faed18);
