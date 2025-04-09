#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_52ca50);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0468 _public_5c0468
#define public_5c0473 _public_5c0473
#define public_5c047e _public_5c047e

PROC_DECLARE(0x5c0460, internal_5c0460, public_5c0460);
/* CHUNK of public_52caa0 */
extern "C" NAKED register_t __cdecl internal_5c0460()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x40]
        jmp public_531af0
        public_5c0468 : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x10
        jmp public_52ca50
        public_5c0473 : nop
        mov ecx, dword ptr ss : [ebp-0x40]
        add ecx, 0x30
        jmp public_502d90
        public_5c047e : nop
        mov eax, offset public_5fa510
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0460)
        ASM_EXPORT_ENTRY_FIRST(0x5c0468, public_5c0468)
        ASM_EXPORT_ENTRY(0x5c0473, public_5c0473)
        ASM_EXPORT_ENTRY_LAST(0x5c047e, public_5c047e)
    }
}

#undef public_5c0468
#undef public_5c0473
#undef public_5c047e

#pragma init_seg(compiler)
extern "C" void const* const public_5c0468 = __AsmFindLabelExport(&internal_5c0460, 0x5c0468);
extern "C" void const* const public_5c0473 = __AsmFindLabelExport(&internal_5c0460, 0x5c0473);
extern "C" void const* const public_5c047e = __AsmFindLabelExport(&internal_5c0460, 0x5c047e);
