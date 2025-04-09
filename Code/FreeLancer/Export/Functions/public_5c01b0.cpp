#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5394b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c01bb _public_5c01bb
#define public_5c01c6 _public_5c01c6

PROC_DECLARE(0x5c01b0, internal_5c01b0, public_5c01b0);
/* CHUNK of public_526650 */
extern "C" NAKED register_t __cdecl internal_5c01b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, dword ptr ss : [ebp-0x2C]
        push eax
        call public_5b7e1d
        pop ecx
        ret 
        public_5c01bb : nop
        mov ecx, dword ptr ss : [ebp-0x2C]
        add ecx, 0xC
        jmp public_5394b0
        public_5c01c6 : nop
        mov eax, offset public_5fa188
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c01b0)
        ASM_EXPORT_ENTRY_FIRST(0x5c01bb, public_5c01bb)
        ASM_EXPORT_ENTRY_LAST(0x5c01c6, public_5c01c6)
    }
}

#undef public_5c01bb
#undef public_5c01c6

#pragma init_seg(compiler)
extern "C" void const* const public_5c01bb = __AsmFindLabelExport(&internal_5c01b0, 0x5c01bb);
extern "C" void const* const public_5c01c6 = __AsmFindLabelExport(&internal_5c01b0, 0x5c01c6);
