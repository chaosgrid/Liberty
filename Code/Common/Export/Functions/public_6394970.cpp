#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bf140);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_639497b _public_639497b

PROC_DECLARE(0x6394970, internal_6394970, public_6394970);
/* CHUNK of public_62bf070 */
extern "C" NAKED register_t __cdecl internal_6394970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        sub ecx, 0xC
        jmp public_62bf140
        public_639497b : nop
        mov eax, offset public_63adfac
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6394970)
        ASM_EXPORT_ENTRY_SINGLE(0x639497b, public_639497b)
    }
}

#undef public_639497b

#pragma init_seg(compiler)
extern "C" void const* const public_639497b = __AsmFindLabelExport(&internal_6394970, 0x639497b);
