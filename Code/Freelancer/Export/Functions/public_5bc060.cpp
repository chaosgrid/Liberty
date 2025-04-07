#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bc069 _public_5bc069
#define public_5bc072 _public_5bc072

PROC_DECLARE(0x5bc060, internal_5bc060, public_5bc060);
/* CHUNK of public_483ae0 */
extern "C" NAKED register_t __cdecl internal_5bc060()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x18]
        jmp dword ptr ds : [public_5c60fc]
        public_5bc069 : nop
        lea ecx, ss:[ebp-0x24]
        jmp dword ptr ds : [public_5c63a8]
        public_5bc072 : nop
        mov eax, offset public_5f6494
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bc060)
        ASM_EXPORT_ENTRY_FIRST(0x5bc069, public_5bc069)
        ASM_EXPORT_ENTRY_LAST(0x5bc072, public_5bc072)
    }
}

#undef public_5bc069
#undef public_5bc072

#pragma init_seg(compiler)
extern "C" void const* const public_5bc069 = __AsmFindLabelExport(&internal_5bc060, 0x5bc069);
extern "C" void const* const public_5bc072 = __AsmFindLabelExport(&internal_5bc060, 0x5bc072);
