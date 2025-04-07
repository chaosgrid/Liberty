#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639750b _public_639750b

PROC_DECLARE(0x6397500, internal_6397500, public_6397500);
/* CHUNK of public_632ee30 */
extern "C" NAKED register_t __cdecl internal_6397500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 4
        jmp public_6269110
        public_639750b : nop
        mov eax, offset public_63b1698
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6397500)
        ASM_EXPORT_ENTRY_SINGLE(0x639750b, public_639750b)
    }
}

#undef public_639750b

#pragma init_seg(compiler)
extern "C" void const* const public_639750b = __AsmFindLabelExport(&internal_6397500, 0x639750b);
