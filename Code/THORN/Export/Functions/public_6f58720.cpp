#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33090);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58728 _public_6f58728

PROC_DECLARE(0x6f58720, internal_6f58720, public_6f58720);
/* CHUNK of public_6f2fbf0 */
extern "C" NAKED register_t __cdecl internal_6f58720()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f33090
        public_6f58728 : nop
        mov eax, offset public_6f5b894
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58720)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58728, public_6f58728)
    }
}

#undef public_6f58728

#pragma init_seg(compiler)
extern "C" void const* const public_6f58728 = __AsmFindLabelExport(&internal_6f58720, 0x6f58728);
