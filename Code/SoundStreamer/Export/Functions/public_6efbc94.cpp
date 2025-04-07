#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef429e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4afd);

#define public_6efbc9c _public_6efbc9c

PROC_DECLARE(0x6efbc94, internal_6efbc94, public_6efbc94);
/* CHUNK of public_6ef403c */
extern "C" NAKED register_t __cdecl internal_6efbc94()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x20]
        jmp public_6ef429e
        public_6efbc9c : nop
        mov eax, offset public_6efcbd0
        jmp public_6ef4afd
        UNREACHABLE_TRAP(0x6efbc94)
        ASM_EXPORT_ENTRY_SINGLE(0x6efbc9c, public_6efbc9c)
    }
}

#undef public_6efbc9c

#pragma init_seg(compiler)
extern "C" void const* const public_6efbc9c = __AsmFindLabelExport(&internal_6efbc94, 0x6efbc9c);
