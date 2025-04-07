#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d45980);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62e89 _public_6d62e89
#define public_6d62e95 _public_6d62e95
#define public_6d62ea0 _public_6d62ea0
#define public_6d62eac _public_6d62eac

PROC_DECLARE(0x6d62e80, internal_6d62e80, public_6d62e80);
/* CHUNK of public_6d45840 */
extern "C" NAKED register_t __cdecl internal_6d62e80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x58]
        jmp dword ptr ds : [public_6d64850]
        public_6d62e89 : nop
        lea ecx, ss:[ebp-0x84]
        jmp dword ptr ds : [public_6d6484c]
        public_6d62e95 : nop
        lea ecx, ss:[ebp-0x90]
        jmp public_6d45980
        public_6d62ea0 : nop
        lea ecx, ss:[ebp-0x84]
        jmp dword ptr ds : [public_6d6484c]
        public_6d62eac : nop
        mov eax, offset public_6d752ec
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62e80)
        ASM_EXPORT_ENTRY_FIRST(0x6d62e89, public_6d62e89)
        ASM_EXPORT_ENTRY(0x6d62e95, public_6d62e95)
        ASM_EXPORT_ENTRY(0x6d62ea0, public_6d62ea0)
        ASM_EXPORT_ENTRY_LAST(0x6d62eac, public_6d62eac)
    }
}

#undef public_6d62e89
#undef public_6d62e95
#undef public_6d62ea0
#undef public_6d62eac

#pragma init_seg(compiler)
extern "C" void const* const public_6d62e89 = __AsmFindLabelExport(&internal_6d62e80, 0x6d62e89);
extern "C" void const* const public_6d62e95 = __AsmFindLabelExport(&internal_6d62e80, 0x6d62e95);
extern "C" void const* const public_6d62ea0 = __AsmFindLabelExport(&internal_6d62e80, 0x6d62ea0);
extern "C" void const* const public_6d62eac = __AsmFindLabelExport(&internal_6d62e80, 0x6d62eac);
