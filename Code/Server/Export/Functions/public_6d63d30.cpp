#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d55b70);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63d39 _public_6d63d39
#define public_6d63d41 _public_6d63d41
#define public_6d63d4a _public_6d63d4a

PROC_DECLARE(0x6d63d30, internal_6d63d30, public_6d63d30);
/* CHUNK of public_6d5b920 */
extern "C" NAKED register_t __cdecl internal_6d63d30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x40]
        jmp dword ptr ds : [public_6d64694]
        public_6d63d39 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_6d55b70
        public_6d63d41 : nop
        lea ecx, ss:[ebp-0x40]
        jmp dword ptr ds : [public_6d64694]
        public_6d63d4a : nop
        mov eax, offset public_6d75f28
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63d30)
        ASM_EXPORT_ENTRY_FIRST(0x6d63d39, public_6d63d39)
        ASM_EXPORT_ENTRY(0x6d63d41, public_6d63d41)
        ASM_EXPORT_ENTRY_LAST(0x6d63d4a, public_6d63d4a)
    }
}

#undef public_6d63d39
#undef public_6d63d41
#undef public_6d63d4a

#pragma init_seg(compiler)
extern "C" void const* const public_6d63d39 = __AsmFindLabelExport(&internal_6d63d30, 0x6d63d39);
extern "C" void const* const public_6d63d41 = __AsmFindLabelExport(&internal_6d63d30, 0x6d63d41);
extern "C" void const* const public_6d63d4a = __AsmFindLabelExport(&internal_6d63d30, 0x6d63d4a);
