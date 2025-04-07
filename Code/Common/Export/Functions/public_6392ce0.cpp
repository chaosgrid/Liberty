#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_627e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6392ce8 _public_6392ce8
#define public_6392cf0 _public_6392cf0
#define public_6392cf8 _public_6392cf8

PROC_DECLARE(0x6392ce0, internal_6392ce0, public_6392ce0);
/* CHUNK of public_627d4a0 */
extern "C" NAKED register_t __cdecl internal_6392ce0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        lea ecx, ss:[ebp+4]
        jmp public_627e5e0
        public_6392ce8 : nop
        lea ecx, ss:[ebp-0x20]
        jmp public_627dbb0
        public_6392cf0 : nop
        mov ecx, dword ptr ss : [ebp+4]
        jmp public_627e5e0
        public_6392cf8 : nop
        mov eax, offset public_63abb54
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6392ce0)
        ASM_EXPORT_ENTRY_FIRST(0x6392ce8, public_6392ce8)
        ASM_EXPORT_ENTRY(0x6392cf0, public_6392cf0)
        ASM_EXPORT_ENTRY_LAST(0x6392cf8, public_6392cf8)
    }
}

#undef public_6392ce8
#undef public_6392cf0
#undef public_6392cf8

#pragma init_seg(compiler)
extern "C" void const* const public_6392ce8 = __AsmFindLabelExport(&internal_6392ce0, 0x6392ce8);
extern "C" void const* const public_6392cf0 = __AsmFindLabelExport(&internal_6392ce0, 0x6392cf0);
extern "C" void const* const public_6392cf8 = __AsmFindLabelExport(&internal_6392ce0, 0x6392cf8);
