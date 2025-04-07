#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3731f);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cd86);

#define public_6d5d155 _public_6d5d155

PROC_DECLARE(0x6d5d14d, internal_6d5d14d, public_6d5d14d);
/* CHUNK of public_6d3bdbc */
extern "C" NAKED register_t __cdecl internal_6d5d14d()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_6d3731f
        public_6d5d155 : nop
        mov eax, offset public_6d62bb4
        jmp public_6d5cd86
        UNREACHABLE_TRAP(0x6d5d14d)
        ASM_EXPORT_ENTRY_SINGLE(0x6d5d155, public_6d5d155)
    }
}

#undef public_6d5d155

#pragma init_seg(compiler)
extern "C" void const* const public_6d5d155 = __AsmFindLabelExport(&internal_6d5d14d, 0x6d5d155);
