#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b988b _public_5b988b
#define public_5b9893 _public_5b9893
#define public_5b989e _public_5b989e

PROC_DECLARE(0x5b9880, internal_5b9880, public_5b9880);
/* CHUNK of public_444ee0 */
extern "C" NAKED register_t __cdecl internal_5b9880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x14]
        add ecx, 8
        jmp public_444e20
        public_5b988b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_444e20
        public_5b9893 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_445d70
        public_5b989e : nop
        mov eax, offset public_5f38dc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b9880)
        ASM_EXPORT_ENTRY_FIRST(0x5b988b, public_5b988b)
        ASM_EXPORT_ENTRY(0x5b9893, public_5b9893)
        ASM_EXPORT_ENTRY_LAST(0x5b989e, public_5b989e)
    }
}

#undef public_5b988b
#undef public_5b9893
#undef public_5b989e

#pragma init_seg(compiler)
extern "C" void const* const public_5b988b = __AsmFindLabelExport(&internal_5b9880, 0x5b988b);
extern "C" void const* const public_5b9893 = __AsmFindLabelExport(&internal_5b9880, 0x5b9893);
extern "C" void const* const public_5b989e = __AsmFindLabelExport(&internal_5b9880, 0x5b989e);
