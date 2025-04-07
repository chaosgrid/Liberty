#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262090);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63924bb _public_63924bb

PROC_DECLARE(0x63924b0, internal_63924b0, public_63924b0);
/* CHUNK of public_6261de0 */
extern "C" NAKED register_t __cdecl internal_63924b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_6262090
        public_63924bb : nop
        mov eax, offset public_63ab000
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63924b0)
        ASM_EXPORT_ENTRY_SINGLE(0x63924bb, public_63924bb)
    }
}

#undef public_63924bb

#pragma init_seg(compiler)
extern "C" void const* const public_63924bb = __AsmFindLabelExport(&internal_63924b0, 0x63924bb);
