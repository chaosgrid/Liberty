#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6269110);
CLANG_FORWARD_PROC_SYMBOL(public_627cae0);
CLANG_FORWARD_PROC_SYMBOL(public_6280b30);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62af440);
CLANG_FORWARD_PROC_SYMBOL(public_6391da2);

#define public_6393c48 _public_6393c48
#define public_6393c53 _public_6393c53
#define public_6393c5e _public_6393c5e
#define public_6393c66 _public_6393c66
#define public_6393c74 _public_6393c74

PROC_DECLARE(0x6393c40, internal_6393c40, public_6393c40);
/* CHUNK of public_62a22f0 */
extern "C" NAKED register_t __cdecl internal_6393c40()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_627cae0
        public_6393c48 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x64
        jmp public_6269110
        public_6393c53 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x78
        jmp public_62a68e0
        public_6393c5e : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        jmp public_62af440
        public_6393c66 : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        add ecx, 0x9C
        jmp public_6280b30
        public_6393c74 : nop
        mov eax, offset public_63ad074
        jmp public_6391da2
        UNREACHABLE_TRAP(0x6393c40)
        ASM_EXPORT_ENTRY_FIRST(0x6393c48, public_6393c48)
        ASM_EXPORT_ENTRY(0x6393c53, public_6393c53)
        ASM_EXPORT_ENTRY(0x6393c5e, public_6393c5e)
        ASM_EXPORT_ENTRY(0x6393c66, public_6393c66)
        ASM_EXPORT_ENTRY_LAST(0x6393c74, public_6393c74)
    }
}

#undef public_6393c48
#undef public_6393c53
#undef public_6393c5e
#undef public_6393c66
#undef public_6393c74

#pragma init_seg(compiler)
extern "C" void const* const public_6393c48 = __AsmFindLabelExport(&internal_6393c40, 0x6393c48);
extern "C" void const* const public_6393c53 = __AsmFindLabelExport(&internal_6393c40, 0x6393c53);
extern "C" void const* const public_6393c5e = __AsmFindLabelExport(&internal_6393c40, 0x6393c5e);
extern "C" void const* const public_6393c66 = __AsmFindLabelExport(&internal_6393c40, 0x6393c66);
extern "C" void const* const public_6393c74 = __AsmFindLabelExport(&internal_6393c40, 0x6393c74);
