#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a2d30);
CLANG_FORWARD_PROC_SYMBOL(public_532d30);
CLANG_FORWARD_PROC_SYMBOL(public_5359c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c07cb _public_5c07cb
#define public_5c07d9 _public_5c07d9
#define public_5c07e7 _public_5c07e7

PROC_DECLARE(0x5c07c0, internal_5c07c0, public_5c07c0);
/* CHUNK of public_532bc0 */
extern "C" NAKED register_t __cdecl internal_5c07c0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC
        jmp public_532d30
        public_5c07cb : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xB4
        jmp public_4a2d30
        public_5c07d9 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0xC0
        jmp public_5359c0
        public_5c07e7 : nop
        mov eax, offset public_5fa9c8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c07c0)
        ASM_EXPORT_ENTRY_FIRST(0x5c07cb, public_5c07cb)
        ASM_EXPORT_ENTRY(0x5c07d9, public_5c07d9)
        ASM_EXPORT_ENTRY_LAST(0x5c07e7, public_5c07e7)
    }
}

#undef public_5c07cb
#undef public_5c07d9
#undef public_5c07e7

#pragma init_seg(compiler)
extern "C" void const* const public_5c07cb = __AsmFindLabelExport(&internal_5c07c0, 0x5c07cb);
extern "C" void const* const public_5c07d9 = __AsmFindLabelExport(&internal_5c07c0, 0x5c07d9);
extern "C" void const* const public_5c07e7 = __AsmFindLabelExport(&internal_5c07c0, 0x5c07e7);
