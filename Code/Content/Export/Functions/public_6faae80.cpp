#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec44c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faae88 _public_6faae88

PROC_DECLARE(0x6faae80, internal_6faae80, public_6faae80);
/* CHUNK of public_6ec42a0 */
extern "C" NAKED register_t __cdecl internal_6faae80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ec44c0
        public_6faae88 : nop
        mov eax, offset public_6fbeff8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faae80)
        ASM_EXPORT_ENTRY_SINGLE(0x6faae88, public_6faae88)
    }
}

#undef public_6faae88

#pragma init_seg(compiler)
extern "C" void const* const public_6faae88 = __AsmFindLabelExport(&internal_6faae80, 0x6faae88);
