#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627be50);
CLANG_FORWARD_PROC_SYMBOL(public_627c930);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392c68 _public_6392c68
#define public_6392c70 _public_6392c70
#define public_6392c78 _public_6392c78
#define public_6392c80 _public_6392c80

PROC_DECLARE(0x6392c60, internal_6392c60, public_6392c60);
/* CHUNK of public_627c310 */
extern "C" NAKED register_t __cdecl internal_6392c60()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x34]
        jmp public_627be50
        public_6392c68 : nop
        lea ecx, ss:[ebp-0x34]
        jmp public_627c930
        public_6392c70 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_627be50
        public_6392c78 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_627c930
        public_6392c80 : nop
        mov eax, offset public_63aba94
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392c60)
        ASM_EXPORT_ENTRY_FIRST(0x6392c68, public_6392c68)
        ASM_EXPORT_ENTRY(0x6392c70, public_6392c70)
        ASM_EXPORT_ENTRY(0x6392c78, public_6392c78)
        ASM_EXPORT_ENTRY_LAST(0x6392c80, public_6392c80)
    }
}

#undef public_6392c68
#undef public_6392c70
#undef public_6392c78
#undef public_6392c80

#pragma init_seg(compiler)
extern "C" void const* const public_6392c68 = __AsmFindLabelExport(&internal_6392c60, 0x6392c68);
extern "C" void const* const public_6392c70 = __AsmFindLabelExport(&internal_6392c60, 0x6392c70);
extern "C" void const* const public_6392c78 = __AsmFindLabelExport(&internal_6392c60, 0x6392c78);
extern "C" void const* const public_6392c80 = __AsmFindLabelExport(&internal_6392c60, 0x6392c80);
