#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63939f8 _public_63939f8

PROC_DECLARE(0x63939f0, internal_63939f0, public_63939f0);
/* CHUNK of public_629d890 */
extern "C" NAKED register_t __cdecl internal_63939f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_62881d0
        public_63939f8 : nop
        mov eax, offset public_63acce8
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63939f0)
        ASM_EXPORT_ENTRY_SINGLE(0x63939f8, public_63939f8)
    }
}

#undef public_63939f8

#pragma init_seg(compiler)
extern "C" void const* const public_63939f8 = __AsmFindLabelExport(&internal_63939f0, 0x63939f8);
