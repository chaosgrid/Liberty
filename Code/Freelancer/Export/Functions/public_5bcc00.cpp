#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcc0c _public_5bcc0c
#define public_5bcc18 _public_5bcc18
#define public_5bcc23 _public_5bcc23

PROC_DECLARE(0x5bcc00, internal_5bcc00, public_5bcc00);
/* CHUNK of public_4a5580 */
extern "C" NAKED register_t __cdecl internal_5bcc00()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x2024]
        jmp dword ptr ds : [public_5c62c4]
        public_5bcc0c : nop
        lea ecx, ss:[ebp-0x2018]
        jmp dword ptr ds : [public_5c62b4]
        public_5bcc18 : nop
        lea ecx, ss:[ebp-0x202C]
        jmp public_45eeb0
        public_5bcc23 : nop
        mov eax, offset public_5f6e94
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcc00)
        ASM_EXPORT_ENTRY_FIRST(0x5bcc0c, public_5bcc0c)
        ASM_EXPORT_ENTRY(0x5bcc18, public_5bcc18)
        ASM_EXPORT_ENTRY_LAST(0x5bcc23, public_5bcc23)
    }
}

#undef public_5bcc0c
#undef public_5bcc18
#undef public_5bcc23

#pragma init_seg(compiler)
extern "C" void const* const public_5bcc0c = __AsmFindLabelExport(&internal_5bcc00, 0x5bcc0c);
extern "C" void const* const public_5bcc18 = __AsmFindLabelExport(&internal_5bcc00, 0x5bcc18);
extern "C" void const* const public_5bcc23 = __AsmFindLabelExport(&internal_5bcc00, 0x5bcc23);
