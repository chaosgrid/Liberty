#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639510b _public_639510b

PROC_DECLARE(0x6395100, internal_6395100, public_6395100);
/* CHUNK of public_62d2530 */
extern "C" NAKED register_t __cdecl internal_6395100()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_62881d0
        public_639510b : nop
        mov eax, offset public_63aeb1c
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6395100)
        ASM_EXPORT_ENTRY_SINGLE(0x639510b, public_639510b)
    }
}

#undef public_639510b

#pragma init_seg(compiler)
extern "C" void const* const public_639510b = __AsmFindLabelExport(&internal_6395100, 0x639510b);
