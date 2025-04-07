#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cfd0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8d4b _public_5b8d4b
#define public_5b8d56 _public_5b8d56

PROC_DECLARE(0x5b8d40, internal_5b8d40, public_5b8d40);
/* CHUNK of public_42d0c0 */
extern "C" NAKED register_t __cdecl internal_5b8d40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_42cfd0
        public_5b8d4b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x24
        jmp public_42cfd0
        public_5b8d56 : nop
        mov eax, offset public_5f2c00
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8d40)
        ASM_EXPORT_ENTRY_FIRST(0x5b8d4b, public_5b8d4b)
        ASM_EXPORT_ENTRY_LAST(0x5b8d56, public_5b8d56)
    }
}

#undef public_5b8d4b
#undef public_5b8d56

#pragma init_seg(compiler)
extern "C" void const* const public_5b8d4b = __AsmFindLabelExport(&internal_5b8d40, 0x5b8d4b);
extern "C" void const* const public_5b8d56 = __AsmFindLabelExport(&internal_5b8d40, 0x5b8d56);
