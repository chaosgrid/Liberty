#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a529 _public_6b6a529
#define public_6b6a531 _public_6b6a531

PROC_DECLARE(0x6b6a520, internal_6b6a520, public_6b6a520);
/* CHUNK of public_6b339e0 */
extern "C" NAKED register_t __cdecl internal_6b6a520()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6b6b03c]
        public_6b6a529 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6b3a450
        public_6b6a531 : nop
        mov eax, offset public_6b6ebcc
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a520)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a529, public_6b6a529)
        ASM_EXPORT_ENTRY_LAST(0x6b6a531, public_6b6a531)
    }
}

#undef public_6b6a529
#undef public_6b6a531

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a529 = __AsmFindLabelExport(&internal_6b6a520, 0x6b6a529);
extern "C" void const* const public_6b6a531 = __AsmFindLabelExport(&internal_6b6a520, 0x6b6a531);
