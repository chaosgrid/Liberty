#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e7e);

#define public_5bcc79 _public_5bcc79
#define public_5bcc82 _public_5bcc82
#define public_5bcc8a _public_5bcc8a

PROC_DECLARE(0x5bcc70, internal_5bcc70, public_5bcc70);
/* CHUNK of public_4a6630 */
extern "C" NAKED register_t __cdecl internal_5bcc70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x44]
        jmp dword ptr ds : [public_5c62c4]
        public_5bcc79 : nop
        lea ecx, ss:[ebp-0x50]
        jmp dword ptr ds : [public_5c62b4]
        public_5bcc82 : nop
        lea ecx, ss:[ebp+8]
        jmp public_45eeb0
        public_5bcc8a : nop
        mov eax, offset public_5f6f34
        jmp public_5b7e7e
        UNREACHABLE_TRAP(0x5bcc70)
        ASM_EXPORT_ENTRY_FIRST(0x5bcc79, public_5bcc79)
        ASM_EXPORT_ENTRY(0x5bcc82, public_5bcc82)
        ASM_EXPORT_ENTRY_LAST(0x5bcc8a, public_5bcc8a)
    }
}

#undef public_5bcc79
#undef public_5bcc82
#undef public_5bcc8a

#pragma init_seg(compiler)
extern "C" void const* const public_5bcc79 = __AsmFindLabelExport(&internal_5bcc70, 0x5bcc79);
extern "C" void const* const public_5bcc82 = __AsmFindLabelExport(&internal_5bcc70, 0x5bcc82);
extern "C" void const* const public_5bcc8a = __AsmFindLabelExport(&internal_5bcc70, 0x5bcc8a);
