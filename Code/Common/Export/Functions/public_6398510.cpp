#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634dd60);
CLANG_FORWARD_PROC_SYMBOL(public_6360dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6398518 _public_6398518
#define public_6398526 _public_6398526

PROC_DECLARE(0x6398510, internal_6398510, public_6398510);
/* CHUNK of public_6362ab0 */
extern "C" NAKED register_t __cdecl internal_6398510()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x1C]
        jmp public_634dd60
        public_6398518 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        add ecx, 0x80
        jmp public_6360dc0
        public_6398526 : nop
        mov eax, offset public_63b2b50
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398510)
        ASM_EXPORT_ENTRY_FIRST(0x6398518, public_6398518)
        ASM_EXPORT_ENTRY_LAST(0x6398526, public_6398526)
    }
}

#undef public_6398518
#undef public_6398526

#pragma init_seg(compiler)
extern "C" void const* const public_6398518 = __AsmFindLabelExport(&internal_6398510, 0x6398518);
extern "C" void const* const public_6398526 = __AsmFindLabelExport(&internal_6398510, 0x6398526);
