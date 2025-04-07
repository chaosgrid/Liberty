#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1f90);

#define public_6db22ec _public_6db22ec
#define public_6db22fb _public_6db22fb

PROC_DECLARE(0x6db22e0, internal_6db22e0, public_6db22e0);
/* CHUNK of public_6d84230 */
extern "C" NAKED register_t __cdecl internal_6db22e0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x70
        jmp dword ptr ds : [public_6db3020]
        public_6db22ec : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 0x80
        jmp dword ptr ds : [public_6db3018]
        public_6db22fb : nop
        mov eax, offset public_6db6a08
        jmp public_6db1f90
        UNREACHABLE_TRAP(0x6db22e0)
        ASM_EXPORT_ENTRY_FIRST(0x6db22ec, public_6db22ec)
        ASM_EXPORT_ENTRY_LAST(0x6db22fb, public_6db22fb)
    }
}

#undef public_6db22ec
#undef public_6db22fb

#pragma init_seg(compiler)
extern "C" void const* const public_6db22ec = __AsmFindLabelExport(&internal_6db22e0, 0x6db22ec);
extern "C" void const* const public_6db22fb = __AsmFindLabelExport(&internal_6db22e0, 0x6db22fb);
