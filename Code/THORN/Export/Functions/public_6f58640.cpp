#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2d2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58648 _public_6f58648

PROC_DECLARE(0x6f58640, internal_6f58640, public_6f58640);
/* CHUNK of public_6f2c9a0 */
extern "C" NAKED register_t __cdecl internal_6f58640()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f2d2c0
        public_6f58648 : nop
        mov eax, offset public_6f5b780
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58640)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58648, public_6f58648)
    }
}

#undef public_6f58648

#pragma init_seg(compiler)
extern "C" void const* const public_6f58648 = __AsmFindLabelExport(&internal_6f58640, 0x6f58648);
