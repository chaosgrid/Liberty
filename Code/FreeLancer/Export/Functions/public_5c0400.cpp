#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4de730);
CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_52a250);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0408 _public_5c0408
#define public_5c0413 _public_5c0413
#define public_5c041e _public_5c041e

PROC_DECLARE(0x5c0400, internal_5c0400, public_5c0400);
/* CHUNK of public_52b510 */
extern "C" NAKED register_t __cdecl internal_5c0400()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_52a250
        public_5c0408 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_4de730
        public_5c0413 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x44
        jmp public_502d90
        public_5c041e : nop
        mov eax, offset public_5fa4a8
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0400)
        ASM_EXPORT_ENTRY_FIRST(0x5c0408, public_5c0408)
        ASM_EXPORT_ENTRY(0x5c0413, public_5c0413)
        ASM_EXPORT_ENTRY_LAST(0x5c041e, public_5c041e)
    }
}

#undef public_5c0408
#undef public_5c0413
#undef public_5c041e

#pragma init_seg(compiler)
extern "C" void const* const public_5c0408 = __AsmFindLabelExport(&internal_5c0400, 0x5c0408);
extern "C" void const* const public_5c0413 = __AsmFindLabelExport(&internal_5c0400, 0x5c0413);
extern "C" void const* const public_5c041e = __AsmFindLabelExport(&internal_5c0400, 0x5c041e);
