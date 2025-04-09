#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_502d90);
CLANG_FORWARD_PROC_SYMBOL(public_52ca50);
CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5c0438 _public_5c0438
#define public_5c0443 _public_5c0443
#define public_5c044e _public_5c044e

PROC_DECLARE(0x5c0430, internal_5c0430, public_5c0430);
/* CHUNK of public_52c830 */
extern "C" NAKED register_t __cdecl internal_5c0430()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_531af0
        public_5c0438 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x10
        jmp public_52ca50
        public_5c0443 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x30
        jmp public_502d90
        public_5c044e : nop
        mov eax, offset public_5fa4dc
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5c0430)
        ASM_EXPORT_ENTRY_FIRST(0x5c0438, public_5c0438)
        ASM_EXPORT_ENTRY(0x5c0443, public_5c0443)
        ASM_EXPORT_ENTRY_LAST(0x5c044e, public_5c044e)
    }
}

#undef public_5c0438
#undef public_5c0443
#undef public_5c044e

#pragma init_seg(compiler)
extern "C" void const* const public_5c0438 = __AsmFindLabelExport(&internal_5c0430, 0x5c0438);
extern "C" void const* const public_5c0443 = __AsmFindLabelExport(&internal_5c0430, 0x5c0443);
extern "C" void const* const public_5c044e = __AsmFindLabelExport(&internal_5c0430, 0x5c044e);
