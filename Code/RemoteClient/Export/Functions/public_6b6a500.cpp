#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a450);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a13a);

#define public_6b6a509 _public_6b6a509
#define public_6b6a511 _public_6b6a511

PROC_DECLARE(0x6b6a500, internal_6b6a500, public_6b6a500);
/* CHUNK of public_6b33800 */
extern "C" NAKED register_t __cdecl internal_6b6a500()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x38]
        jmp dword ptr ds : [public_6b6b03c]
        public_6b6a509 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6b3a450
        public_6b6a511 : nop
        mov eax, offset public_6b6eba0
        jmp public_6b6a13a
        UNREACHABLE_TRAP(0x6b6a500)
        ASM_EXPORT_ENTRY_FIRST(0x6b6a509, public_6b6a509)
        ASM_EXPORT_ENTRY_LAST(0x6b6a511, public_6b6a511)
    }
}

#undef public_6b6a509
#undef public_6b6a511

#pragma init_seg(compiler)
extern "C" void const* const public_6b6a509 = __AsmFindLabelExport(&internal_6b6a500, 0x6b6a509);
extern "C" void const* const public_6b6a511 = __AsmFindLabelExport(&internal_6b6a500, 0x6b6a511);
