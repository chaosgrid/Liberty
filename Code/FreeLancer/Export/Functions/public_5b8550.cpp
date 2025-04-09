#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406b80);
CLANG_FORWARD_PROC_SYMBOL(public_40d470);
CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5b8558 _public_5b8558
#define public_5b8563 _public_5b8563
#define public_5b856e _public_5b856e
#define public_5b8579 _public_5b8579

PROC_DECLARE(0x5b8550, internal_5b8550, public_5b8550);
/* CHUNK of public_4097a0 */
extern "C" NAKED register_t __cdecl internal_5b8550()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_406b80
        public_5b8558 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x20
        jmp public_4de730
        public_5b8563 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_4de730
        public_5b856e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x40
        jmp public_40d470
        public_5b8579 : nop
        mov eax, offset public_5f2158
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5b8550)
        ASM_EXPORT_ENTRY_FIRST(0x5b8558, public_5b8558)
        ASM_EXPORT_ENTRY(0x5b8563, public_5b8563)
        ASM_EXPORT_ENTRY(0x5b856e, public_5b856e)
        ASM_EXPORT_ENTRY_LAST(0x5b8579, public_5b8579)
    }
}

#undef public_5b8558
#undef public_5b8563
#undef public_5b856e
#undef public_5b8579

#pragma init_seg(compiler)
extern "C" void const* const public_5b8558 = __AsmFindLabelExport(&internal_5b8550, 0x5b8558);
extern "C" void const* const public_5b8563 = __AsmFindLabelExport(&internal_5b8550, 0x5b8563);
extern "C" void const* const public_5b856e = __AsmFindLabelExport(&internal_5b8550, 0x5b856e);
extern "C" void const* const public_5b8579 = __AsmFindLabelExport(&internal_5b8550, 0x5b8579);
