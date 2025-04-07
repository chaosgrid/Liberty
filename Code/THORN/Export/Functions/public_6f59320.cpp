#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f439a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59328 _public_6f59328

PROC_DECLARE(0x6f59320, internal_6f59320, public_6f59320);
/* CHUNK of public_6f44dc0 */
extern "C" NAKED register_t __cdecl internal_6f59320()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f439a0
        public_6f59328 : nop
        mov eax, offset public_6f5c4f8
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59320)
        ASM_EXPORT_ENTRY_SINGLE(0x6f59328, public_6f59328)
    }
}

#undef public_6f59328

#pragma init_seg(compiler)
extern "C" void const* const public_6f59328 = __AsmFindLabelExport(&internal_6f59320, 0x6f59328);
