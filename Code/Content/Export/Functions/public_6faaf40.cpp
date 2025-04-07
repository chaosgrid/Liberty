#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8ff2);

#define public_6faaf48 _public_6faaf48

PROC_DECLARE(0x6faaf40, internal_6faaf40, public_6faaf40);
/* CHUNK of public_6ec9b30 */
extern "C" NAKED register_t __cdecl internal_6faaf40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x1C]
        jmp public_6eec8d0
        public_6faaf48 : nop
        mov eax, offset public_6fbf2c8
        jmp public_6fa8ff2
        UNREACHABLE_TRAP(0x6faaf40)
        ASM_EXPORT_ENTRY_SINGLE(0x6faaf48, public_6faaf48)
    }
}

#undef public_6faaf48

#pragma init_seg(compiler)
extern "C" void const* const public_6faaf48 = __AsmFindLabelExport(&internal_6faaf40, 0x6faaf48);
