#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_59fa50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcc58 _public_5bcc58

PROC_DECLARE(0x5bcc50, internal_5bcc50, public_5bcc50);
/* CHUNK of public_4a6140 */
extern "C" NAKED register_t __cdecl internal_5bcc50()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_59fa50
        public_5bcc58 : nop
        mov eax, offset public_5f6f00
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcc50)
        ASM_EXPORT_ENTRY_SINGLE(0x5bcc58, public_5bcc58)
    }
}

#undef public_5bcc58

#pragma init_seg(compiler)
extern "C" void const* const public_5bcc58 = __AsmFindLabelExport(&internal_5bcc50, 0x5bcc58);
