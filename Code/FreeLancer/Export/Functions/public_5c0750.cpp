#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c075b _public_5c075b
#define public_5c0769 _public_5c0769

PROC_DECLARE(0x5c0750, internal_5c0750, public_5c0750);
/* CHUNK of public_532210 */
extern "C" NAKED register_t __cdecl internal_5c0750()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x88]
        jmp public_531af0
        public_5c075b : nop
        mov ecx, dword ptr ss : [ebp-0x88]
        add ecx, 0x10
        jmp public_502d90
        public_5c0769 : nop
        mov eax, offset public_5fa8e0
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0750)
        ASM_EXPORT_ENTRY_FIRST(0x5c075b, public_5c075b)
        ASM_EXPORT_ENTRY_LAST(0x5c0769, public_5c0769)
    }
}

#undef public_5c075b
#undef public_5c0769

#pragma init_seg(compiler)
extern "C" void const* const public_5c075b = __AsmFindLabelExport(&internal_5c0750, 0x5c075b);
extern "C" void const* const public_5c0769 = __AsmFindLabelExport(&internal_5c0750, 0x5c0769);
