#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39230);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e96);

#define public_6f58c78 _public_6f58c78
#define public_6f58c81 _public_6f58c81
#define public_6f58c89 _public_6f58c89
#define public_6f58c91 _public_6f58c91
#define public_6f58c99 _public_6f58c99
#define public_6f58ca1 _public_6f58ca1

PROC_DECLARE(0x6f58c70, internal_6f58c70, public_6f58c70);
/* CHUNK of public_6f38fb0 */
extern "C" NAKED register_t __cdecl internal_6f58c70()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x5C]
        jmp public_6f3b9f0
        public_6f58c78 : nop
        lea ecx, ss:[ebp-0x3C]
        jmp dword ptr ds : [public_6f5a014]
        public_6f58c81 : nop
        lea ecx, ss:[ebp-0x4C]
        jmp public_6f3b9f0
        public_6f58c89 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f3b9f0
        public_6f58c91 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f39230
        public_6f58c99 : nop
        lea ecx, ss:[ebp-0x2C]
        jmp public_6f3b9f0
        public_6f58ca1 : nop
        mov eax, offset public_6f5be38
        jmp public_6f57e96
        UNREACHABLE_TRAP(0x6f58c70)
        ASM_EXPORT_ENTRY_FIRST(0x6f58c78, public_6f58c78)
        ASM_EXPORT_ENTRY(0x6f58c81, public_6f58c81)
        ASM_EXPORT_ENTRY(0x6f58c89, public_6f58c89)
        ASM_EXPORT_ENTRY(0x6f58c91, public_6f58c91)
        ASM_EXPORT_ENTRY(0x6f58c99, public_6f58c99)
        ASM_EXPORT_ENTRY_LAST(0x6f58ca1, public_6f58ca1)
    }
}

#undef public_6f58c78
#undef public_6f58c81
#undef public_6f58c89
#undef public_6f58c91
#undef public_6f58c99
#undef public_6f58ca1

#pragma init_seg(compiler)
extern "C" void const* const public_6f58c78 = __AsmFindLabelExport(&internal_6f58c70, 0x6f58c78);
extern "C" void const* const public_6f58c81 = __AsmFindLabelExport(&internal_6f58c70, 0x6f58c81);
extern "C" void const* const public_6f58c89 = __AsmFindLabelExport(&internal_6f58c70, 0x6f58c89);
extern "C" void const* const public_6f58c91 = __AsmFindLabelExport(&internal_6f58c70, 0x6f58c91);
extern "C" void const* const public_6f58c99 = __AsmFindLabelExport(&internal_6f58c70, 0x6f58c99);
extern "C" void const* const public_6f58ca1 = __AsmFindLabelExport(&internal_6f58c70, 0x6f58ca1);
