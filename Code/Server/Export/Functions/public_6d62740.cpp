#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d29370);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d62748 _public_6d62748
#define public_6d62751 _public_6d62751

PROC_DECLARE(0x6d62740, internal_6d62740, public_6d62740);
/* CHUNK of public_6d1ec30 */
extern "C" NAKED register_t __cdecl internal_6d62740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp public_6d29370
        public_6d62748 : nop
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6d64b94]
        public_6d62751 : nop
        mov eax, offset public_6d73398
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d62740)
        ASM_EXPORT_ENTRY_FIRST(0x6d62748, public_6d62748)
        ASM_EXPORT_ENTRY_LAST(0x6d62751, public_6d62751)
    }
}

#undef public_6d62748
#undef public_6d62751

#pragma init_seg(compiler)
extern "C" void const* const public_6d62748 = __AsmFindLabelExport(&internal_6d62740, 0x6d62748);
extern "C" void const* const public_6d62751 = __AsmFindLabelExport(&internal_6d62740, 0x6d62751);
