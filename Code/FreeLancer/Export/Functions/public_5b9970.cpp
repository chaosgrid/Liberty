#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_457dc0);
CLANG_FORWARD_PROC_SYMBOL(public_5594b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b9978 _public_5b9978
#define public_5b9983 _public_5b9983

PROC_DECLARE(0x5b9970, internal_5b9970, public_5b9970);
/* CHUNK of public_446ef0 */
extern "C" NAKED register_t __cdecl internal_5b9970()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_5594b0
        public_5b9978 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x74
        jmp public_457dc0
        public_5b9983 : nop
        mov eax, offset public_5f39d8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9970)
        ASM_EXPORT_ENTRY_FIRST(0x5b9978, public_5b9978)
        ASM_EXPORT_ENTRY_LAST(0x5b9983, public_5b9983)
    }
}

#undef public_5b9978
#undef public_5b9983

#pragma init_seg(compiler)
extern "C" void const* const public_5b9978 = __AsmFindLabelExport(&internal_5b9970, 0x5b9978);
extern "C" void const* const public_5b9983 = __AsmFindLabelExport(&internal_5b9970, 0x5b9983);
