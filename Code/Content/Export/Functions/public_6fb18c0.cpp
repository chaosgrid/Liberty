#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa0330);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6fb18cb _public_6fb18cb
#define public_6fb18d3 _public_6fb18d3

PROC_DECLARE(0x6fb18c0, internal_6fb18c0, public_6fb18c0);
/* CHUNK of public_6f9a700 */
extern "C" NAKED register_t __cdecl internal_6fb18c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x60]
        push eax
        call public_6fa8fe0
        pop ecx
        ret 
        public_6fb18cb : nop
        lea ecx, ss:[ebp-0x5C]
        jmp public_6fa0330
        public_6fb18d3 : nop
        mov eax, offset public_6fc6ed4
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6fb18c0)
        ASM_EXPORT_ENTRY_FIRST(0x6fb18cb, public_6fb18cb)
        ASM_EXPORT_ENTRY_LAST(0x6fb18d3, public_6fb18d3)
    }
}

#undef public_6fb18cb
#undef public_6fb18d3

#pragma init_seg(compiler)
extern "C" void const* const public_6fb18cb = __AsmFindLabelExport(&internal_6fb18c0, 0x6fb18cb);
extern "C" void const* const public_6fb18d3 = __AsmFindLabelExport(&internal_6fb18c0, 0x6fb18d3);
