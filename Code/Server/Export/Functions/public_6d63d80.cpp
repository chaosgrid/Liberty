#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d086f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60018);

#define public_6d63d89 _public_6d63d89
#define public_6d63d94 _public_6d63d94
#define public_6d63d9d _public_6d63d9d
#define public_6d63da9 _public_6d63da9
#define public_6d63db4 _public_6d63db4
#define public_6d63dc0 _public_6d63dc0

PROC_DECLARE(0x6d63d80, internal_6d63d80, public_6d63d80);
/* CHUNK of public_6d5f130 */
extern "C" NAKED register_t __cdecl internal_6d63d80()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_6d64694]
        public_6d63d89 : nop
        lea ecx, ss:[ebp-0x84]
        jmp public_6d086f0
        public_6d63d94 : nop
        lea ecx, ss:[ebp-0x6C]
        jmp dword ptr ds : [public_6d64694]
        public_6d63d9d : nop
        lea ecx, ss:[ebp-0xE4]
        jmp dword ptr ds : [public_6d64694]
        public_6d63da9 : nop
        lea ecx, ss:[ebp-0xFC]
        jmp public_6d086f0
        public_6d63db4 : nop
        lea ecx, ss:[ebp-0xE4]
        jmp dword ptr ds : [public_6d64694]
        public_6d63dc0 : nop
        mov eax, offset public_6d75fa0
        jmp public_6d60018
        UNREACHABLE_TRAP(0x6d63d80)
        ASM_EXPORT_ENTRY_FIRST(0x6d63d89, public_6d63d89)
        ASM_EXPORT_ENTRY(0x6d63d94, public_6d63d94)
        ASM_EXPORT_ENTRY(0x6d63d9d, public_6d63d9d)
        ASM_EXPORT_ENTRY(0x6d63da9, public_6d63da9)
        ASM_EXPORT_ENTRY(0x6d63db4, public_6d63db4)
        ASM_EXPORT_ENTRY_LAST(0x6d63dc0, public_6d63dc0)
    }
}

#undef public_6d63d89
#undef public_6d63d94
#undef public_6d63d9d
#undef public_6d63da9
#undef public_6d63db4
#undef public_6d63dc0

#pragma init_seg(compiler)
extern "C" void const* const public_6d63d89 = __AsmFindLabelExport(&internal_6d63d80, 0x6d63d89);
extern "C" void const* const public_6d63d94 = __AsmFindLabelExport(&internal_6d63d80, 0x6d63d94);
extern "C" void const* const public_6d63d9d = __AsmFindLabelExport(&internal_6d63d80, 0x6d63d9d);
extern "C" void const* const public_6d63da9 = __AsmFindLabelExport(&internal_6d63d80, 0x6d63da9);
extern "C" void const* const public_6d63db4 = __AsmFindLabelExport(&internal_6d63d80, 0x6d63db4);
extern "C" void const* const public_6d63dc0 = __AsmFindLabelExport(&internal_6d63d80, 0x6d63dc0);
