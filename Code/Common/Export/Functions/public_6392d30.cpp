#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627dae0);
CLANG_FORWARD_PROC_SYMBOL(public_627dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392d38 _public_6392d38
#define public_6392d40 _public_6392d40
#define public_6392d48 _public_6392d48
#define public_6392d50 _public_6392d50

PROC_DECLARE(0x6392d30, internal_6392d30, public_6392d30);
/* CHUNK of public_627d8a0 */
extern "C" NAKED register_t __cdecl internal_6392d30()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp-0x65]
        jmp public_627e5e0
        public_6392d38 : nop
        lea ecx, ss:[ebp-0x30]
        jmp public_627dae0
        public_6392d40 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_627dbb0
        public_6392d48 : nop
        lea ecx, ss:[ebp-0x40]
        jmp public_6269110
        public_6392d50 : nop
        mov eax, offset public_63abbb4
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392d30)
        ASM_EXPORT_ENTRY_FIRST(0x6392d38, public_6392d38)
        ASM_EXPORT_ENTRY(0x6392d40, public_6392d40)
        ASM_EXPORT_ENTRY(0x6392d48, public_6392d48)
        ASM_EXPORT_ENTRY_LAST(0x6392d50, public_6392d50)
    }
}

#undef public_6392d38
#undef public_6392d40
#undef public_6392d48
#undef public_6392d50

#pragma init_seg(compiler)
extern "C" void const* const public_6392d38 = __AsmFindLabelExport(&internal_6392d30, 0x6392d38);
extern "C" void const* const public_6392d40 = __AsmFindLabelExport(&internal_6392d30, 0x6392d40);
extern "C" void const* const public_6392d48 = __AsmFindLabelExport(&internal_6392d30, 0x6392d48);
extern "C" void const* const public_6392d50 = __AsmFindLabelExport(&internal_6392d30, 0x6392d50);
