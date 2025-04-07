#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33090);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58768 _public_6f58768

PROC_DECLARE(0x6f58760, internal_6f58760, public_6f58760);
/* CHUNK of public_6f2fd30 */
extern "C" NAKED register_t __cdecl internal_6f58760()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f33090
        public_6f58768 : nop
        mov eax, offset public_6f5b8dc
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58760)
        ASM_EXPORT_ENTRY_SINGLE(0x6f58768, public_6f58768)
    }
}

#undef public_6f58768

#pragma init_seg(compiler)
extern "C" void const* const public_6f58768 = __AsmFindLabelExport(&internal_6f58760, 0x6f58768);
