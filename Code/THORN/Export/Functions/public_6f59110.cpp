#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f405e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a800);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f59118 _public_6f59118
#define public_6f59126 _public_6f59126

PROC_DECLARE(0x6f59110, internal_6f59110, public_6f59110);
/* CHUNK of public_6f42300 */
extern "C" NAKED register_t __cdecl internal_6f59110()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6f405e0
        public_6f59118 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xE8
        jmp public_6f4a800
        public_6f59126 : nop
        mov eax, offset public_6f5c2dc
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f59110)
        ASM_EXPORT_ENTRY_FIRST(0x6f59118, public_6f59118)
        ASM_EXPORT_ENTRY_LAST(0x6f59126, public_6f59126)
    }
}

#undef public_6f59118
#undef public_6f59126

#pragma init_seg(compiler)
extern "C" void const* const public_6f59118 = __AsmFindLabelExport(&internal_6f59110, 0x6f59118);
extern "C" void const* const public_6f59126 = __AsmFindLabelExport(&internal_6f59110, 0x6f59126);
