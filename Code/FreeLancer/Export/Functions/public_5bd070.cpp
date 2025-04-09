#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bd07c _public_5bd07c
#define public_5bd088 _public_5bd088

PROC_DECLARE(0x5bd070, internal_5bd070, public_5bd070);
/* CHUNK of public_4b40d0 */
extern "C" NAKED register_t __cdecl internal_5bd070()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x22C]
        jmp dword ptr ds : [public_5c63a8]
        public_5bd07c : nop
        lea ecx, ss:[ebp-0x220]
        jmp dword ptr ds : [public_5c60fc]
        public_5bd088 : nop
        mov eax, offset public_5f7308
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bd070)
        ASM_EXPORT_ENTRY_FIRST(0x5bd07c, public_5bd07c)
        ASM_EXPORT_ENTRY_LAST(0x5bd088, public_5bd088)
    }
}

#undef public_5bd07c
#undef public_5bd088

#pragma init_seg(compiler)
extern "C" void const* const public_5bd07c = __AsmFindLabelExport(&internal_5bd070, 0x5bd07c);
extern "C" void const* const public_5bd088 = __AsmFindLabelExport(&internal_5bd070, 0x5bd088);
