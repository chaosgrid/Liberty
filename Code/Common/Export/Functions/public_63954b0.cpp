#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f0120);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63954bb _public_63954bb

PROC_DECLARE(0x63954b0, internal_63954b0, public_63954b0);
/* CHUNK of public_62f01f0 */
extern "C" NAKED register_t __cdecl internal_63954b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x48
        jmp public_62f0120
        public_63954bb : nop
        mov eax, offset public_63aef88
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63954b0)
        ASM_EXPORT_ENTRY_SINGLE(0x63954bb, public_63954bb)
    }
}

#undef public_63954bb

#pragma init_seg(compiler)
extern "C" void const* const public_63954bb = __AsmFindLabelExport(&internal_63954b0, 0x63954bb);
