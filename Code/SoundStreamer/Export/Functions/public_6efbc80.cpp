#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4afd);
CLANG_FORWARD_PROC_SYMBOL(public_6ef51d1);

#define public_6efbc88 _public_6efbc88

PROC_DECLARE(0x6efbc80, internal_6efbc80, public_6efbc80);
/* CHUNK of public_6ef4140 */
extern "C" NAKED register_t __cdecl internal_6efbc80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6ef51d1
        public_6efbc88 : nop
        mov eax, offset public_6efcb18
        jmp public_6ef4afd
        UNREACHABLE_TRAP(0x6efbc80)
        ASM_EXPORT_ENTRY_SINGLE(0x6efbc88, public_6efbc88)
    }
}

#undef public_6efbc88

#pragma init_seg(compiler)
extern "C" void const* const public_6efbc88 = __AsmFindLabelExport(&internal_6efbc80, 0x6efbc88);
