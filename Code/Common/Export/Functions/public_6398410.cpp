#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639841b _public_639841b
#define public_6398426 _public_6398426

PROC_DECLARE(0x6398410, internal_6398410, public_6398410);
/* CHUNK of public_63616e0 */
extern "C" NAKED register_t __cdecl internal_6398410()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_63449d0
        public_639841b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x18
        jmp public_63449d0
        public_6398426 : nop
        mov eax, offset public_63b2910
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398410)
        ASM_EXPORT_ENTRY_FIRST(0x639841b, public_639841b)
        ASM_EXPORT_ENTRY_LAST(0x6398426, public_6398426)
    }
}

#undef public_639841b
#undef public_6398426

#pragma init_seg(compiler)
extern "C" void const* const public_639841b = __AsmFindLabelExport(&internal_6398410, 0x639841b);
extern "C" void const* const public_6398426 = __AsmFindLabelExport(&internal_6398410, 0x6398426);
