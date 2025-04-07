#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6361e50);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398478 _public_6398478

PROC_DECLARE(0x6398470, internal_6398470, public_6398470);
/* CHUNK of public_6361e80 */
extern "C" NAKED register_t __cdecl internal_6398470()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x18]
        jmp public_6361e50
        public_6398478 : nop
        mov eax, offset public_63b2a38
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398470)
        ASM_EXPORT_ENTRY_SINGLE(0x6398478, public_6398478)
    }
}

#undef public_6398478

#pragma init_seg(compiler)
extern "C" void const* const public_6398478 = __AsmFindLabelExport(&internal_6398470, 0x6398478);
