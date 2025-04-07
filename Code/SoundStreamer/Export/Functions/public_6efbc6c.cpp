#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4afd);
CLANG_FORWARD_PROC_SYMBOL(public_6ef51d1);

#define public_6efbc74 _public_6efbc74

PROC_DECLARE(0x6efbc6c, internal_6efbc6c, public_6efbc6c);
/* CHUNK of public_6ef4096 */
extern "C" NAKED register_t __cdecl internal_6efbc6c()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_6ef51d1
        public_6efbc74 : nop
        mov eax, offset public_6efcad0
        jmp public_6ef4afd
        UNREACHABLE_TRAP(0x6efbc6c)
        ASM_EXPORT_ENTRY_SINGLE(0x6efbc74, public_6efbc74)
    }
}

#undef public_6efbc74

#pragma init_seg(compiler)
extern "C" void const* const public_6efbc74 = __AsmFindLabelExport(&internal_6efbc6c, 0x6efbc74);
