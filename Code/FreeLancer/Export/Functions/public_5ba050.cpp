#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5ba058 _public_5ba058
#define public_5ba063 _public_5ba063

PROC_DECLARE(0x5ba050, internal_5ba050, public_5ba050);
/* CHUNK of public_456350 */
extern "C" NAKED register_t __cdecl internal_5ba050()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        jmp public_576010
        public_5ba058 : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_4a2d30
        public_5ba063 : nop
        mov eax, offset public_5f4394
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5ba050)
        ASM_EXPORT_ENTRY_FIRST(0x5ba058, public_5ba058)
        ASM_EXPORT_ENTRY_LAST(0x5ba063, public_5ba063)
    }
}

#undef public_5ba058
#undef public_5ba063

#pragma init_seg(compiler)
extern "C" void const* const public_5ba058 = __AsmFindLabelExport(&internal_5ba050, 0x5ba058);
extern "C" void const* const public_5ba063 = __AsmFindLabelExport(&internal_5ba050, 0x5ba063);
