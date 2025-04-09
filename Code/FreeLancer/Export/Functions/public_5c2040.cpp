#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4fd0);
CLANG_FORWARD_PROC_SYMBOL(public_576010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c2048 _public_5c2048
#define public_5c2053 _public_5c2053

PROC_DECLARE(0x5c2040, internal_5c2040, public_5c2040);
/* CHUNK of public_5662a0 */
extern "C" NAKED register_t __cdecl internal_5c2040()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_4b4fd0
        public_5c2048 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x7C
        jmp public_576010
        public_5c2053 : nop
        mov eax, offset public_5fc314
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c2040)
        ASM_EXPORT_ENTRY_FIRST(0x5c2048, public_5c2048)
        ASM_EXPORT_ENTRY_LAST(0x5c2053, public_5c2053)
    }
}

#undef public_5c2048
#undef public_5c2053

#pragma init_seg(compiler)
extern "C" void const* const public_5c2048 = __AsmFindLabelExport(&internal_5c2040, 0x5c2048);
extern "C" void const* const public_5c2053 = __AsmFindLabelExport(&internal_5c2040, 0x5c2053);
