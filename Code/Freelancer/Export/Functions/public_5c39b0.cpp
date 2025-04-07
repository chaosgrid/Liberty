#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_526a20);
CLANG_FORWARD_PROC_SYMBOL(public_565080);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c39b8 _public_5c39b8
#define public_5c39c3 _public_5c39c3

PROC_DECLARE(0x5c39b0, internal_5c39b0, public_5c39b0);
/* CHUNK of public_565010 */
extern "C" NAKED register_t __cdecl internal_5c39b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_565080
        public_5c39b8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x14
        jmp public_526a20
        public_5c39c3 : nop
        mov eax, offset public_5fd6a4
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c39b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c39b8, public_5c39b8)
        ASM_EXPORT_ENTRY_LAST(0x5c39c3, public_5c39c3)
    }
}

#undef public_5c39b8
#undef public_5c39c3

#pragma init_seg(compiler)
extern "C" void const* const public_5c39b8 = __AsmFindLabelExport(&internal_5c39b0, 0x5c39b8);
extern "C" void const* const public_5c39c3 = __AsmFindLabelExport(&internal_5c39b0, 0x5c39c3);
