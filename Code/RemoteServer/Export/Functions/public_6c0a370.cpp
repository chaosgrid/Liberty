#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a378 _public_6c0a378

PROC_DECLARE(0x6c0a370, internal_6c0a370, public_6c0a370);
/* CHUNK of public_6bd7300 */
extern "C" NAKED register_t __cdecl internal_6c0a370()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6bdc790
        public_6c0a378 : nop
        mov eax, offset public_6c0ea38
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a370)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a378, public_6c0a378)
    }
}

#undef public_6c0a378

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a378 = __AsmFindLabelExport(&internal_6c0a370, 0x6c0a378);
