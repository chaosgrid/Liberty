#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bec4e0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d2c);

#define public_6c0a888 _public_6c0a888
#define public_6c0a890 _public_6c0a890

PROC_DECLARE(0x6c0a880, internal_6c0a880, public_6c0a880);
/* CHUNK of public_6bec430 */
extern "C" NAKED register_t __cdecl internal_6c0a880()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x74]
        jmp public_6bec4e0
        public_6c0a888 : nop
        lea ecx, ss:[ebp-0x44]
        jmp public_6bec4f0
        public_6c0a890 : nop
        mov eax, offset public_6c0ef50
        jmp public_6c09d2c
        UNREACHABLE_TRAP(0x6c0a880)
        ASM_EXPORT_ENTRY_FIRST(0x6c0a888, public_6c0a888)
        ASM_EXPORT_ENTRY_LAST(0x6c0a890, public_6c0a890)
    }
}

#undef public_6c0a888
#undef public_6c0a890

#pragma init_seg(compiler)
extern "C" void const* const public_6c0a888 = __AsmFindLabelExport(&internal_6c0a880, 0x6c0a888);
extern "C" void const* const public_6c0a890 = __AsmFindLabelExport(&internal_6c0a880, 0x6c0a890);
