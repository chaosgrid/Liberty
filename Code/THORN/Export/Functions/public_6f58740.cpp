#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33090);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58748 _public_6f58748

PROC_DECLARE(0x6f58740, internal_6f58740, public_6f58740);
/* CHUNK of public_6f2fc90 */
extern "C" NAKED register_t __cdecl internal_6f58740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f33090
        public_6f58748 : nop
        mov eax, offset public_6f5b8b8
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58740)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58748, public_6f58748)
    }
}

#undef public_6f58748

#pragma init_seg(compiler)
extern "C" void const* const public_6f58748 = __AsmFindLabelExport(&internal_6f58740, 0x6f58748);
