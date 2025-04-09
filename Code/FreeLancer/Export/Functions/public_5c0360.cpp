#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_52a250);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c036b _public_5c036b
#define public_5c0373 _public_5c0373
#define public_5c037e _public_5c037e

PROC_DECLARE(0x5c0360, internal_5c0360, public_5c0360);
/* CHUNK of public_52a280 */
extern "C" NAKED register_t __cdecl internal_5c0360()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c036b : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_52a250
        public_5c0373 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_4de730
        public_5c037e : nop
        mov eax, offset public_5fa3d8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0360)
        ASM_EXPORT_ENTRY_FIRST(0x5c036b, public_5c036b)
        ASM_EXPORT_ENTRY(0x5c0373, public_5c0373)
        ASM_EXPORT_ENTRY_LAST(0x5c037e, public_5c037e)
    }
}

#undef public_5c036b
#undef public_5c0373
#undef public_5c037e

#pragma init_seg(compiler)
extern "C" void const* const public_5c036b = __AsmFindLabelExport(&internal_5c0360, 0x5c036b);
extern "C" void const* const public_5c0373 = __AsmFindLabelExport(&internal_5c0360, 0x5c0373);
extern "C" void const* const public_5c037e = __AsmFindLabelExport(&internal_5c0360, 0x5c037e);
