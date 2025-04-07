#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63449d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639816b _public_639816b
#define public_6398176 _public_6398176

PROC_DECLARE(0x6398160, internal_6398160, public_6398160);
/* CHUNK of public_6358b00 */
extern "C" NAKED register_t __cdecl internal_6398160()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 8
        jmp public_63449d0
        public_639816b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_63449d0
        public_6398176 : nop
        mov eax, offset public_63b25a8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6398160)
        ASM_EXPORT_ENTRY_FIRST(0x639816b, public_639816b)
        ASM_EXPORT_ENTRY_LAST(0x6398176, public_6398176)
    }
}

#undef public_639816b
#undef public_6398176

#pragma init_seg(compiler)
extern "C" void const* const public_639816b = __AsmFindLabelExport(&internal_6398160, 0x639816b);
extern "C" void const* const public_6398176 = __AsmFindLabelExport(&internal_6398160, 0x6398176);
