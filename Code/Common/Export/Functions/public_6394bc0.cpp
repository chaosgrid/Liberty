#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2080);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394bc8 _public_6394bc8

PROC_DECLARE(0x6394bc0, internal_6394bc0, public_6394bc0);
/* CHUNK of public_62c7020 */
extern "C" NAKED register_t __cdecl internal_6394bc0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62d2080
        public_6394bc8 : nop
        mov eax, offset public_63ae218
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394bc0)
        ASM_EXPORT_ENTRY_SINGLE(0x6394bc8, public_6394bc8)
    }
}

#undef public_6394bc8

#pragma init_seg(compiler)
extern "C" void const* const public_6394bc8 = __AsmFindLabelExport(&internal_6394bc0, 0x6394bc8);
