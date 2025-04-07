#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc790);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a398 _public_6c0a398

PROC_DECLARE(0x6c0a390, internal_6c0a390, public_6c0a390);
/* CHUNK of public_6bd7450 */
extern "C" NAKED register_t __cdecl internal_6c0a390()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp public_6bdc790
        public_6c0a398 : nop
        mov eax, offset public_6c0ea5c
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a390)
        ASM_EXPORT_ENTRY_SINGLE(0x6c0a398, public_6c0a398)
    }
}

#undef public_6c0a398

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a398 = __AsmFindLabelExport(&internal_6c0a390, 0x6c0a398);
