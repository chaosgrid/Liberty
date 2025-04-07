#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_627e9b0);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_63942f8 _public_63942f8
#define public_6394303 _public_6394303
#define public_639430e _public_639430e
#define public_6394316 _public_6394316
#define public_639431e _public_639431e

PROC_DECLARE(0x63942f0, internal_63942f0, public_63942f0);
/* CHUNK of public_62af2e0 */
extern "C" NAKED register_t __cdecl internal_63942f0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627cae0
        public_63942f8 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6269110
        public_6394303 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x78
        jmp public_62a68e0
        public_639430e : nop
        lea ecx, ss:[ebp-3]
        jmp public_627e9b0
        public_6394316 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_627e9b0
        public_639431e : nop
        mov eax, offset public_63ad8d0
        jmp public_6391da2
        UNREACHABLE_TRAP(0x63942f0)
        ASM_EXPORT_ENTRY_FIRST(0x63942f8, public_63942f8)
        ASM_EXPORT_ENTRY(0x6394303, public_6394303)
        ASM_EXPORT_ENTRY(0x639430e, public_639430e)
        ASM_EXPORT_ENTRY(0x6394316, public_6394316)
        ASM_EXPORT_ENTRY_LAST(0x639431e, public_639431e)
    }
}

#undef public_63942f8
#undef public_6394303
#undef public_639430e
#undef public_6394316
#undef public_639431e

#pragma init_seg(compiler)
extern "C" void const* const public_63942f8 = __AsmFindLabelExport(&internal_63942f0, 0x63942f8);
extern "C" void const* const public_6394303 = __AsmFindLabelExport(&internal_63942f0, 0x6394303);
extern "C" void const* const public_639430e = __AsmFindLabelExport(&internal_63942f0, 0x639430e);
extern "C" void const* const public_6394316 = __AsmFindLabelExport(&internal_63942f0, 0x6394316);
extern "C" void const* const public_639431e = __AsmFindLabelExport(&internal_63942f0, 0x639431e);
