#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6394a08 _public_6394a08

PROC_DECLARE(0x6394a00, internal_6394a00, public_6394a00);
/* CHUNK of public_62c2920 */
extern "C" NAKED register_t __cdecl internal_6394a00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62881d0
        public_6394a08 : nop
        mov eax, offset public_63ae038
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394a00)
        ASM_EXPORT_ENTRY_SINGLE(0x6394a08, public_6394a08)
    }
}

#undef public_6394a08

#pragma init_seg(compiler)
extern "C" void const* const public_6394a08 = __AsmFindLabelExport(&internal_6394a00, 0x6394a08);
